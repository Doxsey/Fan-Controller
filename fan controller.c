int tempPin = A5;    	// Thermisitor input pin
int led = 6;          	// Power LED pin
int fanPin = 11;		// Fan control Pin
int tempPower = 13;		// Power for the temp sensor
int tempValue = 0; 	// variable to store the value coming from the sensor
int caseVal = 0;



void setup() {
	  pinMode(led, OUTPUT);  
	  pinMode(fanPin, OUTPUT);
	  pinMode(tempPin, INPUT);
  }

void loop() {
	analogWrite(led, 40);						// Turns on the power LED
		
	// Acquire Reading from the temp sensor
	digitalWrite(tempPower, HIGH);  
	tempValue = analogRead(tempPin);			//Reads analog temp value
	digitalWrite(tempPower, LOW);
	
	if (tempValue < 460) {
		caseVal = 0; }
		else if (tempValue > 480) {
			caseVal = 3; }
		else if (tempValue > 470) {
			caseVal = 2; }
		else if (tempValue > 460) {
			caseVal = 1; }
		else {
			caseVal = 0; }
	
	switch (caseVal) {
		case 0:
			analogWrite(fanPin, 0);
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
			break;
		case 1:
			//analogWrite(fanPin, 255);
			//delay(2000);
			analogWrite(fanPin, 200);
			
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
				delay(200);
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
			break;
		case 2:
			//analogWrite(fanPin, 255);
			//delay(1000);
			analogWrite(fanPin, 225);
			
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
				delay(200);
				analogWrite(led, 0);
				delay(200);
				analogWrite(led, 40);
				delay(200);
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
			break;
		case 3:
			//analogWrite(fanPin, 255);
			//delay(1000);
			analogWrite(fanPin, 250);
			
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
				delay(200);
				analogWrite(led, 0);
				delay(200);
				analogWrite(led, 40);
				delay(200);
				analogWrite(led, 0);
				delay(200);
				analogWrite(led, 40);
				delay(200);
				analogWrite(led, 0);
				delay(2000);
				analogWrite(led, 40);
			break;
	
	}
	delay(10000);
	
}








