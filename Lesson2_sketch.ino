// Arduino lesson 101.2 
// if-else statements

int counter = 0;   // global variable to track the counter

void setup() {
  Serial.begin(9600);  // initialize serial communication
}

void loop() {

  // if counter is less than 10
  if (counter < 10) {
    Serial.print(counter);
    Serial.print(", ");
    Serial.println("Counter is smaller than 10");
  }
  else {  // else MUST have braces if more than one line
    Serial.print(counter);
    Serial.print(", ");
    Serial.println("Counter is not smaller than 10");
  }

  counter++;        // increase counter by one
  delay(500);       // wait 500 ms
}

/* 

if you know python the eqavalint would be: 

counter = 0

while True:
    if counter < 10:
        print(f"{counter}, Counter is smaller than 10")
    else:
        print(f"{counter}, Counter is not smaller than 10")

    counter += 1



*/



