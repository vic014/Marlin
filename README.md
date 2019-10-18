![alt text][logo]

# *Drunken Octopus* Marlin: An Alternative Firmware for LulzBot Printers

Hello. My name is Marcio. I was the Firmware Engineer at LulzBot prior the massive [layoff of 2019] that decimated the staff and left nearly one hundred people out of a job.

At the time I was let go, I was a [major contributor] to the upcoming version of Marlin, Marlin 2.0.

When Marlin 2.0 comes out, it will bring a host of new features and benefits. But ensuring Marlin 2.0 remains compatible with LulzBot printers requires someone to work with the Marlin developers so that they know our needs. During my nearly three years at LulzBot, I developed a close working relationship with several Marlin developers and helped make sure LulzBot printers were always well supported.

I've set up *Drunken Octopus* Marlin to continue the work of making sure that when Marlin 2.0 comes out, users of LulzBot printers will not be left behind.

## Who can benefit from *Drunken Octopus* Marlin?

This firmware is for users who want the very latest firmware and features for their LulzBot printers and **are willing to take the risks associated with running development firmware**. It is also for people who want to experiment with custom versions of Marlin for their modified or upgraded LulzBot printers.

LulzBot made a conservative decision of keeping most customers on significantly out-of-date but internally tested firmware. They turned off certain features for the comfort of less experienced users. On the contrary, *Drunken Octopus* will charge right ahead, caution to the wind, because that is how he likes to do things! :sunglasses:

## How can you help?

:heart: :heart: :heart: **To help me the most, please consider monetary contributions via my [Patreon page](https://www.patreon.com/marciot)**. :heart: :heart: :heart:

Working on Marlin used to be a paid, full-time job for me, but without LulzBot to support me, I will have
to work on my own time using my own resources. In the future, I may create Patreon only content, such as printer upgrade guides and other tutorials. I learned a *ton* in the R&D department at LulzBot and I have much I want to teach you!

In addition to the lack of financial support from LulzBot, I will no longer have the resources of the company to help me with developing and testing firmware. What I have is a heavily-modified first-generation Mini and a TAZ 5. Because of this, *Drunken Octopus* will need to be a collaborative effort to survive.

- If you have a LulzBot printer and some toolheads, you can become a tester!
- If you are experienced with Marlin, you can help triage issues and build config files!
- If you are experienced with slicers, you can develop start and end GCODE and help others with Cura or other slicers!
- If you have coding skills, you can help by squashing bugs or building binaries!

## How does *Drunken Octopus* differ from LulzBot Marlin?

To simplify the code and reduce differences from upstream, a few things have changed:

- I have removed or replaced LulzBot logos to prevent possible trademark complications.
- After changing the Z offset you must now save it to EEPROM, for consistency with other settings.
- I have simplified firmware file names for ease of understanding.
- You need to tell Cura to connect to unknown printers, as Cura LE does not know about *Drunken Octopus*.
- The M115 is now unmodified from the standard Marlin response.
- I have removed EMI reduction to simplify endstop and probe troubleshooting.
- All Mini firmware now outputs LCD data, regardless of whether one is hooked up.
- You can build it on a Windows 10 PC using *Windows Subsystem for Linux* (in addition to the Arduino IDE or standalone Linux)

## How does *Drunken Octopus* differ from Marlin 2.0 upstream?

Hopefully it differs as little as possible. I will add and test new features to *Drunken Octopus* before sending them upstream for review. With *Drunken Octopus*, I hope to work even harder to make sure that new features make it into Marlin upstream.

## Will using *Drunken Octopus* void my printer warranty?

Probably.

## Will *Drunken Octopus* damage my printer?

It depends on how much he has had to drink the night before.

## What if I want my printer to remain sober?

Reach out to [LulzBot] and use their firmware. Rumor has it they are still picking up the phone.

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
