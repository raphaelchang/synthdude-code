# THIS FILE IS AUTOMATICALLY GENERATED
# Project: \\vmware-host\Shared Folders\Documents\Archive\Sophomore Year\6.115\Synthdude\Synthdude.cydsn\Synthdude.cyprj
# Date: Wed, 17 May 2017 00:08:34 GMT
#set_units -time ns
create_clock -name {timer_clock_1(routed)} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/dclk_2}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 15.151515151515152 -waveform {0 7.57575757575758} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 15.151515151515152 -waveform {0 7.57575757575758} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {timer_clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 67 133} -nominal_period 1000 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_clock -name {timer_clock_2(fixed-function)} -period 1000 -waveform {0 15.1515151515152} -nominal_period 1000 [get_pins {ClockBlock/dclk_glb_ff_0}]
create_generated_clock -name {timer_clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 1651 3301} -nominal_period 25000 [list [get_pins {ClockBlock/dclk_glb_2}]]
create_generated_clock -name {timer_clock_3} -source [get_pins {ClockBlock/clk_sync}] -edges {1 133 265} -nominal_period 2000 [list [get_pins {ClockBlock/dclk_glb_1}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for \\vmware-host\Shared Folders\Documents\Archive\Sophomore Year\6.115\Synthdude\Synthdude.cydsn\TopDesign\TopDesign.cysch
# Project: \\vmware-host\Shared Folders\Documents\Archive\Sophomore Year\6.115\Synthdude\Synthdude.cydsn\Synthdude.cyprj
# Date: Wed, 17 May 2017 00:08:23 GMT
