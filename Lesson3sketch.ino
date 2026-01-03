// Ardunio 101.3 

int button_pressed = 1; // switch the value of 1 to see outputs 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

  switch (button_pressed) {
    case 1: 
      Serial.println("Button 1 pressed"); 
      break; 
    case 2: 
      Serial.println("Button 2 is pressed"); 
      break;

// This is if we don't recieve from user button 1 or 2 but a diff num
      default: 
      Serial.println("I don't know which button was pressed");
      break; 
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
