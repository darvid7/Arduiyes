/*
 * I have no idea what i'm doing.exe
 */

// Declare things.
int red_pin = 11;
int green_pin = 12;
int blue_pin = 13;

// Stuff run once when Arduino turned on.
void setup()
{
  Serial.begin(9600); // Set serial port to output stuff to (top right hand mag icon).
  // Initialize pins as outputs.
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  print_stuff();
}

// Mixes the light :D, range = [0, 255].
void colours()
{
  // Plebpurle.
  analogWrite(red_pin, 225);
  analogWrite(blue_pin, 225);
  analogWrite(green_pin, 0);
}

void print_stuff()
{
  Serial.print('this is not text');
  Serial.print("this is text");
}
// Do forever until turned off.
void loop()
{
  delay(500);
  colours();
  delay(500);
}

