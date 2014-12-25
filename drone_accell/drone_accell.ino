//fart

float x, y, z, xmod, ymod, zmod;

void setup()
{
  Serial.begin(9600);      // sets the serial port to 9600
}

void loop()
{
  x = analogRead(0);       // read analog input pin 0
  y = analogRead(1);       // read analog input pin 1
  z = analogRead(2);       // read analog input pin 1
  
  xmod=(x-330)/70;
  ymod=(y-330)/70;
  zmod=(z-330)/70;
  
  Serial.print("accelerations are x, y, z: ");
  Serial.print(xmod, DEC);    // print the acceleration in the X axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.print(ymod, DEC);    // print the acceleration in the Y axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.println(zmod, DEC);  // print the acceleration in the Z axis
  delay(500);              // wait 100ms for next reading
}
