## Formbot / Vivedino Raptor

This branch maintains feature additions and common modifications in a simple form for the Formbot / Vivedino Raptor series machines. Machines supported here are :

- [Raptor]
- [Raptor 2 500](http://bit.ly/3aEVW1S)
- [Raptor 2 700](http://bit.ly/37W0wpz)


## About Our Branches

The firmware branches maintained here are made possible by the support of sponsors like [Tiny Machines 3D](https://www.tinymachines3d.com/?rfsn=3419592.cc302fe) as well as our customer base through our 3D printing Services. Maintaining and developing these branches takes a significant investment, made up of time and machines. To support continued development, please consider your next 3D Printer related purchase from Tiny Machines 3D and thank them for supporting open source development. Or, consider us for printing services outside of your machine’s capabilities. Print service requests can be sent to d.menzel@insanityautomation.com and we will respond typically within 1 working day. If you do not need anything printed or a 3D Printer but still want to contribute, you can support us through [Patreon](https://www.patreon.com/InsanityAutomation).

## Setup

All configuration options intended to be adjusted by end users have been placed in the top section of Configuration.h and have been documented there. There is typically a break line to segregate the standard configuration below. Anything aside from the upper options is intended for advanced users only.

For the UART install, you will need to solder 1 wire. R51 on the top left of the board is needed for the RX pin. This assumes 2209 drivers as UART can multiplex.

Set the address using jumpers on pins MS1 and MS2.

- Address | MS1  | MS2
-       0 | LOW  | LOW
-       1 | HIGH | LOW
-       2 | LOW  | HIGH
-       3 | HIGH | HIGH

For all drivers, remove MS3 which is the bottom jumper.
- X : All Jumpers Out
- Y : MS2 (Middle Pin) only
- Z : MS1 (Top Pin) Only
- E : MS1&2 (Top 2 Pins)

You will need to make a Y cable with a 10k ohm resistor.



[Start at Step 6 here]( https://www.instructables.com/id/UART-This-Serial-Control-of-Stepper-Motors-With-th/?fbclid=IwAR115Kg_W033bzRRLa81lLNkm8Wg82okh_P7f-dgfssG01DVPmGmWi6qQKA )

The RX side (no resistor) will connect to the solder pad mentioned above. The TX side connects to the A4 Pin of Aux 2.

Each one of the TMC2209 drivers will simply jumper to each other in a chain.


## Support

This firmware is provided to the public as-is with no warranty or guarantee. It's based on a large open source project and there is no entitlement to support. That said, Tiny Machines 3D customers may obtain support through their normal support queue. I will provide support to Patreons as I am able. If you require more immediate support and are not a Tiny Machines customer, you may contact them at support@tinymachines3d.com about purchasing support hours. Aside from this, we are active many Facebook groups as well as several discord channels and typically help anyone we can when we come across them.

3D Printing Discord - https://discord.gg/MZrsgVU
Marlin Discord - https://discord.gg/n5NJ59y

## Future Goals

For this branch, we still have some active goals open that we plan to continue working on provided there is continued interest in the project.
- SD Card sub directory traversal
- Volume and leveling state EEPROM storage
- LCD pause messages and responses taken from machine instead of static messages
- Additional Maintenance and tools screens (PID Tuning, Init EEPROM ect)
- Tuning of status message clearing
- Utilize a few more of the background screens (such as print finished) that are currently not in use but not necessary

If there is any interest in re-implementing the Chinese language screens, that's definitely possible at this point. In order to put the effort in however I would need to see a notable amount of interest in this.


## Firmware Branches
  - 1.1.9 Firmware (Stable, EOL) [TM_CR10](https://github.com/InsanityAutomation/Marlin/tree/TM_CR10)
  - 2.0 Firmware [Creality_Marlin2.0.x](https://github.com/InsanityAutomation/Marlin/tree/Creality_Marlin2.0.x)
  - 2.0 Development Branch (Beta, but well tested) [Creality_2.0_Devel](https://github.com/InsanityAutomation/Marlin/tree/Creality_2.0_Devel)
  - 2.0 Bleeding edge Branch (Here there be dragons!) [Creality_2.0_Bleeding](https://github.com/InsanityAutomation/Marlin/tree/Creality_2.0_Bleeding)
  - Touchscreen Firmware (10SPro and CR-X 1.1.9 Stable) [Creality_DWINTest](https://github.com/InsanityAutomation/Marlin/tree/Creality_DWINTest)
  - Touchscreen Firmware (10SPro and CR-X 2.0 Active Development) [CrealityDwin_2.0](https://github.com/InsanityAutomation/Marlin/tree/CrealityDwin_2.0)
## Formbot / Vivedino Firmware Branches
  - Raptor 1 1.1.9 Firmware [TM_Raptor](https://github.com/InsanityAutomation/Marlin/tree/TM_Raptor)
  - Raptor 1/2 2.0 Firmware [Raptor_2.0.X](https://github.com/InsanityAutomation/Marlin/tree/Raptor_2.0.X)
  - Trex 2+/3 1.1.9 Firmware [Trex3_1.1.9](https://github.com/InsanityAutomation/Marlin/tree/Trex3_1.1.9)
  - Trex 2+/3 2.0 Firmware (Be warned of layer shift issue below!) [TM_Trex2+_2.0.x](https://github.com/InsanityAutomation/Marlin/tree/TM_Trex2+_2.0.x)
## Mamorubot / HieHa Firmware Branches
  - SX4 1.1.9 Firmware (Stable, EOL) [Mamorubot_SX4]( https://github.com/InsanityAutomation/Marlin/tree/Mamorubot_SX4)
  - SX4 2.0 Firmware (Beta, but well tested) [TM_SX4_2.0](https://github.com/InsanityAutomation/Marlin/tree/TM_SX4_2.0)
  - SX4 Development Branch [TM_SX4_2.0_Devel](https://github.com/InsanityAutomation/Marlin/tree/TM_SX4_2.0_Devel)
## Other Firmware
  - Raise 3D N2+ (Dual) 2.0 [Raise3D-N2+-Dual](https://github.com/InsanityAutomation/Marlin/tree/Raise3D-N2+-Dual)
  - Evnovo Artillery Sidewinder X1 2.0 [Evnovo X1](https://github.com/InsanityAutomation/Marlin/tree/ArtilleryX1_2.0_Devel)

[Marlin Commit History](https://github.com/MarlinFirmware/Marlin/pulls?q=is%3Apr+is%3Aclosed+author%3AInsanityAutomation)

## Active Projects
  - [Tracing Marlin 2.0 Planner bug causing layer Shifting](https://github.com/MarlinFirmware/Marlin/issues/12403)
  - Creality Dwin Touchscreen rewrite to ExtUI - DONE
  - [IDEX drifting z offset on tool change with UBL](https://github.com/MarlinFirmware/Marlin/issues/13817)
  - [Multiple touch homing](https://github.com/MarlinFirmware/Marlin/issues/9802)
  - [Tool change offset changes](https://github.com/MarlinFirmware/Marlin/issues/12568)
  - [Hotend offset adjustment clamping](https://github.com/MarlinFirmware/Marlin/pull/13669)
  - [Filament width sensor hang on 32 bit](https://github.com/MarlinFirmware/Marlin/issues/13701)
  - Probe point output for all leveling types matching incomplete ubl implementation - DONE
  - SKR1.1 Pro integration to Trex2 with TMC2209 Drivers - DONE
  - SKR1.3 Integration to Mamorubot SX4 - DONE
  - Mosquito BMG-M integration to Raptor - DONE
  - Porting Chithu Touchscreen board to Marlin 2.0 with ExtUI
  - Anet A10 Delta STM32F103 board analysis
  - Smoothing integration and vendor components of Marlin 2.0 (Revision to version.h handling, limit clamping, usability enhancements ect) - DONE
  - Consolidate more probing functions, improve G33/4 and G28/29 handling - DONE
  - G34 Z stepper reordering and automatic detection / adjustment of reversed stepper connections DONE
  - Video documentation of firmware branch configuration options and flashing with platformio
## Planned Projects
  - Implement Virtual Tools
  - Port Duet2 Wifi with Duex5 to Marlin 2.0
  - Further Gcode Parity with RRF
  - Extend Host Prompt Support for Power Loss Recovery
  - Improve native ESP32 web support
  - Port M425 Auto backlash and offset calibration to IDEX - DONE
  - Integrate 12 stepper LPC1778 PCB to configure ideXY quad head system as well as integrate 3 extruder mixing to IDEX
  - Video walkthrough of each bed leveling system usage and all functions

## Marlin
This is just one of many forks of Marlin. We don't try to bury that behind fancy marmarketingketting or anything else. As you can see from the links above, most of the work done here is submitted back to the mainstream Marlin branches. The end goal of every project is to get it to the point where it is merged and maintained there. See marlin resources, including how to contribute to the Marlin Project as well, down below.

## Building Marlin 2.0

To build Marlin 2.0 you'll need [Arduino IDE 1.8.8 or newer](https://www.arduino.cc/en/main/software) or [PlatformIO](http://docs.platformio.org/en/latest/ide.html#platformio-ide). We've posted detailed instructions on [Building Marlin with Arduino](http://marlinfw.org/docs/basics/install_arduino.html) and [Building Marlin with PlatformIO for ReArm](http://marlinfw.org/docs/basics/install_rearm.html) (which applies well to other 32-bit boards).


## The current Marlin dev team consists of:

 - Scott Lahteine [[@thinkyhead](https://github.com/thinkyhead)] - USA &nbsp; [![Flattr Scott](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=thinkyhead&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)
 - Roxanne Neufeld [[@Roxy-3D](https://github.com/Roxy-3D)] - USA
 - Bob Kuhn [[@Bob-the-Kuhn](https://github.com/Bob-the-Kuhn)] - USA
 - Chris Pepper [[@p3p](https://github.com/p3p)] - UK
 - João Brazio [[@jbrazio](https://github.com/jbrazio)] - Portugal
 - Erik van der Zalm [[@ErikZalm](https://github.com/ErikZalm)] - Netherlands &nbsp; [![Flattr Erik](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)

## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
