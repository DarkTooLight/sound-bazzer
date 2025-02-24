//YouTube|Tech at Home
/*
 Connections:
 
 Speaker positive = Arduino digital 8
 Speaker negative = Arduino GND
 
*/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

// Buzzer
int speakerPin = D5;

// Leds
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;
int led7 = 6;
int led8 = 5;

void setup() {
    pinMode(speakerPin, OUTPUT);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
}

void loop() {
    GameOfThrones();
}

void ilumina(int note){
  if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
   digitalWrite(led1, HIGH);
  } else if (note == NOTE_C4) {
    digitalWrite(led2, HIGH);
  } else if(note == NOTE_AS3) {
    digitalWrite(led3, HIGH);
  } else if (note == NOTE_DS4) {
    digitalWrite(led4, HIGH);
  } else if (note == NOTE_D4) {
    digitalWrite(led7, HIGH);
  } else if (note == NOTE_F4) {
    digitalWrite(led8, HIGH);
  } else if (note == NOTE_F3) {
    digitalWrite(led5, HIGH);
  } else if(note == NOTE_E4) {
    digitalWrite(led6, HIGH);
  }
}

void apaga(int note){
  if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
   digitalWrite(led1, LOW);
  } else if (note == NOTE_C4) {
    digitalWrite(led2, LOW);
  } else if(note == NOTE_AS3) {
    digitalWrite(led3, LOW);
  } else if (note == NOTE_DS4) {
    digitalWrite(led4, LOW);
  } else if (note == NOTE_D4) {
    digitalWrite(led7, LOW);
  } else if (note == NOTE_F4) {
    digitalWrite(led8, LOW);
  } else if (note == NOTE_F3) {
    digitalWrite(led5, LOW);
  } else if(note == NOTE_E4) {
    digitalWrite(led6, LOW);
  }
}

void GameOfThrones() {
  for(int i=0; i<4; i++) {
    tone(speakerPin, NOTE_G4);
    ilumina(NOTE_G4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_G4);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_DS4);
    ilumina(NOTE_DS4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_DS4);

    tone(speakerPin, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_F4);
  }

  for(int i=0; i<4; i++){
    tone(speakerPin, NOTE_G4);
    ilumina(NOTE_G4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_G4);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_E4);
    ilumina(NOTE_E4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_E4);

    tone(speakerPin, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_F4);
  }

    tone(speakerPin, NOTE_G4);
    ilumina(NOTE_G4);
    delay(1500);
    noTone(speakerPin);
    apaga(NOTE_G4);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(1500);
    apaga(NOTE_C4);

//
    tone(speakerPin, NOTE_E4);
    ilumina(NOTE_E4);
    delay(250);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    apaga(NOTE_C4);
//
    tone(speakerPin, NOTE_G4);
    ilumina(NOTE_G4);
    delay(1000);
    noTone(speakerPin);
    apaga(NOTE_G4);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(1000);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_DS4);
    ilumina(NOTE_DS4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_DS4);

    tone(speakerPin, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_F4);
    
  for(int i=0; i<3; i++) {
    
    tone(speakerPin, NOTE_D4);
    ilumina(NOTE_D4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_D4);
    
    tone(speakerPin, NOTE_G3);
    ilumina(NOTE_G3);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_G3);

    tone(speakerPin, NOTE_AS3);
    ilumina(NOTE_AS3);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_AS3);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_C4);
    
    
  }
  


      tone(speakerPin, NOTE_D4);
      ilumina(NOTE_D4);
      delay(1500);
      noTone(speakerPin);
      apaga(NOTE_D4);
      
      tone(speakerPin, NOTE_F4);
      ilumina(NOTE_F4);
      delay(1500);
      noTone(speakerPin);
      apaga(NOTE_F4);

      tone(speakerPin, NOTE_AS3);
      ilumina(NOTE_AS3);
      delay(1000);
      noTone(speakerPin);
      apaga(NOTE_AS3);

      tone(speakerPin, NOTE_DS4);
      ilumina(NOTE_DS4);
      delay(250);
      noTone(speakerPin);
      apaga(NOTE_DS4);

      tone(speakerPin, NOTE_D4);
      ilumina(NOTE_D4);
      delay(250);
      noTone(speakerPin);
      apaga(NOTE_D4);

      tone(speakerPin, NOTE_F4);
      ilumina(NOTE_F4);
      delay(1000);
      noTone(speakerPin);
      apaga(NOTE_F4);

      tone(speakerPin, NOTE_AS3);
      ilumina(NOTE_AS3);
      delay(1000);
      noTone(speakerPin);
      apaga(NOTE_AS3);

      tone(speakerPin, NOTE_DS4);
      ilumina(NOTE_DS4);
      delay(250);
      noTone(speakerPin);
      apaga(NOTE_DS4);

      tone(speakerPin, NOTE_D4);
      ilumina(NOTE_D4);
      delay(250);
      noTone(speakerPin);
      apaga(NOTE_D4);

      tone(speakerPin, NOTE_C4);
      ilumina(NOTE_C4);
      delay(500);
      noTone(speakerPin);
      apaga(NOTE_C4);

  for(int i=0; i<3; i++) {
      tone(speakerPin, NOTE_GS3);
      ilumina(NOTE_GS3);
      delay(250);
      noTone(speakerPin);
      apaga(NOTE_GS3);

      tone(speakerPin, NOTE_AS3);
      ilumina(NOTE_AS3);
      delay(250);
      noTone(speakerPin);
      apaga(NOTE_AS3);

      tone(speakerPin, NOTE_C4);
      ilumina(NOTE_C4);
      delay(500);
      noTone(speakerPin);
      apaga(NOTE_C4);

      tone(speakerPin, NOTE_F3);
      ilumina(NOTE_F3);
      delay(500);
      noTone(speakerPin);
      apaga(NOTE_F3);
  }

    tone(speakerPin, NOTE_G4);
    ilumina(NOTE_G4);
    delay(1000);
    noTone(speakerPin);
    apaga(NOTE_G4);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(1000);
    noTone(speakerPin);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_DS4);
    ilumina(NOTE_DS4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_DS4);

    tone(speakerPin, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_F4);

    tone(speakerPin, NOTE_G4);
    ilumina(NOTE_G4);
    delay(1000);
    noTone(speakerPin);
    apaga(NOTE_G4);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(1000);
    noTone(speakerPin);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_DS4);
    ilumina(NOTE_DS4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_DS4);

    tone(speakerPin, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_F4);

    tone(speakerPin, NOTE_D4);
    ilumina(NOTE_D4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_D4);

  for(int i=0; i<4; i++) {
    tone(speakerPin, NOTE_G3);
    ilumina(NOTE_G3);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_G3);

    tone(speakerPin, NOTE_AS3);
    ilumina(NOTE_AS3);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_AS3);

    tone(speakerPin, NOTE_C4);
    ilumina(NOTE_C4);
    delay(250);
    noTone(speakerPin);
    apaga(NOTE_C4);

    tone(speakerPin, NOTE_D4);
    ilumina(NOTE_D4);
    delay(500);
    noTone(speakerPin);
    apaga(NOTE_D4);
  }
}

