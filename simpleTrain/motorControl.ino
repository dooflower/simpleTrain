void stopMotors(){
  /*INSERT MOTOR CODE  
   * 
   */
   Serial.println("motor stop");
   analogWrite(motorControlFB, midTrigger);
   analogWrite(motorControlLR, midTrigger);
}

void turnForwardLeft(){
  /*INSERT MOTOR CODE  
   * 1v
   */
   Serial.println("forward left");
   analogWrite(motorControlFB, lowerTrigger);
   analogWrite(motorControlLR, lowerTrigger);

}

void turnForwardRight(){
  /*INSERT MOTOR CODE  
   * 4v
   */
  Serial.println("forward right");
   analogWrite(motorControlFB, lowerTrigger);
   analogWrite(motorControlLR, higherTrigger);
}


void goForward(){
  /*INSERT MOTOR CODE  
   * 2.38v
   */
  Serial.println("forward");
   analogWrite(motorControlFB, lowerTrigger);
   analogWrite(motorControlLR, midTrigger);
}

void turnBackwardLeft(){
  /*INSERT MOTOR CODE  
   * 
   */
   Serial.println("backward left");
   analogWrite(motorControlFB, higherTrigger);
   analogWrite(motorControlLR, lowerTrigger);
}

void turnBackwardRight(){
  /*INSERT MOTOR CODE  
   * 
   */
  Serial.println("backward right");
   analogWrite(motorControlFB, higherTrigger);
   analogWrite(motorControlLR, higherTrigger);
}


void goBackward(){
  /*INSERT MOTOR CODE  
   * 
   */
  Serial.println("backward");
   analogWrite(motorControlFB, higherTrigger);
   analogWrite(motorControlLR, midTrigger);

}
