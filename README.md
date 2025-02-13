# DirtRallyGamePadFix
A small patch for the original Dirt Rally to disable speed-sensitive steering when driving with a gamepad.

## Description

Like many other Codemasters games, Dirt Rally reduces the maximum steering angle of the player's car with speed, giving less turn in when driving faster, even with full joystick input.

This is problematic if you want to have complete car control at all times or simply use gyro-steering where a responsive and linear input is desirable.

The patch fixes this by making the game partially apply steering wheel parameters, even when a gamepad is detected.

## Installation

1. Download the latest version of [Ultimate-ASI-Loader.zip](https://github.com/ThirteenAG/Ultimate-ASI-Loader/releases)

2. Download [DrtGamePadFix.asi](https://github.com/Tobe95/DirtRallyGamePadFix/releases)

3. Place both dinput8.dll and DrtGamePadFix.asi into your Dirt Rally folder, next to drt.exe

4. Start up the game and rebind your controls if necessary. Additionally you should see that the menu entry now reads "Advanced Wheel Settings" instead of "Advanced Gamepad Settings".

<img src="/assets/wheel_settings.png" alt="wheel_settings">

5. Extra step for Linux/SteamDeck with Proton: In Steam, paste the following into your Dirt Rally launch options:
```
WINEDLLOVERRIDES="dinput8=n,b" %command%
```

## Disclaimer

This has only been tested with the Steam release of Dirt Rally. Other versions may or may not work.

While I've been using this fix for a while with no issues in multiplayer or leaderboards, I take no responsibility for any possible online ban!

## Credits

Many thanks to:

- [Sergeanur](https://github.com/Sergeanur/EaglePatch) I used Eagle Patch as a template and guide on how to patch a 32-bit exe

- [Withmorten](https://github.com/withmorten/patcher) for the win32 patcher included in this project

- [ThirteenAG](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for asi plugin loading
