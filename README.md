# Joker

Welcome to the Joker project!

![Screenshot](data/img/screenshot.jpg)

This repository is a continuation of the original Joker project. The primary goal is to revitalize this rhythmo band software, ensuring it works on modern systems and improving it for the future.

Key objectives include:
- Restoring full functionality of the rhythmo band software.
- Adding the ability to edit project files.
- Implementing a feature to export videos with the rhythmo band overlay.

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

