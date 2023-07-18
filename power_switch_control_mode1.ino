// C++ code
//

int red=10;
int yellow=9;
int green=8;
int button=12;
int Reading=0;
int counter=0;
void setup()
{
 digitalWrite(red,OUTPUT);
   digitalWrite(yellow,OUTPUT);
 digitalWrite(green,OUTPUT);
 digitalRead(button);

  
}

void loop()
{ Reading=digitalRead(button);
 counter++;
 if(Reading==HIGH)
 {if(counter==1)
 {digitalWrite(red,HIGH);delay(500);}
   else if(counter==2)
  {digitalWrite(yellow,HIGH);delay(500);}
   else(counter==3);
  {digitalWrite(green,HIGH);delay(500);}}
               else{ digitalWrite(red,LOW);
                    digitalWrite(yellow,LOW);
                    digitalWrite(green,LOW);counter=0;}
               }



    
  