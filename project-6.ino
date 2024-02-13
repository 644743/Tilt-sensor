// C++ code
//
int motor = 5; 
int tilt = 6; 

void setup() {
 pinMode(motor, OUTPUT);
 pinMode(tilt, INPUT_PULLUP); 
}
void loop() {
  
int tiltState = digitalRead(tilt);
 
if (tiltState == 1) {
  
    digitalWrite(motor, 0);
   
} else {
    digitalWrite(motor, 1);
  }
}