.org 8000h
    ljmp start

.org 8100h
start:
    mov P1, #0FFh
    mov P3, #0FFh
    lcall init              ; Initialize peripherals
loop:
    mov dptr, #4005h        ; Check the line status register to see if a byte has been received from MIDI
    movx a, @dptr
    anl a, #01h
    jz nomidi
    lcall midi              ; Read MIDI data

    nomidi:
    lcall buttons           ; Update buttons
    cjne r5, #01h, fftstat  ; No FFT complete signal from PSoC yet
    mov a, #70h             ; Send state packet data
    lcall uarttx            ; Send to PSoC
    mov r0, #00h            ; Potentiometer read counter
    readadc:
        mov a, r0           ; Set which potentiometer to read
        orl a, #0E0h        ; Keep input bits (for buttons) high
        mov P1, a
        mov dptr, #2000h
        movx a, @dptr       ; Start ADC conversion
        mov r1, #01h
        wait:               ; Wait for conversion
            djnz r1, wait
        movx a, @dptr       ; Read ADC value
        lcall sndchr
        lcall uarttx        ; Send to PSoC
        inc r0
        cjne r0, #28d, readadc  ; Read 28 potentiometers
    mov a, r4
    lcall uarttx            ; Send waveform mode
    mov r5, #00h            ; Clear FFT complete flag
    sjmp loop

    fftstat:
    mov dptr, #6005h        ; Check the line status register to see if FFT complete signal has been received from PSoC
    movx a, @dptr
    anl a, #01h
    jz loop
    mov dptr, #6000h        ; Read byte
    movx a, @dptr
    mov r5, #01h            ; Set FFT complete flag
    sjmp loop

init:
    mov r4, #01h            ; Set waveform mode to sine
    mov a, r4
    rl a                    ; Left shift two times
    rl a
    orl a, #0E3h            ; Keep special function bits set
    mov P3, a               ; Light button
    mov r5, #01h            ; Set FFT complete flag

    mov tmod, #20h          ; Set timer 1 for auto reload - mode 2
    mov tcon, #40h          ; Run timer 1
    mov th1,  #253          ; Set 9600 baud with xtal=11.059mhz
    mov scon, #50h          ; Set serial control reg for 8 bit data and mode 1

    mov a, #83h             ; Set 8-bit char, no parity, 1 stop bit, DLAB=1
    mov dptr, #4003h        ; Line control address
    movx @dptr, a
    mov dptr, #6003h        ; Line control address
    movx @dptr, a

    mov a, #04h             ; Set div for 31250 baud with xtal=2MHz on MIDI serial
    mov dptr, #4000h        ; Divisor latch address
    movx @dptr, a
    mov a, #02h             ; Set div for 62500  baud with xtal=2MHz on PSoC serial
    mov dptr, #6000h        ; Divisor latch address
    movx @dptr, a

    mov a, #00h
    mov dptr, #4001h
    movx @dptr, a
    mov dptr, #6001h
    movx @dptr, a

    mov a, #01h             ; FIFO enable
    mov dptr, #4002h        ; FIFO control register
    movx @dptr, a

    mov a, #03h             ; set DLAB=0
    mov dptr, #4003h        ; Line control address
    movx @dptr, a
    mov dptr, #6003h        ; Line control address
    movx @dptr, a

    mov a, #00h             ; Disable interrupts
    mov dptr, #4001h        ; Interrupt enable register
    movx @dptr, a
    mov dptr, #6001h        ; Interrupt enable register
    movx @dptr, a
    ret

midi:
    mov dptr, #4000h        ; Read in a byte from the buffer register
    movx a, @dptr
    lcall prthex
    cjne a, #90h, noteoffcheck ; Check if note on message
    noteon:
    mov dptr, #4005h        ; Check the line status register to see if a byte has been received from MIDI
    movx a, @dptr
    anl a, #01h
    jz noteon
    mov dptr, #4000h        ; Read in note number byte
    movx a, @dptr
    push acc
    mov a, #90h             ; Send note on byte to PSoC
    lcall uarttx
    pop acc
    lcall prthex
    lcall uarttx            ; Send note number to PSoC
    noteon2:
    mov dptr, #4005h        ; Check the line status register to see if a byte has been received from MIDI
    movx a, @dptr
    anl a, #01h
    jz noteon2
    mov dptr, #4000h        ; Read in velocity byte
    movx a, @dptr
    lcall prthex
    lcall uarttx            ; Send velocity byte to PSoC
    ret

    noteoffcheck:
    cjne a, #80h, mididone  ; Check if note off byte
    noteoff:
    mov dptr, #4005h        ; Check the line status register to see if a byte has been received from MIDI
    movx a, @dptr
    anl a, #01h
    jz noteoff
    mov dptr, #4000h        ; Read in note number byte
    movx a, @dptr
    push acc
    mov a, #80h             ; Send note off byte to PSoC
    lcall uarttx
    pop acc
    lcall prthex
    lcall uarttx            ; Send note number byte to PSoC
    noteoff2:
    mov dptr, #4005h        ; Check the line status register to see if a byte has been received from MIDI
    movx a, @dptr
    anl a, #01h
    jz noteoff2
    mov dptr, #4000h        ; Read in velocity byte and ignore
    movx a, @dptr
    mididone:
    ret

buttons:
    mov a, P1               ; Read from port 1
    swap a                  ; Swap nibbles
    rr a                    ; Right shift
    anl a, #07h             ; acc has button value
    jz bdone                ; acc is nonzero if a button is pressed
    mov r4, a               ; Set waveform mode to button value
    rl a                    ; Left shift twice
    rl a
    orl a, #0E3h            ; Keep special function bits set
    mov P3, a               ; Light button
    bdone:
        ret

uarttx:
    mov dptr, #6000h        ; Send byte to PSoC serial
    movx @dptr, a
    mov dptr, #6005h        ; Check the line status register to see if the byte has been sent
    txwait:
        movx a, @dptr
        anl a, #20h         ; Sixth bit is transmit holding register status
        jz txwait
    ret

prthex:
   push acc
   lcall binasc             ; Convert acc to ASCII
   lcall sndchr             ; Print first ASCII hex digit
   mov   a,  r2             ; Get second ASCII hex digit
   lcall sndchr             ; Print it
   pop acc
   ret
binasc:
   mov   r2, a              ; Save in r2
   anl   a,  #0Fh           ; Convert least sig digit.
   add   a,  #0F6h          ; Adjust it
   jnc   noadj1             ; If a-f then readjust
   add   a,  #07h
noadj1:
   add   a,  #3Ah           ; Make ASCII
   xch   a,  r2             ; Put result in reg 2
   swap  a                  ; Convert most sig digit
   anl   a,  #0Fh           ; Look at least sig half of acc
   add   a,  #0F6h          ; Adjust it
   jnc   noadj2             ; If a-f then re-adjust
   add   a,  #07h
noadj2:
   add   a,  #3Ah           ; Make ASCII
   ret
getchr:
    jnb ri, getchr
    mov a, sbuf
    anl a, #7Fh
    clr ri
    ret
sndchr:
    clr scon.1
    mov sbuf,a
txloop:
    jnb scon.1, txloop
    ret
