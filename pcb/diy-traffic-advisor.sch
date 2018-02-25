EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:diy-traffic-advisor-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 74HC595 U?
U 1 1 5A91C71E
P 8500 1800
F 0 "U?" H 8650 2400 50  0000 C CNN
F 1 "74HC595" H 8500 1200 50  0000 C CNN
F 2 "" H 8500 1800 50  0001 C CNN
F 3 "" H 8500 1800 50  0001 C CNN
	1    8500 1800
	1    0    0    -1  
$EndComp
$Comp
L 74HC595 U?
U 1 1 5A91C7B9
P 8500 3200
F 0 "U?" H 8650 3800 50  0000 C CNN
F 1 "74HC595" H 8500 2600 50  0000 C CNN
F 2 "" H 8500 3200 50  0001 C CNN
F 3 "" H 8500 3200 50  0001 C CNN
	1    8500 3200
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5A91C7DD
P 10600 1100
F 0 "#PWR?" H 10600 950 50  0001 C CNN
F 1 "+5V" H 10600 1240 50  0000 C CNN
F 2 "" H 10600 1100 50  0001 C CNN
F 3 "" H 10600 1100 50  0001 C CNN
	1    10600 1100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A91C7FB
P 10800 1100
F 0 "#PWR?" H 10800 850 50  0001 C CNN
F 1 "GND" H 10800 950 50  0000 C CNN
F 2 "" H 10800 1100 50  0001 C CNN
F 3 "" H 10800 1100 50  0001 C CNN
	1    10800 1100
	-1   0    0    1   
$EndComp
$Comp
L PWR_FLAG #FLG?
U 1 1 5A91C825
P 10600 1250
F 0 "#FLG?" H 10600 1325 50  0001 C CNN
F 1 "PWR_FLAG" H 10600 1400 50  0000 C CNN
F 2 "" H 10600 1250 50  0001 C CNN
F 3 "" H 10600 1250 50  0001 C CNN
	1    10600 1250
	-1   0    0    1   
$EndComp
$Comp
L PWR_FLAG #FLG?
U 1 1 5A91C83D
P 10800 1250
F 0 "#FLG?" H 10800 1325 50  0001 C CNN
F 1 "PWR_FLAG" H 10800 1400 50  0000 C CNN
F 2 "" H 10800 1250 50  0001 C CNN
F 3 "" H 10800 1250 50  0001 C CNN
	1    10800 1250
	-1   0    0    1   
$EndComp
Wire Wire Line
	10600 1100 10600 1250
Wire Wire Line
	10800 1100 10800 1250
$EndSCHEMATC
