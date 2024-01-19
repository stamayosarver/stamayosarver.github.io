#include <AccelStepper.h>
//Flow rates in ml/min
int flowRateBig=-50;
float flowRateSmall=-8;
//float speed=flowRateBig*5.83333333;
float speed=flowRateSmall*9.5;

//Button pins
int buttonPin=5;
int endButtonPin=7;
int stopButtonPin=8;
int revButtonPin=9;

//State variables
int state=0;
int state2=0;
int beforeState;
int Cstate;
int Pstate=1;
//int Cstate2;
//int Pstate2=1;

//Buffers
int buffer=1;
//int buffer2=1;

//LED pins
int red_LED=10;
int green_LED=11;
int blue_LED=12;

//Declare stepper motor
AccelStepper stepper(AccelStepper::DRIVER, 3, 2);

void setup() {  
//Set max speed
   stepper.setMaxSpeed(1000);
   //Serial.begin(9600);

//Button pull up resistor mode
   pinMode(buttonPin, INPUT_PULLUP);
   pinMode(endButtonPin, INPUT_PULLUP);
  pinMode(stopButtonPin, INPUT_PULLUP);

//LED mode
   pinMode(red_LED, OUTPUT);
   pinMode(green_LED, OUTPUT);
   pinMode(blue_LED, OUTPUT);
}

void loop()
{  
//Read values from the buttons
  int sensorVal=digitalRead(buttonPin);
  int endVal=digitalRead(endButtonPin);
  int stopVal=digitalRead(stopButtonPin);
    int revVal=digitalRead(revButtonPin);

//set button states
Cstate=sensorVal;
//Serial.println(sensorVal);
//Cstate2=revVal;

//If the on/off button is unpressed (off)
if (stopVal==1){
stepper.setSpeed(0);	
stepper.runSpeed();
analogWrite(red_LED, 0); 
analogWrite(green_LED, 0); 
analogWrite(blue_LED, 0); 
}

//If the end stop switch is triggered
else if (endVal==0){
    state=0;
stepper.setSpeed(0);	
stepper.runSpeed();
analogWrite(red_LED, 255); 
analogWrite(green_LED, 0); 
analogWrite(blue_LED, 0); 
}

//If the button is pressed while the motor is off, then turn on the motor and turn green
else if ((Pstate==1)&&(Cstate==0)&&(state==0)&&(endVal!=0)){
   analogWrite(red_LED, 0); 
analogWrite(green_LED, 255); 
analogWrite(blue_LED, 0); 
  state=state+buffer;
  buffer=buffer*(-1);
      stepper.setSpeed(speed);	
stepper.runSpeed();
  Pstate=Cstate;
}

//If the button is pressed while the motor is on the pause and turn yellow.
else if ((Pstate==1)&&(Cstate==0)&&(state==1)&&(endVal!=0)){
  state=state+buffer;
  buffer=buffer*(-1);
  stepper.setSpeed(0);	
  stepper.runSpeed();
 Pstate=Cstate;
 analogWrite(red_LED, 255); 
analogWrite(green_LED, 255); 
analogWrite(blue_LED, 0); 
}

//If the motor is off and not button is pressed, stay yellow.
else if ((state==0)&&(Pstate==Cstate)){
analogWrite(red_LED, 255); 
analogWrite(green_LED, 255); 
analogWrite(blue_LED, 0); 
}

//If the motor is running and no button is pressed then continue running and be green.
else {
  stepper.runSpeed();
  Pstate=Cstate;
  analogWrite(red_LED, 0); 
analogWrite(green_LED, 255); 
analogWrite(blue_LED, 0); 
}
}