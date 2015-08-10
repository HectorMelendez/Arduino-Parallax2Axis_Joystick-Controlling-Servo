//Parallax 2 Axis controlling Servo Motor

#include <Servo.h>

const int SERVOX = 9;		//Servo X-Axis on Pin9
const int SERVOY = 10;		//Servo Y-Axis on Pin 10
const int POTX = 0;		//L-R position on Analog Pin 0
const int POTY = 1;		//U-D position on Analog Pin 1

Servo myServox;
Servo myServoy;

int valX = 0;			//for storing the reading from the POTX
int valY = 0;			//for storing the reading from the POTY



void setup(){
	myServox.attach(SERVOX);
	myServoy.attach(SERVOY);
}



void loop(){
	valX = analogRead(POTX);			//Read POT
	valX = map(valX, 0, 1023, 0, 179);		//scale it to the servo
	myServox.write(valX);				//sets the servo
	delay(15);					//waits for servo

	valY = analogRead(POTY);			//Read POT
	valY = map(valY, 0, 1023, 0, 179);		//scale it to the servo
	myServoy.write(valY);				//sets the servo
	delay(15);	
}
