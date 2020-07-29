<!-- omit in toc -->
# BigTreeTech Touchscreen Firmware
![GitHub](https://img.shields.io/github/license/bigtreetech/bigtreetech-TouchScreenFirmware.svg)
[![GitHub contributors](https://img.shields.io/github/contributors/bigtreetech/bigtreetech-TouchScreenFirmware.svg)](https://github.com/bigtreetech/BIGTREETECH-TouchScreenFirmware/graphs/contributors)
![GitHub Release Date](https://img.shields.io/github/release-date/bigtreetech/bigtreetech-TouchScreenFirmware.svg)
[![Build Status](https://github.com/bigtreetech/BIGTREETECH-TouchScreenFirmware/workflows/Build%20Test/badge.svg?branch=master)](https://github.com/bigtreetech/bigtreetech-TouchScreenFirmware/actions)

Firmware for BigTreeTech's dual-mode touchscreen 3D printer controllers

# Customized Firmware

Customized firmware for personal use with the following changes so far:
- [x] Add UBL specific features & menu (https://github.com/bigtreetech/BIGTREETECH-TouchScreenFirmware/pull/863)
  - [ ] Add preheat option for hold/cold bed leveling
  - [ ] Add print mesh validation option
  - [ ] Possibly add UBL mesh editing function similar to Marlin LCD
- [x] Add Auto Firmware Retract into Machine Parameters
- [x] Change some wording to be more user friendly
  - [x] "Features" to "TFT" to differentiate between "Machine" settings & "TFT" settings/features
  - [x] "Decrease" & "Increase" for nozzle offsets changed to "down" & "up" with matching icon
- [x] Add save settings (EEPROM) button to machine parameters menu
- [ ] Add filament change menu (M600, M701, M702) with preheat options
  - [ ] Add filament detection state
- [ ] Add new unified theme similar to the Biqu Thunder (cleaner looking)
