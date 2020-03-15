/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#if !defined(MCU_LPC1768) && !defined(MCU_LPC1769)
  #error "Oops! Make sure you have the LPC1768 environment selected in your IDE for 1778 and LPC1769 for 4078."
#endif

#define BOARD_INFO_NAME "GMARSH EBAB"


#define P0_12 0x0B
#define P0_13 0x0C
#define P0_14 0x0D

#define P1_02 0x22
#define P1_03 0x23
#define P1_05 0x25
#define P1_06 0x26
#define P1_07 0x27
#define P1_11 0x2B
#define P1_12 0x2C
#define P1_13 0x2D

#define P2_14 0x4E
#define P2_15 0x4F
#define P2_16 0x50
#define P2_17 0x51
#define P2_18 0x52
#define P2_19 0x53
#define P2_20 0x54
#define P2_21 0x55
#define P2_22 0x56
#define P2_23 0x57
#define P2_24 0x58
#define P2_25 0x59
#define P2_26 0x5A
#define P2_27 0x5B
#define P2_28 0x5C
#define P2_29 0x5D
#define P2_30 0x5E
#define P2_31 0x5F

#define P3_00 0x60
#define P3_01 0x61
#define P3_02 0x62
#define P3_03 0x63
#define P3_04 0x64
#define P3_05 0x65
#define P3_06 0x66
#define P3_07 0x67
#define P3_08 0x68
#define P3_09 0x69
#define P3_10 0x6A
#define P3_11 0x6B
#define P3_12 0x6C
#define P3_13 0x6D
#define P3_14 0x6E
#define P3_15 0x6F
#define P3_16 0x70
#define P3_17 0x71
#define P3_18 0x72
#define P3_19 0x73
#define P3_20 0x74
#define P3_21 0x75
#define P3_22 0x76
#define P3_23 0x77
#define P3_24 0x78
#define P3_27 0x7B
#define P3_30 0x7E
#define P3_31 0x7F

#define P4_00 0x80
#define P4_01 0x81
#define P4_02 0x82
#define P4_03 0x83
#define P4_04 0x84
#define P4_05 0x85
#define P4_06 0x86
#define P4_07 0x87
#define P4_08 0x88
#define P4_09 0x89
#define P4_10 0x8A
#define P4_11 0x8B
#define P4_12 0x8C
#define P4_13 0x8D
#define P4_14 0x8E
#define P4_15 0x8F
#define P4_16 0x90
#define P4_17 0x91
#define P4_18 0x92
#define P4_19 0x93
#define P4_20 0x94
#define P4_21 0x95
#define P4_22 0x96
#define P4_23 0x97
#define P4_24 0x98
#define P4_25 0x99
#define P4_26 0x9A
#define P4_27 0x9B

#define P4_30 0x9E
#define P4_31 0x9F

#define P5_00 0xA0
#define P5_01 0xA1
#define P5_02 0xA2
#define P5_03 0xA3
#define P5_04 0xA4

// Ignore temp readings during develpment.
//#define BOGUS_TEMPERATURE_GRACE_PERIOD 2000

//
// Enable 12MHz clock output on P1.27 pin to sync TMC2208 chip clocks
//
//#define LPC1768_ENABLE_CLKOUT_12M

//
// Servos
//
#define SERVO0_PIN         P2_05   // PWM1[6]
#define SERVO1_PIN         P2_04   // PWM1[1]
#define SERVO2_PIN         P2_03   // PWM1[1]
#define SERVO3_PIN         P2_02   // PWM1[1]

//
// Limit Switches
//
#define X_MIN_PIN          P0_19
#define X_MAX_PIN          P0_18
#define Y_MIN_PIN          P0_20
#define Y_MAX_PIN          P0_17
#define Z_MIN_PIN          P0_21
#define Z_MAX_PIN          P0_15

//
// Steppers
//

#define X_STEP_PIN         P1_10
#define X_DIR_PIN          P4_03
#define X_ENABLE_PIN       P0_01
#define X_CS_PIN           P0_00

#define Y_STEP_PIN         P1_29
#define Y_DIR_PIN          P2_14
#define Y_ENABLE_PIN       P1_28
#define Y_CS_PIN           P2_22

#define Z_STEP_PIN         P4_02
#define Z_DIR_PIN          P1_26
#define Z_ENABLE_PIN       P1_25
#define Z_CS_PIN           P4_01

#define E0_STEP_PIN        P1_19
#define E0_DIR_PIN         P0_14
#define E0_ENABLE_PIN      P1_22
#define E0_CS_PIN          P4_00

#define E1_STEP_PIN        P2_23
#define E1_DIR_PIN         P2_18
#define E1_ENABLE_PIN      P3_23
#define E1_CS_PIN          P1_18

#define E2_STEP_PIN        P3_25
#define E2_DIR_PIN         P2_25
#define E2_ENABLE_PIN      P3_26
#define E2_CS_PIN          P3_24

#define E3_STEP_PIN        P4_19
#define E3_DIR_PIN         P4_20
#define E3_ENABLE_PIN      P4_26
#define E3_CS_PIN          P4_21

#define E4_STEP_PIN        P4_17
#define E4_DIR_PIN         P4_18
#define E4_ENABLE_PIN      P4_05
#define E4_CS_PIN          P2_12

#define E5_STEP_PIN        P0_11
#define E5_DIR_PIN         P2_15
#define E5_ENABLE_PIN      P4_04
#define E5_CS_PIN          P4_16

#define E6_STEP_PIN        P2_28
#define E6_DIR_PIN         P0_28
#define E6_ENABLE_PIN      P4_05
#define E6_CS_PIN          P0_27

#define E7_STEP_PIN        P1_30
#define E7_DIR_PIN         P0_12
#define E7_ENABLE_PIN      P0_13
#define E7_CS_PIN          P2_29

#define E8_STEP_PIN        P3_15
#define E8_DIR_PIN         P3_07
#define E8_ENABLE_PIN      P2_30
#define E8_CS_PIN          P5_01

//
// TMC2208 UART pins
//
#if HAS_TMC_UART
  #define X_SERIAL_TX_PIN  P2_17
  #define X_SERIAL_RX_PIN  P2_17
  #define Y_SERIAL_TX_PIN  P2_16
  #define Y_SERIAL_RX_PIN  P2_16
  #define Z_SERIAL_TX_PIN  P2_21
  #define Z_SERIAL_RX_PIN  P2_21
  #define E0_SERIAL_TX_PIN P2_20
  #define E0_SERIAL_RX_PIN P2_20
  #define E1_SERIAL_TX_PIN P2_19
  #define E1_SERIAL_RX_PIN P2_19
  #define E2_SERIAL_TX_PIN P2_26
  #define E2_SERIAL_RX_PIN P2_26
  #define E3_SERIAL_TX_PIN P0_22
  #define E3_SERIAL_RX_PIN P0_22
  #define E4_SERIAL_TX_PIN P2_11
  #define E4_SERIAL_RX_PIN P2_11
  #define E5_SERIAL_TX_PIN P2_13
  #define E5_SERIAL_RX_PIN P2_13
  #define E6_SERIAL_TX_PIN P2_24
  #define E6_SERIAL_RX_PIN P2_24
  #define E7_SERIAL_TX_PIN P2_27
  #define E7_SERIAL_RX_PIN P2_27
  #define E8_SERIAL_TX_PIN P2_31
  #define E8_SERIAL_RX_PIN P2_31

  // Reduce baud rate to improve software serial reliability
  #define TMC_BAUD_RATE 19200
#else
  //#error "TMC2208 UART configuration is required for GMarsh EBAB
#endif

//
// Temperature Sensors
//  3.3V max when defined as an analog input
//
#define TEMP_0_PIN          P0_23_A0   // AD0[0] on P0_23
#define TEMP_1_PIN          P0_24_A1   // AD0[0] on P0_23
#define TEMP_2_PIN          P0_25_A2   // AD0[0] on P0_23
#define TEMP_3_PIN          P0_26_A3   // AD0[0] on P0_23
#define TEMP_BED_PIN        P1_31_A5   // AD0[1] on P0_24

//
// Heaters / Fans
//
#define HEATER_BED_PIN     P4_23 // Not a PWM pin, software PWM required
#define HEATER_0_PIN       P1_02 // PWM1[3]
#define HEATER_1_PIN       P1_10 // PWM1[3]
#define HEATER_2_PIN       P4_30 // PWM1[3]
#define HEATER_3_PIN       P1_09 // PWM1[3]
#define FAN_PIN            P3_08 // Part cooling fan - connected to PWM1[2]
#define E0_AUTO_FAN_PIN    P1_08 // Extruder cooling fan
#define FAN1_PIN           P3_00 // Part cooling fan - connected to PWM1[2]
#define E1_AUTO_FAN_PIN    P4_31 // Extruder cooling fan
#define FAN2_PIN           P3_27 // Part cooling fan - connected to PWM1[2]
#define E2_AUTO_FAN_PIN    P3_01 // Extruder cooling fan
#define FAN3_PIN           P5_04 // Part cooling fan - connected to PWM1[2]
#define E3_AUTO_FAN_PIN    P3_10 // Extruder cooling fan

//
// Misc. Functions
//
//#define LED_PIN            P1_31

//
// LCD
//
#if ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER)
  #define BEEPER_PIN       P3_31
  #define BTN_EN1          P3_11
  #define BTN_EN2          P3_12
  #define BTN_ENC          P3_28
  #define LCD_PINS_RS      P3_06
  #define LCD_PINS_ENABLE  P3_14
  #define LCD_PINS_D4      P3_30
  #define LCD_PINS_D5      P3_05
  #define LCD_PINS_D6      P3_29
  #define LCD_PINS_D7      P5_00
#endif

//
// SD Support
//

#ifndef SDCARD_CONNECTION
  #define SDCARD_CONNECTION LCD
#endif

#define ONBOARD_SD_CS_PIN  P0_06   // Chip select for "System" SD card

#if SD_CONNECTION_IS(LCD)
  #define SCK_PIN          P1_00
  #define MISO_PIN         P1_01
  #define MOSI_PIN         P1_04
  #define SS_PIN           P3_02
  #define SD_DETECT_PIN    P3_27
#elif SD_CONNECTION_IS(ONBOARD)
  #undef SD_DETECT_PIN
  #define SCK_PIN          P0_07
  #define MISO_PIN         P0_08
  #define MOSI_PIN         P0_09
  #define SS_PIN           ONBOARD_SD_CS_PIN
#endif
