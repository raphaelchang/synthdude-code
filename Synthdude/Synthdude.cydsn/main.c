/*******************************************************************************
* main.c
* Raphael Chang
*******************************************************************************/

#include <device.h>
#include <fft.h>
#include <math.h>

#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)

/* Note base frequencies */
#define C0 16.35
#define CS0 17.32
#define D0 18.35
#define DS0 19.45
#define E0 20.60
#define F0 21.83
#define FS0 23.12
#define G0 24.50
#define GS0 25.96
#define A0 27.50
#define AS0 29.14
#define B0 30.87

const double NoteFrequencies[] = {
    C0,
    CS0,
    D0,
    DS0,
    E0,
    F0,
    FS0,
    G0,
    GS0,
    A0,
    AS0,
    B0,
};

const unsigned char SineTable256[N_points] = {
    128,131,134,137,140,143,146,149,
    152,155,158,162,165,167,170,173,
    176,179,182,185,188,190,193,196,
    198,201,203,206,208,211,213,215,
    218,220,222,224,226,228,230,232,
    234,235,237,238,240,241,243,244,
    245,246,248,249,250,250,251,252,
    253,253,254,254,254,255,255,255,
    255,255,255,255,254,254,254,253,
    253,252,251,250,250,249,248,246,
    245,244,243,241,240,238,237,235,
    234,232,230,228,226,224,222,220,
    218,215,213,211,208,206,203,201,
    198,196,193,190,188,185,182,179,
    176,173,170,167,165,162,158,155,
    152,149,146,143,140,137,134,131,
    128,124,121,118,115,112,109,106,
    103,100,97,93,90,88,85,82,
    79,76,73,70,67,65,62,59,
    57,54,52,49,47,44,42,40,
    37,35,33,31,29,27,25,23,
    21,20,18,17,15,14,12,11,
    10,9,7,6,5,5,4,3,
    2,2,1,1,1,0,0,0,
    0,0,0,0,1,1,1,2,
    2,3,4,5,5,6,7,9,
    10,11,12,14,15,17,18,20,
    21,23,25,27,29,31,33,35,
    37,40,42,44,47,49,52,54,
    57,59,62,65,67,70,73,76,
    79,82,85,88,90,93,97,100,
    103,106,109,112,115,118,121,124,
};

const unsigned char SquareTable256[N_points] = {
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    255,255,255,255,255,255,255,255,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
};

const unsigned char TriTable256[N_points] = {
    128,130,132,134,136,138,140,142,
    144,146,148,150,152,154,156,158,
    160,162,164,166,168,170,172,174,
    176,178,180,182,184,186,188,190,
    192,194,196,198,200,202,204,206,
    208,210,212,214,216,218,220,222,
    224,226,228,230,232,234,236,238,
    240,242,244,246,248,250,252,254,
    255,254,252,250,248,246,244,242,
    240,238,236,234,232,230,228,226,
    224,222,220,218,216,214,212,210,
    208,206,204,202,200,198,196,194,
    192,190,188,186,184,182,180,178,
    176,174,172,170,168,166,164,162,
    160,158,156,154,152,150,148,146,
    144,142,140,138,136,134,132,130,
    128,126,124,122,120,118,116,114,
    112,110,108,106,104,102,100,98,
    96,94,92,90,88,86,84,82,
    80,78,76,74,72,70,68,66,
    64,62,60,58,56,54,52,50,
    48,46,44,42,40,38,36,34,
    32,30,28,26,24,22,20,18,
    16,14,12,10,8,6,4,2,
    0,2,4,6,8,10,12,14,
    16,18,20,22,24,26,28,30,
    32,34,36,38,40,42,44,46,
    48,50,52,54,56,58,60,62,
    64,66,68,70,72,74,76,78,
    80,82,84,86,88,90,92,94,
    96,98,100,102,104,106,108,110,
    112,114,116,118,120,122,124,126,
};

const unsigned char SawTable256[N_points] = {
    128,129,130,131,132,133,134,135,
    136,137,138,139,140,141,142,143,
    144,145,146,147,148,149,150,151,
    152,153,154,155,156,157,158,159,
    160,161,162,163,164,165,166,167,
    168,169,170,171,172,173,174,175,
    176,177,178,179,180,181,182,183,
    184,185,186,187,188,189,190,191,
    192,193,194,195,196,197,198,199,
    200,201,202,203,204,205,206,207,
    208,209,210,211,212,213,214,215,
    216,217,218,219,220,221,222,223,
    224,225,226,227,228,229,230,231,
    232,233,234,235,236,237,238,239,
    240,241,242,243,244,245,246,247,
    248,249,250,251,252,253,254,255,
    0,1,2,3,4,5,6,7,
    8,9,10,11,12,13,14,15,
    16,17,18,19,20,21,22,23,
    24,25,26,27,28,29,30,31,
    32,33,34,35,36,37,38,39,
    40,41,42,43,44,45,46,47,
    48,49,50,51,52,53,54,55,
    56,57,58,59,60,61,62,63,
    64,65,66,67,68,69,70,71,
    72,73,74,75,76,77,78,79,
    80,81,82,83,84,85,86,87,
    88,89,90,91,92,93,94,95,
    96,97,98,99,100,101,102,103,
    104,105,106,107,108,109,110,111,
    112,113,114,115,116,117,118,119,
    120,121,122,123,124,125,126,127,
};

unsigned char ArbTable16[16] = {0};

// Filter coefficients in dB
double Filter[8] = {
    0, 0, 0, 0, 0, 0, 0, 0
};

unsigned char waveform[N_points] = {0}; // Current processed waveform

unsigned char current_note = 0; // Current playing MIDI note
unsigned char adsr_state = 0; // 0 - off, 1 - attack, 2 - decay, 3 - sustain, 4 - release
double velocity = 1.0; // Velocity of last played note
/* Envelope ADSR values */
double attack = 1.0;
double decay = 0.02;
double sustain = 0.05;
double release = 0.1;
double current_level = 0.0; // Current volume
char mode = 1; // 1 - sine, 2 - square, 3 - triangle, 4 - sawtooth, 5 - arbitrary

/* FFT arrays */
double data_re[N_points] = {0};
double data_im[N_points] = {0};

unsigned char scaled_waveform[N_points] = {0}; // Scaled waveform for DAC
CY_ISR(isr_1) // Timer ISR
{
    switch(adsr_state) // Envelope state machine
    {
        case 0: // Off
            current_level = 0.0;
            break;
        case 1: // Attack
            current_level += attack * velocity;
            if (current_level >= velocity)
            {
                current_level = velocity;
                adsr_state++;
            }
            break;
        case 2: // Decay
            current_level -= decay * velocity;
            if (current_level <= sustain * velocity)
            {
                current_level = sustain * velocity;
                adsr_state++;
            }
            break;
        case 3: // Sustain
            current_level = sustain * velocity;
            break;
        case 4: // Release
            current_level -= release * velocity;
            if (current_level <= 0.0)
            {
                current_level = 0.0;
                adsr_state = 0;
            }
            break;
        default:
            break;
    }
    int i;
    for (i = 0; i < N_points; i++)
    {
        scaled_waveform[i] = waveform[i] * current_level; // Scale waveform by volume
    }
    WaveDAC8_1_Wave1Setup(scaled_waveform, N_points); // Write scaled waveform to WaveDAC
    Timer_1_ReadStatusRegister(); // Clear timer interrupt
}

int message_type = 0; // 0 - no message, 1 - note on, 2 - note off, 3 - board values
int uart_state = 0;
unsigned char start_fft = 1; // FFT run flag

CY_ISR(isr_2) // UART ISR
{
    UART_1_ReadRxStatus(); // Clear UART interrupt
    while(UART_1_GetRxBufferSize() > 0)
    {
        char ch = UART_1_GetChar();
        switch(message_type) // Current packet type
        {
            case 0: // New packet
                switch(ch)
                {
                    case 0x90: // Note on
                        message_type = 1;
                        break;
                    case 0x80: // Note off
                        message_type = 2;
                        break;
                    case 0x70: // Board values
                        message_type = 3;
                        break;
                    default:
                        break;
                }
                uart_state = 0;
                break;
            case 1: // Note on
                if (uart_state == 0) // First byte is note number
                {
                    current_note = ch;
                    unsigned char note = ch % 12; // Offset in octave
                    unsigned char octave = ch / 12; // Octave number
                    unsigned char step_scale = 1 << octave; // Power of two frequency scaling based on octave
                    timer_clock_1_SetDividerValue(66e6 / (NoteFrequencies[note] * N_points * step_scale)); // Calculate and update WaveDAC clock
                    uart_state = 1;
                }
                else if (uart_state == 1) // Second byte is velocity
                {
                    velocity = pow(10, ((double)ch - 127.0) / 64.0); // Log scale to amplitude
                    adsr_state = 1; // Start playing note
                    uart_state = 0;
                    message_type = 0;
                }
                break;
            case 2: // Note off
                if (ch == current_note) // Only stop if current note is released
                {
                    adsr_state = 4; // Enter release state
                }
                uart_state = 0;
                message_type = 0;
                break;
            case 3: // Board values
                if (uart_state < 16) // Waveform pots
                {
                    ArbTable16[uart_state] = ch; // Store arbitrary waveform values
                }
                else if (uart_state >= 16 && uart_state < 24) // Filter pots
                {
                    Filter[uart_state - 16] = ch * 42.0 / 255.0 - 36.0; // Scale to -36-+6 dB
                }
                else if (uart_state >= 24 && uart_state < 28) // ADSR pots
                {
                    /* Set ADSR values */
                    if (uart_state == 24)
                        attack = 1.0 / (256 - ch);
                    else if (uart_state == 25)
                        decay = 1.0 / (256 - ch);
                    else if (uart_state == 26)
                        sustain = (255 - ch) / 255.0;
                    else if (uart_state == 27)
                        release = 1.0 / (256 - ch);
                }
                else // Waveform mode
                {
                    mode = ch;
                    message_type = 0;
                    start_fft = 1; // Packet done, start FFT
                    uart_state = 0;
                    break;
                }
                uart_state++;
                break;
            default:
                message_type = 0;
                uart_state = 0;
                break;
        }
    }
}

int main()
{
    /* Start the components */
    Timer_1_Start();
    WaveDAC8_1_Start();
    WaveDAC8_1_SetSpeed(WaveDAC8_1_HIGHSPEED);
    UART_1_Start();
    int i = 0;
    for (i = 0; i < N_points; i++)
    {
        waveform[i] = SineTable256[i]; // Initialize to sine wave
    }
    isr_1_StartEx(isr_1);
    isr_2_StartEx(isr_2);
    
    CyGlobalIntEnable;
    
    for(;;)
    {
        if (!start_fft)
            continue;
        start_fft = 0;
        switch(mode) // Waveform mode
        {
            case 1: // Sine
                for (i = 0; i < N_points; i++)
                {
                    data_re[i] = SineTable256[i];
                    data_im[i] = 0;
                }
                break;
            case 2: // Square
                for (i = 0; i < N_points; i++)
                {
                    data_re[i] = SquareTable256[i];
                    data_im[i] = 0;
                }
                break;
            case 3: // Triangle
                for (i = 0; i < N_points; i++)
                {
                    data_re[i] = TriTable256[i];
                    data_im[i] = 0;
                }
                break;
            case 4: // Sawtooth
                for (i = 0; i < N_points; i++)
                {
                    data_re[i] = SawTable256[i];
                    data_im[i] = 0;
                }
                break;
            case 5: // Arbitrary
                for (i = 0; i < N_points; i++)
                {
                    char inx = i / 16;
                    double currpt = ArbTable16[inx];
                    double nextpt = (inx == 15 ? ArbTable16[0] : ArbTable16[inx + 1]);
                    data_re[i] = currpt + (nextpt - currpt) * ((i % 16) / 16.0); // Linear interpolation
                    data_im[i] = 0;
                }
                break;
            default:
                break;
        }
        FFT(1, exponent, data_re, data_im); // Compute FFT
        data_re[0] = 128;
        for (i = 1; i < N_points / 2 + 1; i++)
        {
            unsigned char inx;
            if (i == 1)
                inx = 0;
            else
                inx = 32 - __builtin_clz(i - 1); // Get filter number for current coefficient
            double scale = pow(10, Filter[inx] / 20); // dB conversion
            data_re[i] *= scale;
            data_re[N_points - i] = data_re[i];
            data_im[i] *= scale;
            data_im[N_points - i] = -data_im[i];
        }
        double ifft_re[N_points];
        double ifft_im[N_points];
        memcpy(ifft_re, data_re, N_points * sizeof(double));
        memcpy(ifft_im, data_im, N_points * sizeof(double));
        FFT(0, exponent, ifft_re, ifft_im); // Compute inverse FFT
        double range_min = 0;
        double range_max = 255.99;
        /* Scale if values exceed uint8 values */
        for (i = 0; i < N_points; i++)
        {
            if (ifft_re[i] > range_max)
                range_max = ifft_re[i];
            if (ifft_re[i] < range_min)
                range_min = ifft_re[i];
        }
        double range = range_max - range_min;
        for (i = 0; i < N_points; i++)
        {
            ifft_re[i] = 128 + (ifft_re[i] - 128) * 255.99 / range; // Rescale centered at 128
            waveform[i] = max(0, min(ifft_re[i], 255.99));
        }
        UART_1_WriteTxData(0x01); // Send FFT complete signal to 8051
    }
    return 0;
}

/* [] END OF FILE */
