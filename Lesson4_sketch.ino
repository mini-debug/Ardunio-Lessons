// Ardunio Lesson 101.4

/*

// this program is a blinking Led (4.1a READ.ME)
// Uncomment the code to see what happens and if you do comment bottom button code. 

void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT); // the number we want to control in the board (Pin conection)
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); // this would just turn it (on). 
  delay(1000);
  digitalWrite(8, LOW); // This would make it go (off). 
  delay(1000); 
}

 */


// What if we wanted to add a button to control it? (4.1b READ.ME)

int buttonState = 0;   // variable to store button state

void setup() {
  // runs once
  pinMode(2, INPUT);   // digital pin 2 for button
  pinMode(8, OUTPUT);  // digital pin 8 for LED
  Serial.begin(9600);
}

void loop() {
  // runs repeatedly
  buttonState = digitalRead(2);

  if (buttonState == HIGH) {
    Serial.println("HIGH");   // button pressed
    digitalWrite(8, HIGH);    // LED ON
  } 
  else {
    Serial.println("LOW");    // button not pressed
    digitalWrite(8, LOW);     // LED OFF
  }

  delay(100); // small delay for stability (not 1000 ms)
}
