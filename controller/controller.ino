/*-------------------------------------
	Arduino code for the controller(master) and remote controllers
	
	Written by: Jimmy | 08/2014
---------------------------------------*/

//------------
#define DEBUG
//------------

//-- pin assignments
#define pin


//-----------------------------------------------
void setup() {
	#ifdef DEBUG 
	Serial.begin(9600);
	#endif
	//pinMode(pin, INPUT);
}

//-----------------------------------------------
void loop() {
	//digitalWrite(pin, HIGH);
	//digitalRead(pin);
}
