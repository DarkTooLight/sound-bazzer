//YouTube|Tech at Home
/*
 Connections:
 
 Speaker positive = Arduino digital D5
 Speaker negative = Arduino GND
 
*/

  
int speakerPin = D5;

int length = 149; // the number of notes

//Jana Gana Mana
char notes[] = "cdeeeeeeeeedef eeedddbdc ccgggggggggaf fffffeddf eedeedeggaff eeeeeddbdc cdeeeedf efgggfedfe feeeddbdc ccggggeggggga fffffedfe egc bab aga ccddeedef "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                2, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1,
                2, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1,
                2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1,
                1, 1, 1, 1, 2, 2, 2, 1, 1,
                1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
                1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                2, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                1, 1, 4, 1, 1, 1, 4, 1, 1, 1, 4, 1,
                1, 1, 1, 1, 1, 1, 1, 1, 4, 1 };
int tempo = 250;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    
    // pause between notes
    delay(tempo / 2); 
  }
}
