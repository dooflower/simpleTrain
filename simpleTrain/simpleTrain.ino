
//0:A | 1:A->B | 2:B | 3:B->A
#define stationA 0
#define AtoB 1
#define stationB 2
#define BtoA 3

int whereAmI = stationA; 

//Sensor Pins, "Back"is where the wheels are
#define FLsensor 5
#define FRsensor 7
#define BLsensor 2
#define BRsensor 4

//Wall Detection IR Sensor Pins
#define FwallSensor 12
#define BwallSensor 13

//Motor Control Pins Forward/Backward 9, Left/Right 10
#define motorControlFB 9 //for joystick A&C
#define motorControlLR 10 //for joystick D
#define midVoltagePin 11 //constant 2.4 v for joystick B


#define pwm1v 51
#define pwm4v 204
#define lowerTrigger 113
#define higherTrigger 148
#define midTrigger 130 


 

int stopTimer = 3000;

void setup() {
  pinMode(FLsensor, INPUT);
  pinMode(FRsensor, INPUT);
  pinMode(BLsensor, INPUT);
  pinMode(BRsensor, INPUT);
  pinMode(FwallSensor, INPUT);
  pinMode(BwallSensor, INPUT);
  pinMode(motorControlFB, OUTPUT);
  pinMode(motorControlLR, OUTPUT);
  pinMode(midVoltagePin, OUTPUT);
  analogWrite(midVoltagePin,midTrigger);

  Serial.begin(9600);

  
}

void loop() {

  switch(whereAmI){
    /*******************/   
    case stationA:
      Serial.println("Arrived Station A");
      stopAndWait();
      whereAmI = AtoB;
        
    break; 
    /*******************/
    case AtoB:

      if(!digitalRead(FwallSensor)){     //if hit wall,change Mode to stationB
        whereAmI = stationB;
      }else{
        followLineForward();
      }
    break;
    /*******************/
    case stationB:
       Serial.println("Arrived Station B");

      stopAndWait();
      whereAmI = BtoA;
      
    break;
    /*******************/
    case BtoA:
      if(!digitalRead(BwallSensor)){      //if hit wall,change Mode to stationA
        whereAmI = stationA;
      }else{
        followLineBackward();  
      } 
    break; 
  }
}


void stopAndWait(){
  stopMotors();
  Serial.print("stop! wait for ");
  Serial.print(stopTimer);
  Serial.println(" seconds.");
  delay(stopTimer);
  Serial.println("ok, go");
}

void followLineForward(){
  //check front line sensors
  boolean left = !digitalRead(FLsensor);
  boolean right = !digitalRead(FRsensor);
  
 if(left&&right){
    stopMotors();
  }else if(left){
    turnForwardLeft(); //stop left motor  
  }else if(right){
    turnForwardRight(); //stop right motor  
  }else{
    goForward();
  }
}

void followLineBackward(){
  //check front line sensors
  boolean left = !digitalRead(BLsensor);
  boolean right = !digitalRead(BRsensor);
  
 if(left&&right){
    stopMotors();
  }else if(left){
    turnBackwardLeft(); //stop left motor  
  }else if(right){
    turnBackwardRight(); //stop right motor  
  }else{
    goBackward();
  }
}



