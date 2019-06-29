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
	// The driver works inverted
	int writeVal = 1023 - value;
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
	//value = analogRead(potPin);    // read the value from the sensor
	//ledValue(value);
	//delay(100);

	// TEST
	ledValue(200);
	delay(1000);

	ledValue(300);
	delay(1000);

	ledValue(500);
	delay(1000);

	ledValue(800);
	delay(1000);

	ledValue(1000);
	delay(1000);

	ledValue(0);
	delay(100);
}
