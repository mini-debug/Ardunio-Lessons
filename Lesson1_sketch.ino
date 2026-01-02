// Arduino Lesson 101.1 

// Example Simple Sum:

const int num_1 = 6;  // global variable -> const is just a read only variable 

void setup() {
  Serial.begin(9600); // Run speed of our serial data
  Serial.println("Simple Calculations use functions:");

  int num_1;          // Declare local variable (not global)
  int num_2;          // Declare local variable

  num_1 = 6;          // Assign values
  num_2 = 7;

  // FIX 1: function call syntax was wrong
  // You must NOT use extra parentheses or commas like (num_1, num_2)
  Serial.println(do_a_calc(num_1, num_2));

  /*
   This prints:
   -------------------------------------
   Simple Calculations use functions:
   13
  */
}

void loop() { 
  Serial.println(millis()); // Prints milliseconds since program started
  delay(1000);              // Wait 1 second
}

// Best tip: try to use fewer global variables and more local ones

// Function Definition:
int do_a_calc(int num_1, int num_2) {
  // FIX 2: variable name mismatch (numb_2 vs num_2)
  // FIX 3: removed stray '.' after function header

  // FIX 4: DO NOT reassign num_1 here unless intentional
  // num_1 = 6;  <-- this would override the argument and defeat the purpose

  int result = num_1 + num_2; // Use passed-in values
  return result;              // Return the sum
}


