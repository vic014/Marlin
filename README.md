![alt text][logo]

# *Drunken Octopus* Marlin: An Alternative Firmware for LulzBot Printers

Hello. My name is Marcio. I was the Firmware Engineer at LulzBot prior the massive [layoff of 2019] that decimated the staff and left nearly one hundred people out of a job.

At the time I was let go, I was a [major contributor] to the upcoming version of Marlin, Marlin 2.0.

When Marlin 2.0 comes out, it will bring a host of new features and benefits. But ensuring Marlin 2.0 remains compatible with LulzBot printers requires someone to work with the Marlin developers so that they know our needs. During my nearly three years at LulzBot, I developed a close working relationship with several Marlin developers and helped make sure LulzBot printers were always well supported.

I've set up *Drunken Octopus* Marlin to continue that work of making sure users of LulzBot printers are not be left behind.

## Who can benefit from *Drunken Octopus* Marlin?

This firmware is for users who want the very latest firmware and features for their LulzBot printers and **are willing to take the risks associated with running development firmware**. It is also for people who want to modify or upgrade their LulzBot printers.

LulzBot made a conservative decision of keeping most customers on older but internally tested firmware. They turned off certain features for the comfort of new users. On the contrary, *Drunken Octopus* will charge right ahead, taking it all in, because that is how he likes to do things! :sunglasses:

## *Drunken Octopus* comes in up to 196 different flavors!

If you are savvy with electrical and mechanical things, *Drunken Octopus* will give you the software to match any hardware upgrades you make to your printer. Many of the following combinations have been tried either at LulzBot R&D or by LulzBot employees on their own printers, so any of these choices are within the realm of the possible!

Printer Chassis and Electronics (your pick!)                                  | Toolhead (your pick!)
------------------------------------------------------------------------------|---------------------------
Mini with original electronics with or w/o B&W display and SD card  :factory: | Single Extruder for Mini :factory:
Mini with Einsy Retro with or w/o B&W display                                 | Flexystruder for Mini
Mini with original electronics, Color Touch Screen and SD card                | Aerostruder for Mini 2 :factory:
Mini with Einsy Retro and Color Touch Screen and SD card                      | Single Extruder for TAZ :factory:
Mini 2 with original electronics and B&W display and SD card        :factory: | Flexystruder for TAZ
Mini 2 with original electronics, Color Touch Screen and SD card              | MOARstruder for TAZ
TAZ 5 with original electronics                                     :factory: | FlexyDually for TAZ
TAZ 5 with Archim 2.0 upgrade                                                 | DualExtruder V2 for TAZ
TAZ 6 with original electronics                                     :factory: | DualExtruder V3 for TAZ
TAZ 6 with Archim 2.0 upgrade                                                 | Universal Adapter for Mini
TAZ Workhorse with original electronics                             :factory: | Universal Adapter for TAZ
TAZ Workhorse with original electronics and Filament Sensor                   | Universal SL 0.25mm
TAZ Workhorse with Archim 2.0 and Filament Sensor                             | Universal SE 0.5mm
TAZ Pro with Color Touch Screen, USB Flashdrive and Filament Sensor :factory: | Universal HS 0.8mm

:factory: = Standard/stock configuration

Einsy Retro and Archim 2.0 boards are available from [ultimachine]. No source yet exists for the color touch display, the SD card reader, or the filament sensors but hopefully the situation will change.

# How can you help make *Drunken Octopus* a success?

:heart: :heart: :heart: **To help me the most, please consider contributions via my [Patreon page](https://www.patreon.com/marciot)**. :heart: :heart: :heart:

Working on Marlin used to be a paid, full-time job for me, but without LulzBot to support me, I will have
to work on my own time using my own resources. In exchange for your help, I hope to create content, such as printer upgrade guides and other tutorials. I learned a *ton* at the R&D department at LulzBot and I have much I want to teach you!

Aside from the lack of a paycheck from LulzBot, I will no longer have the resources of the company to help me with testing firmware. All I have is an Einsy Retro upgraded first-generation Mini and a TAZ 5. Because of this, *Drunken Octopus* will need to be a collaborative effort to survive. Here's how you can participate:

- If you have a LulzBot printer and some toolheads, you can become a tester!
- If you are experienced with Marlin, you can help triage issues and build config files!
- If you are experienced with slicers, you can develop start and end GCODE and help others with Cura or other slicers!
- If you have coding skills, you can help by squashing bugs or building binaries!

## How does *Drunken Octopus* differ from LulzBot Marlin?

To simplify the code, a few things have changed:

- I have removed or replaced LulzBot logos to prevent possible trademark complications.
- After changing the Z offset you must now save it using the save settings menu item, for consistency with other settings.
- I have simplified firmware file names for ease of understanding.
- You need to tell Cura to connect to unknown printers, as Cura LE does not know about *Drunken Octopus*.
- The M115 output is now unmodified from the standard Marlin response.
- I have removed EMI mitigation code to simplify endstop and probe troubleshooting.
- All Mini firmware now outputs LCD data, regardless of whether one is hooked up.
- You can build it on a Windows 10 PC using *Windows Subsystem for Linux* (in addition to the Arduino IDE or standalone Linux)

## How does *Drunken Octopus* differ from Marlin 2.0 upstream?

Hopefully it differs as little as possible. *Drunken Octopus* will be where I first implement new features before sending them upstream for incorporation. *Drunken Octopus* also includes source and build scripts for making configuration files for all the varieties of firmware.

## Will *Drunken Octopus* binaries and pre-build configuration files be provided?

To get you started with *Drunken Octopus*, pre-build binaries and configs will be provided for the **stock toolhead** for each **standard LulzBot printer model** (as indicated by :factory: above). Project supporters will be able to request firmware for modified printers and accessory toolheads (and possibly other variations, as time goes on!). Source code for building everything will always be available to anyone!

## Will using *Drunken Octopus* void my printer warranty?

Probably, if you let LulzBot know about it.

## Will *Drunken Octopus* damage my printer?

He doesn't mean to, but it depends on how much he has had to drink the night before! **Use *Drunken Octopus* at your own risk.**

## What if I want my printer to remain sober?

Reach out to [LulzBot] and use their firmware. Rumor has it they are still answering the phone.

# License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.

**Photo Credits:** Coat hanger photograph by Ari Sytner. Used with permission.

**Trademarks:** *LulzBot* is a registered trademark of *Aleph Objects, Inc.*

[logo]: https://github.com/marciot/drunken-octopus-marlin/raw/master/images/drunken-octopus-small.jpg "Drunken Octopus Logo"
[layoff of 2019]: https://www.fabbaloo.com/blog/2019/10/12/the-end-of-lulzbot "The End of LulzBot (?)"
[Patreon page]: https://www.patreon.com/marciot "Marcio's Patreon Page"
[LulzBot]: https://www.lulzbot.com "www.lulzbot.com"
[major contributor]: https://github.com/marcio-ao
[ultimachine]: https://ultimachine.com/
