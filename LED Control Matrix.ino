#include <SoftwareSerial.h> 
SoftwareSerial bta(0, 1); // RX | TX 
int ledno = 0;



//pins
int LED1 = 30;
int LED2 = 31;
int LED3 = 32;
int LED4 = 33;
int LED5 = 34;
int LED6 = 35;
int LED7 = 36;
int LED8 = 37;
int LED9 = 38;
int LED10 = 39;
int LED11 = 40;
int LED12 = 41;
int LED13 = 42;
int LED14 = 43;
int LED15 = 44;
int LED16 = 45;

int flag=0;//makes sure that the serial only prints once the state
 
void setup() 
{   
  Serial.begin(9600); 
  bta.begin(9600); 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(LED11, OUTPUT);
  pinMode(LED12, OUTPUT);
  pinMode(LED13, OUTPUT);
  pinMode(LED14, OUTPUT);
  pinMode(LED15, OUTPUT);
  pinMode(LED16, OUTPUT);

  digitalWrite (LED1,LOW);
  digitalWrite (LED2,LOW);
  digitalWrite (LED3,LOW);
  digitalWrite (LED4,LOW);
  digitalWrite (LED5,LOW);
  digitalWrite (LED6,LOW);
  digitalWrite (LED7,LOW);
  digitalWrite (LED8,LOW);
  digitalWrite (LED9,LOW);
  digitalWrite (LED10,LOW);
  digitalWrite (LED11,LOW);
  digitalWrite (LED12,LOW);
  digitalWrite (LED13,LOW);
  digitalWrite (LED14,LOW);
  digitalWrite (LED15,LOW);
  digitalWrite (LED16,LOW);
   
  Serial.println("Ready to connect\nDefualt password is 1234 or 000"); 
 
} 
void loop() 
{ 
  
  ///////////////////////////////////////////////////////////////////////////
  if (Serial.available()) {
    ledno = Serial.read(); 
    Serial.println(ledno); 
    flag = 0;
  }
  /////////////////////////////////////////////////////////////////////////////////

  
  if (ledno == '1') 
  { 
   if( digitalRead(LED1) == HIGH){
      digitalWrite (LED1, LOW);
    }

    else if(digitalRead(LED1) == LOW){
      digitalWrite (LED1, HIGH);
    }
    
    //digitalWrite (LED1, not digitalRead (LED1));
    if(flag ==0){
    Serial.println("LED 1 On");
    flag =1 ;
    }
    
  } 
  else if (ledno == '2') 
  { 
    digitalWrite (LED2, not digitalRead (LED2));
     if(flag ==0){
    Serial.println("LED 2 On");
    flag =1 ;
     }
  } 
   else if (ledno == '3') 
  { 
    digitalWrite (LED3, not digitalRead (LED3));
     if(flag ==0){
    Serial.println("LED 3 On");
    flag =1 ;
     }
  } 

  
   else if (ledno == '4') 
  { 
    digitalWrite (LED4, not digitalRead (LED4));
    if(flag ==0){
     Serial.println("LED 4 On");
    }
  } 
   else if (ledno == '5') 
  { 
    digitalWrite (LED5, not digitalRead (LED5));
    if(flag ==0){
      Serial.println("LED 5 On");
    }
  } 
   else if (ledno == '6') 
  { 
    digitalWrite (LED6, !digitalRead (LED6));
    if(flag ==0){
      Serial.println("LED 6 On");
    }
  }  
  //----------------------------
  
  else if (ledno == '7') 
  { 
    digitalWrite (LED7, !digitalRead (LED7));
    if(flag ==0){
      Serial.println("LED 7 On");
    }
  } 
   else if (ledno == '8') 
  { 
    digitalWrite (LED8, !digitalRead (LED8));
    if(flag ==0){
      Serial.println("LED 8 On");
    }
  } 
   else if (ledno == '9') 
  { 
    digitalWrite (LED9, !digitalRead (LED9));
    if(flag ==0){
      Serial.println("LED 9 On");
    }
  } 
   else if (ledno == 'A' ) 
  { 
    digitalWrite (LED10, !digitalRead (LED10));
    if(flag ==0){
      Serial.println("LED 10 On");
    }
  } 

  
  else if (ledno == 'B') 
  { 
    digitalWrite (LED11, !digitalRead (LED11));
    if(flag ==0){
     Serial.println("LED 11 On");
    }
  } 
  else if (ledno == 'C') 
  { 
    digitalWrite (LED12, !digitalRead (LED12));
    if(flag ==0){
      Serial.println("LED 12 On");
    }
  } 
  else if (ledno == 'D') 
  { 
    digitalWrite (LED13, !digitalRead (LED13));
    if(flag ==0){
      Serial.println("LED 13 On");
    }
  } 
  else if (ledno == 'E') 
  { 
    digitalWrite (LED14, !digitalRead (LED14));
    if(flag ==0){
     Serial.println("LED 10 On");
    }
  } 
  else if (ledno == 'F') 
  { 
    digitalWrite (LED15, !digitalRead (LED15));
    if(flag ==0){
     Serial.println("LED 15 On");
    }
  } 
  else if (ledno == 'G') 
  { 
    digitalWrite (LED16, !digitalRead (LED16));
    if(flag ==0){
      Serial.println("LED 16 On");
    }
  } 

  

  else if(ledno = 0){
     if(flag == 0){
     Serial.println("LED: off");
     flag=1;
     }
        
  }

  delay(100);

  
  
} 
