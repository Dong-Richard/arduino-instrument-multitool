

#include <LiquidCrystal.h>


/**

  STRUCTS, TYPES, AND ENUMS

*/

// Representation of a musical note
struct Note {
    String name;  // (e.g., "C4", "C#4")
    float freq;   // Frequency of the note
};

// Representation of FSM states
enum fsm_state {
  TUNER_ON,
  INSTRUMENT_CHANGE,  // TUNER_OFF
  METRONOME_ON,
  METRONOME_OFF,
  NOTE_PLAYER_ON,
  NOTE_PLAYER_OFF
};

// typedef struct {
//   int test_bpm;
//   int test_currNote;
//   int test_currTunerNote;
//   int test_currInstrument;
//   bool test_toolButtonPressed;
//   bool test_onOffButtonPressed;
// } state_vars;


/**

  CONSTANTS

*/

byte goalLeft[8] = {
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001
};

byte goalRight[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000
};

// Array of `struct Note` for all notes between octaves 3 and 5
struct Note allNotes[] = {
    {"C3", 130.81}, {"C#3", 138.59}, {"D3", 146.83}, {"D#3", 155.56},
    {"E3", 164.81}, {"F3", 174.61},  {"F#3", 185.00}, {"G3", 196.00},
    {"G#3", 207.65}, {"A3", 220.00}, {"A#3", 233.08}, {"B3", 246.94},
    {"C4", 261.63}, {"C#4", 277.18}, {"D4", 293.66}, {"D#4", 311.13},
    {"E4", 329.63}, {"F4", 349.23},  {"F#4", 369.99}, {"G4", 392.00},
    {"G#4", 415.30}, {"A4", 440.00}, {"A#4", 466.16}, {"B4", 493.88},
    {"C5", 523.25}, {"C#5", 554.37}, {"D5", 587.33}, {"D#5", 622.25},
    {"E5", 659.26}, {"F5", 698.46},  {"F#5", 739.99}, {"G5", 783.99},
    {"G#5", 830.61}, {"A5", 880.00}, {"A#5", 932.33}, {"B5", 987.77}
};




/**

  FUNCTION DECLARATIONS

*/

// Setup functions for the LCD
void calibrate();


// Display functions
void displayNotePlayer(bool playing, String note);
void displayTuner(int accuracy, String note);
void displayMetronome(bool playing, int bpm);