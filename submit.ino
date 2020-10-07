/*project_____Door Controlled System with card punch machine
Devolped by GM Rakibul Kabir, Hasan Mahamud Sagor , Majharul Islam
Devolped with Arduino_HC-SRO4_SRD-05vdc-sl-c

            TrigPin EchoPin   GND     VCC
            ------- -------   ---     ---
              13       12     GND     5v
 
*/
#include <Ultrasonic.h>

Ultrasonic ultrasonic1(13, 12);  // An ultrasonic sensor HC-04
Ultrasonic ultrasonic2(11,10);    // An ultrasonic sensor PING)))
Ultrasonic ultrasonic3(9,8);    // An Seeed Studio ultrasonic sensor
Ultrasonic ultrasonic4(7,6);    // An ultrasonic sensor PING)))
Ultrasonic ultrasonic5(5,4);    // An Seeed Studio ultrasonic sensor



void setup() {
  Serial.begin(9600);
  pinMode(14,OUTPUT);
}

void loop() {
  delay(10);
  Serial.print("Sensor 01: ");
  Serial.print(ultrasonic1.read(CM)); // Prints the distance on the default unit (centimeters)
  Serial.println("cm");
  Serial.print("Sensor 02: ");
  Serial.print(ultrasonic2.read(CM)); // Prints the distance making the unit explicit
  Serial.println("cm");

  Serial.print("Sensor 03: ");
  Serial.print(ultrasonic3.read(CM)); // Prints the distance in inches
  Serial.println("cm");
  
  Serial.print("Sensor 04: ");
  Serial.print(ultrasonic4.read(CM)); // Prints the distance making the unit explicit
  Serial.println("cm");

  Serial.print("Sensor 05: ");
  Serial.print(ultrasonic5.read(CM)); // Prints the distance in inches
  Serial.println("cm");
 
  if (ultrasonic1.read(CM)>=6 )
  
  {digitalWrite(14,LOW);
   delay(4000);
   
   }
   else if (ultrasonic2.read(CM)>=6 )
  
  {digitalWrite(14,LOW);
   delay(4000);
   }
  else if (ultrasonic3.read(CM)>=6 )
  
  {digitalWrite(14,LOW);
   delay(4000);
   }

   else if (ultrasonic4.read(CM)>=6 )
  
  {digitalWrite(14,LOW);
   delay(4000);
   }

   else if (ultrasonic5.read(CM)>=6 )
  
  {digitalWrite(14,LOW);
   delay(4000);
   }
  else
  {    digitalWrite(14,HIGH);
       delay(1000);
       }
}
