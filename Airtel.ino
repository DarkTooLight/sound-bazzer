//YouTube|Tech at Home
/*
 Connections:
 
 Speaker positive = Arduino digital D5
 Speaker negative = Arduino GND
 
*/

const uint8_t pin = D5;
#define  C3  130.81
#define Db3 138.59
#define D3  146.83
#define Eb3 155.56
#define E3  164.81
#define F3  174.61
#define Gb3 185.00
#define G3  196.00
#define Ab3 207.65
#define LA3 220.00
#define Bb3 233.08
#define B3  246.94
#define C4  261.63
#define Db4 277.18
#define D4  293.66
#define Eb4 311.13
#define E4  329.63
#define F4  349.23
#define Gb4 369.99
#define G4  392.00
#define Ab4 415.30
#define LA4 440.00
#define Bb4 466.16
#define B4  493.88
#define C5  523.25
#define Db5 554.37
#define D5  587.33
#define Eb5 622.25
#define E5  659.26
#define F5  698.46
#define Gb5 739.99
#define G5  783.99
#define Ab5 830.61
#define LA5 880.00
#define Bb5 932.33
#define B5  987.77

// DURATION OF THE NOTES 
#define BPM 120    //  you can change this value changing all the others
#define H 2*Q //half 2/4
#define Q 60000/BPM //quarter 1/4 
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4

void airtel_song(){
    // Line1
    tone(pin,LA4,Q);
    delay(1+Q);
    tone(pin,LA4,E);
    delay(1+E);
    tone(pin,LA4,E);
    delay(1+E);
    tone(pin,LA4,Q);
    delay(1+Q);
    tone(pin,E5,E);
    delay(1+E);
    
    delay(1+E); 
    tone(pin,B4,E);
    delay(1+E);
    tone(pin,C5,E);
    delay(1+E);
    tone(pin,B4,E);
    delay(1+E);
    tone(pin,LA4,E);
    delay(1+E);
    tone(pin,G4,Q);
    delay(1+Q);
    tone(pin,B4,Q);
    delay(1+Q); 
   // Line2
    tone(pin,LA4,E);
    delay(1+E);
    tone(pin,B4,E);
    delay(1+E);
    tone(pin,LA4,E);
    delay(1+E);
    tone(pin,G4,E);
    delay(1+E);
    tone(pin,LA4,E);
    delay(1+E);
     tone(pin,B4,E);
    delay(1+E); 
    tone(pin,C5,E);
    delay(1+E);
    delay(1+E);
    tone(pin,B4,H);
    delay(1+H);
    tone(pin,LA4,E);
    delay(1+E);
    tone(pin,G4,E);
    delay(1+E);
    tone(pin,E4,H);
    delay(1+H);  
  //Line3
  
    tone(pin,LA5,Q);
    delay(1+Q);
    tone(pin,E5,Q);
    delay(1+Q);
    tone(pin,G5,Q);
    delay(1+Q);
    tone(pin,E5,E);
    delay(1+E);
    
    delay(1+E);
    tone(pin,E5,Q);
    delay(1+Q);
     tone(pin,D5,Q);
    delay(1+Q); 
    tone(pin,C5,Q);
    delay(1+Q);
    tone(pin,LA4,Q);
    delay(1+Q); 

    //Line4
 
    tone(pin,C5,Q);
    delay(1+Q);
    tone(pin,D5,Q);
    delay(1+Q);
    tone(pin,E5,Q);
    delay(1+Q);
    tone(pin,F5,E);
    delay(1+E);
    
    delay(1+E);
    tone(pin,D5,W);
    delay(1+W);
     tone(pin,C5,E);
    delay(1+E); 
    tone(pin,B4,E);
    delay(1+E);
    tone(pin,LA4,E);
    delay(1+E); 

 
}

void setup() {
airtel_song();
}

void loop() {
  // no need to repeat the melody.
}
