void stopMotors(){
  /*INSERT MOTOR CODE  
   * 
   */
   Serial.println("motor stop");
}

void turnForwardLeft(){
  /*INSERT MOTOR CODE  
   * 1v
   */
   Serial.println("forward left");
   analogWrite(motorControlFB, pwm4v)
   analogWrite(motorControlLR, pwm1v)

}

void turnForwardRight(){
  /*INSERT MOTOR CODE  
   * 4v
   */
  Serial.println("forward right");

}


void goForward(){
  /*INSERT MOTOR CODE  
   * 2.38v
   */
  Serial.println("forward");

}

void turnBackwardLeft(){
  /*INSERT MOTOR CODE  
   * 
   */
   Serial.println("backward left");
}

void turnBackwardRight(){
  /*INSERT MOTOR CODE  
   * 
   */
  Serial.println("backward right");

}


void goBackward(){
  /*INSERT MOTOR CODE  
   * 
   */
  Serial.println("backward");

}
