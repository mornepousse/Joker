# Joker

[![Build Status](https://travis-ci.org/Phonations/Joker.svg?branch=master)](https://travis-ci.org/Phonations/Joker)
[![Build status](https://ci.appveyor.com/api/projects/status/4vgrsapqble7rkqi/branch/master?svg=true)](https://ci.appveyor.com/project/MartinDelille/joker/branch/master)
[![Coverage Status](https://coveralls.io/repos/Phonations/Joker/badge.svg?branch=master)](https://coveralls.io/r/Phonations/Joker?branch=master)
[![Coverity](https://img.shields.io/coverity/scan/3341.svg)](https://scan.coverity.com/projects/phonations-joker)
[![Weblate](https://hosted.weblate.org/widgets/phonations/-/shields-badge.svg)](https://hosted.weblate.org/engage/phonations/?utm_source=widget)
[![Download](https://img.shields.io/github/downloads/phonations/joker/total.svg)](https://github.com/phonations/joker/releases/latest)
[![Gratipay](https://img.shields.io/gratipay/MartinDelille.svg)](https://gratipay.com/MartinDelille)
[![Gitter](https://badges.gitter.im/Join Chat.svg)](https://gitter.im/Phonations/Joker?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

Welcome to the Joker project!

![Screenshot](data/img/screenshot.jpg)

This repository is a continuation of the original Joker project. The primary goal is to revitalize this rhythmo band software, ensuring it works on modern systems and improving it for the future.

Key objectives include:
- Restoring full functionality of the rhythmo band software.
- Adding the ability to edit project files.
- Implementing a feature to export videos with the rhythmo band overlay.

Joker was originally available on the *Mac App Store*:

[![Buy](data/img/appstore.png)](https://itunes.apple.com/app/joker/id932002433)

For *Windows* installer, go to the [release section](https://github.com/Phonations/joker/releases/latest).

Otherwise, you can try to compile the project yourself using the following instruction:

## Project structure

This repository hosts the Joker projet components:

- Applications
  - *Joker*: The main project.
- Libraries
  - *PhTools*: Common basic utilities.
  - *PhCommonUI*: Common user interface component.
  - *PhStrip*: The strip document model.
  - *PhGraphic*: Basic library for displaying graphical object and texts.
  - *PhGraphicStrip*: Specific strip related display routine.
  - *PhAudio*: Basic library for audio playback/recording.
  - *PhVideo*: Video playback library.
  - *PhSync*: Generic sync component.
  - *PhSony*: Sony 9 pin synchronisation interface.
  - *PhLtc*: LTC synchronisation interface.
  - *PhMidi*: Midi synchronisation interface.
* Various test projects for testing the library modules independently or integrated with each others. It contains also unit testing modules in the *specs* directory.

## Compilation information

In order to compile the project you will need to follow the instructions depending on your system:

### <a name="linux"></a> Linux:

You need to install Qt5 and ffmpeg development libraries.

    sudo apt-get install qt5-default libavcodec-dev libavformat-dev libswscale-dev libavutil-dev portaudio19-dev libltc-dev

Then compile the project:

    cd Joker
    qmake Joker.pro
    make

### <a name="mac"></a> Mac OS:

_(Instructions coming soon)_

### <a name="windows"></a> Windows:

_(Instructions coming soon)_

The project uses *Qt 5* available here: http://www.qt.io/download/

# Talk

We love talking about this project! Feel free to post an issue or contact us via the [gitter channel](https://gitter.im/Phonations/Joker) !

