int ledPin3 = 3;
int ledPin5 = 5;
int ledPin7 = 7;
int ledPin9 = 9;

// The setup() method runs once, when the sketch starts
 
void setup(){                
  // initialize the digital pin as an output:
  pinMode(ledPin3, OUTPUT);     
  pinMode(ledPin5, OUTPUT);     
  pinMode(ledPin7, OUTPUT);     
  pinMode(ledPin9, OUTPUT);     
  
}
 
// the loop() method runs over and over again,
// as long as the Arduino has power
 
void loop(){

  digitalWrite(ledPin3, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin3, LOW);    // set the LED off
  //delay(100);                  // wait for a second

  digitalWrite(ledPin5, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin5, LOW);    // set the LED off
  //delay(100);                  // wait for a second

  digitalWrite(ledPin7, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin7, LOW);    // set the LED off
  //delay(100);                  // wait for a second

  digitalWrite(ledPin9, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin9, LOW);    // set the LED off
  //delay(100);                  // wait for a second
 
}