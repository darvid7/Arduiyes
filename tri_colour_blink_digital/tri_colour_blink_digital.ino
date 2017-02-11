
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
  // Initialize pins as outputs.
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
}

void red_on()
{
  digitalWrite(red_pin, HIGH);
  digitalWrite(blue_pin, LOW);
  digitalWrite(green_pin, LOW);
}

void green_on()
{
  digitalWrite(red_pin, LOW);
  digitalWrite(blue_pin, LOW);
  digitalWrite(green_pin, HIGH);
}

void blue_on()
{
  digitalWrite(red_pin, LOW);
  digitalWrite(blue_pin, HIGH);
  digitalWrite(green_pin, LOW);
}

// Do forever until turned off.
void loop()
{
  red_on();
  delay(500);
  green_on();
  delay(500);
  blue_on();
  delay(500);
}

