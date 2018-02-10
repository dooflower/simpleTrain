void stopMotors(){
  /*INSERT MOTOR CODE  
   * 
   */
   Serial.println("motor stop");
   analogWrite(motorControlFB, stopSpeed);
   analogWrite(motorControlLR, forwardCenter);
}

void turnForwardLeft(){
  /*INSERT MOTOR CODE  
   * 1v
   */
   Serial.println("forward left");
   analogWrite(motorControlFB, forwardSpeed);
   analogWrite(motorControlLR, forwardCenter-forwardLeft);

}

void turnForwardRight(){
  /*INSERT MOTOR CODE  
   * 4v
   */
//  Serial.println("forward right");
   analogWrite(motorControlFB, forwardSpeed);
   analogWrite(motorControlLR, forwardCenter+forwardRight);
}


void goForward(){
  /*INSERT MOTOR CODE  
   * 2.38v
   */
  Serial.println("forward");
   analogWrite(motorControlFB, forwardSpeed);
   analogWrite(motorControlLR, forwardCenter);
}

void turnBackwardLeft(){
  /*INSERT MOTOR CODE  
   * 
   */
//   Serial.println("backward left");
   analogWrite(motorControlFB, backwardSpeed);
   analogWrite(motorControlLR, backwardCenter+backwardLeft);

}

void turnBackwardRight(){
  /*INSERT MOTOR CODE  
   * 
   */
//  Serial.println("backward right");
   analogWrite(motorControlFB, backwardSpeed);
   analogWrite(motorControlLR, backwardCenter-backwardRight);

}


void goBackward(){
  /*INSERT MOTOR CODE  
   * 
   */
  Serial.println("backward");
   analogWrite(motorControlFB, backwardSpeed);
   analogWrite(motorControlLR, backwardCenter);

}
