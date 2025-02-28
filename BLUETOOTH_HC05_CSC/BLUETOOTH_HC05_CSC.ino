

byte GetValue;
int pwm;

void setup() {      
  Serial.begin(19200);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Forward();
  Reverse();
  Left();
  Right();
  Front_light_on();
  Front_light_off();
  Back_light_on();
  Back_light_off();
  Horn_on();
  delay(500);
  All_stop();
}

byte ReadOneByte(){
  int ByteRead;
  while(!Serial.available());
  ByteRead = Serial.read();
  return ByteRead;
  }

void loop(){
   GetValue = ReadOneByte();   
   switch(GetValue){

          case 'F':  
          Forward();
          break;

          case 'L':
          Left();
          break;

          case 'R':
          Right();
          break;

          case 'B':
          Reverse();
          break;
              
          case 'S':                  
          Stop();
          break;

          case 'W':                  
          Front_light_on();
          break;

          case 'w':                  
          Front_light_off();
          break;

          case 'U':                  
          Back_light_on();
          break;

          case 'u':                  
          Back_light_off();
          break;

          case 'V':                  
          Horn_on();
          break;

          case 'v':                  
          Horn_off();
          break;

          case 'D':                  
          All_stop();
          break;

          case '0':                  
          pwm = 0;
          break;

          case '1':                  
          pwm = 50;
          break;

          case '2':                  
          pwm = 75;
          break;

          case '3':                  
          pwm = 100;
          break;

          case '4':                  
          pwm = 125;
          break;

          case '5':                  
          pwm = 150;
          break;

          case '6':                  
          pwm = 175;
          break;

          case '7':                  
          pwm = 175;
          break;

          case '8':                  
          pwm = 200;
          break;

          case '9':                  
          pwm = 225;
          break;

          case 'q':                  
          pwm = 255;
          break;
          }
}


void Forward(){
   analogWrite(3, pwm);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
  }
  
void Reverse(){
  analogWrite(3, pwm);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  }
  
void Left(){
  analogWrite(3, pwm);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  }
  
void Right(){
  analogWrite(3, pwm);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  }
  
void Stop(){
  analogWrite(3, pwm);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  }
  
void Horn_on(){
  digitalWrite(12, HIGH);
  }
  
void Horn_off(){
  digitalWrite(12, LOW);
}

void Front_light_on(){
  digitalWrite(10, LOW);
}

void Front_light_off(){
  digitalWrite(10, HIGH);
}

void Back_light_on(){
 digitalWrite(11, LOW);
}

void Back_light_off(){
  digitalWrite(11, HIGH);
  }
  
void All_stop(){
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}
  
 
