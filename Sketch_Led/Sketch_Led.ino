void setup() {
  // put your setup code here, to run once:



  //Red Led
  pinMode(3,OUTPUT);

  // Yellow Led
  pinMode(4,OUTPUT);

  //Green Led
  pinMode(5,OUTPUT);

  // Switchstate
  pinMode(2,INPUT);
}

void loop() {

   // Reading the switch state from pin 2
  int switchState = 0;
  
  // put your main code here, to run repeatedly:

  switchState = digitalRead(2);

  if (switchState == LOW)
  {
    // Button not pressed
    digitalWrite(3, HIGH);//Red Led

    digitalWrite(4, LOW);// Yellow Led

    digitalWrite(5, LOW);//Green Led 
    }
    

  else {
  
    // Button pressed
    digitalWrite(3, LOW);//Red Led

    digitalWrite(4, LOW);// Yellow Led

    digitalWrite(5, HIGH);//Green Led

    delay(250); // wait 250 ms

    digitalWrite(4, HIGH);// Yellow Led

    digitalWrite(5, LOW);//Green Led

    delay(250); // wait 250 ms
    
    }

}
