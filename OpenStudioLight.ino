/*
    Name:       OpenStudioLight.ino
    Created:	29/06/2019 17:40:24
    Author:     Jorge Frias
*/

// Define User Types 
//
//THIS IS P2, P2 is analog input 1, so when you are using analog read, you refer to it as 1.
int potPin = 1;    // select the input pin for the potentiometer
int value = 0;       // variable to store the value coming from the sensor

int ledPin = 0;	

// Function Prototypes
//


// Functions 
/**
	Value 0-1023
*/
void ledValue(int value)
{
	// The range is 0-255
	int val = map(value, 0, 1023, 0, 255);  //Scales 0-1023 to 0-255 (or whatever you want)
	// The driver works inverted
	int writeVal = 255 - val;
	analogWrite(ledPin, writeVal);
}

// The setup() function runs once each time the micro-controller starts
void setup()
{
  //Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

// Add the main program code into the continuous loop() function
void loop()
{
	value = analogRead(potPin);    // Read the value from the sensor
	ledValue(value);
	delay(10);
}
