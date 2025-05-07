# Arduino Instrument Multi-Tool

The Arduino Instrument Multi-Tool is a device that integrates three essential tools for
musicians: a metronome, a note player, and a tuner. All three components are able to toggle on
and off and switch between each other. The metronome supports BPMs between 40 and 250,
the note player supports all chromatic tones between C3 and B5, and the tuner supports tuning
to the relevant pitches of the instrument selected. The device assumes that the user has a basic
knowledge of note names, intonation, and frequency.

## File structure

**./arduino_multitool**: All files are expected to be loaded into an Arduino Uno R4 WiFi. Contains code for button operation, metronome output through attatched buzzer circuit, note player, lcd screen operation, finite state machine, and tests. 

**mic_to_serial.py**: Is run locally on a laptop to use the laptop microphone. Uses pyaudio and aubio to perform pitch detection. 

**Report.pdf**: Contains Project Reqs, Architechture diagram, FSM diagram, Sequence diagrams, descriptions of all files. 

