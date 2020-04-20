int ledPin2 = 2; 
int ledPin4 = 4;
int ledPin6 = 6;
int ledPin8 = 8;

// The setup() method runs once, when the sketch starts
 
void setup(){                
  // initialize the digital pin as an output:
  pinMode(ledPin2, OUTPUT);     
  pinMode(ledPin4, OUTPUT);     
  pinMode(ledPin6, OUTPUT);     
  pinMode(ledPin8, OUTPUT);     
  
}
 
// the loop() method runs over and over again,
// as long as the Arduino has power
 
void loop(){
  
  digitalWrite(ledPin2, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin2, LOW);    // set the LED off
  //delay(100);                  // wait for a second
  
  digitalWrite(ledPin4, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin4, LOW);    // set the LED off
  //delay(100);                  // wait for a second

  digitalWrite(ledPin6, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin6, LOW);    // set the LED off
  //delay(100);                  // wait for a second

  digitalWrite(ledPin8, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(ledPin8, LOW);    // set the LED off
  //delay(100);                  // wait for a second
  
}