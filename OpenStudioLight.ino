/*
    Name:       OpenStudioLight.ino
    Created:	29/06/2019 17:40:24
    Author:     Jorge Frias
*/

// Define User Types 
//
int potPin = A2;    // select the input pin for the potentiometer
int val = 0;       // variable to store the value coming from the sensor


// Function Prototypes
//


// Functions 
//

// The setup() function runs once each time the micro-controller starts
void setup()
{
  Serial.begin(9600);
}

// Add the main program code into the continuous loop() function
void loop()
{
	val = analogRead(potPin);    // read the value from the sensor
	Serial.println(val);
	delay(500);
}
