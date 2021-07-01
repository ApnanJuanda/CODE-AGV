#define pwm1 3 // motor kiri forward
#define pwm2 5 // motor kiri revers
#define pwm3 6 // motor kanan forward
#define pwm4 9 // motor kanan revers
#define sensor1 2 //sensor paling kiri
#define sensor2 4 //sensor kedua paling kiri
#define sensor3 7 //sensor kedua paling kanan
#define sensor4 8 //sensor paling kanan
#define sensor5 12 //sensor tambahan

void setup() {
  // put your setup code here, to run once:
  pinMode (sensor1, INPUT);
  pinMode (sensor2, INPUT);
  pinMode (sensor3, INPUT);
  pinMode (sensor4, INPUT);
  pinMode (sensor5, INPUT)  ;
  pinMode (pwm1, OUTPUT);
  pinMode (pwm2, OUTPUT);
  pinMode (pwm3, OUTPUT);
  pinMode (pwm4, OUTPUT);
  Serial.begin(9600);
}

//   PWM 1 DAN 2 KANAN

void loop() {
  //maju jalur lebar  
   if ((digitalRead(sensor1) == HIGH && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == HIGH)){
   analogWrite(pwm1, 100);
   analogWrite(pwm2, 0);

   analogWrite(pwm3, 100);
   analogWrite(pwm4, 0);
    }

    else if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == LOW)){
    analogWrite(pwm1, 100);
    analogWrite(pwm2, 0);

    analogWrite(pwm3, 100);
    analogWrite(pwm4, 0);
    }

    else if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == LOW && digitalRead(sensor5) == LOW)){
    analogWrite(pwm1, 100);
    analogWrite(pwm2, 0);

    analogWrite(pwm3, 100);
    analogWrite(pwm4, 0);
    }

    else if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == LOW && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == LOW)){
    analogWrite(pwm1, 100);
    analogWrite(pwm2, 0);

    analogWrite(pwm3, 100);
    analogWrite(pwm4, 0);
    }
    
    
  //belok kiri 
   else if ((digitalRead(sensor1) == HIGH && digitalRead(sensor2) == LOW && digitalRead(sensor3) == LOW && digitalRead(sensor4) == LOW && digitalRead(sensor5) == LOW)){
   analogWrite(pwm1, 200);
   analogWrite(pwm2, 0);
   analogWrite(pwm3, 40);
   analogWrite(pwm4, 0); 
   }
   
   else if ((digitalRead(sensor1) == HIGH && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == LOW && digitalRead(sensor4) == LOW && digitalRead(sensor5) == LOW )){
   analogWrite(pwm1, 100);
   analogWrite(pwm2, 0);
   analogWrite(pwm3, 20);
   analogWrite(pwm4, 0);
   }
   
   else if ((digitalRead(sensor1) == HIGH && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == LOW && digitalRead(sensor5) == LOW)){
   analogWrite(pwm1, 50);
   analogWrite(pwm2, 0);
   analogWrite(pwm3, 10);
   analogWrite(pwm4, 0); 
   }

   else if ((digitalRead(sensor1) == HIGH && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == LOW)){
   analogWrite(pwm1, 25);
   analogWrite(pwm2, 0);
   analogWrite(pwm3, 5);
   analogWrite(pwm4, 0);
   }

  

 //belok kanan 
   else
   if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == LOW && digitalRead(sensor3) == LOW && digitalRead(sensor4) == LOW && digitalRead(sensor5) == HIGH)){
   analogWrite(pwm1, 40);
   analogWrite(pwm2, 0);
   analogWrite(pwm3, 200);
   analogWrite(pwm4, 0); 
    }
    
   else if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == LOW && digitalRead(sensor3) == LOW && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == HIGH)){
   analogWrite(pwm1, 20);
   analogWrite(pwm2, 0);

   analogWrite(pwm3, 100);
   analogWrite(pwm4, 0);  
   
    }

    else if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == LOW && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == HIGH)){
    analogWrite(pwm1, 10);
    analogWrite(pwm2, 0);

    analogWrite(pwm3, 50);
    analogWrite(pwm4, 0);
    }

    else if ((digitalRead(sensor1) == LOW && digitalRead(sensor2) == HIGH && digitalRead(sensor3) == HIGH && digitalRead(sensor4) == HIGH && digitalRead(sensor5) == HIGH)){
    analogWrite(pwm1, 5);
    analogWrite(pwm2, 0);

    analogWrite(pwm3, 25);
    analogWrite(pwm4, 0);
    }
  
    else{
   analogWrite(pwm1, 0);
   analogWrite(pwm2, 0);

   analogWrite(pwm3, 0);
   analogWrite(pwm4, 0);
   
    }

    

    


}
