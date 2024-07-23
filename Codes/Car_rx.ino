#include <RH_ASK.h>
#include<Servotimer2
#include<Servo.h>
//#include <RCSwitch.h>
Servo s1;


#include <SPI.h> // Not actualy used but needed to compile

int r1 = 8;
int r2 = 9;
int l1 = 10;
int l2 = 7;
int trigPin = 41;
int echoPin = 40;
void front();

 
void left();
void right();
void back();
void stopp();
RH_ASK driver;

void setup()
{
  Serial.begin(9600);
  s1.attach(2);
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //pinMode(13,1);
  pinMode(r1, OUTPUT);  //right motors forward
  pinMode(r2, OUTPUT);  //right motors reverse
  pinMode(l1, OUTPUT);  //left motors forward
  pinMode(l2, OUTPUT);  //left motors reverse
  Serial.begin(9600);  // Debugging only
  if (!driver.init())
    Serial.println("init failed");
}

void loop()
{
  uint8_t buf[12];
  uint8_t buflen = sizeof(buf);
  String x = "";
  String y = "Turn LED OFF";
  long duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
  if (driver.recv(buf, &buflen)) // Non-blocking
  {
    int i;
    // Message with a good checksum received, dump it.
    //Serial.println("Message: ");
    /* x=((String)(char*)buf);
      x.trim();
      Serial.println(x+ " :"+x.length());   */
    //Serial.println(buf);
    char m = buf[0];
    Serial.println(m);
    if (m == 'F')
    {
      front(distance);
    }
    else if (m == 'B')
    {
      back(distance);

    }
    else if (m == 'L')
    {
      left(distance);
    }
    else if (m == 'R')
    {
      right(distance);
    }
    else
    {
      stopp();
    }

  }
}

void front(long distance)
{
  //FRONT
  digitalWrite(r2, HIGH);
  digitalWrite(l1, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(l2, LOW);
  Serial.println("Front ");
  if ((distance <= 10))
  {
    stopp();
  }

}
void back(long distance)
{
  //BACK
  digitalWrite(r1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(r2, LOW);
  digitalWrite(l1, LOW);
  Serial.println("Back ");

}
void left(long distance)
{
  //LEFT
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(r1, LOW);
  Serial.println("LEFT ");
  if ((distance <= 10))
  {
    stopp();
  }
}
void right(long distance)
{
  //RIGHT
  digitalWrite(r2, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  Serial.println("Right ");
  if ((distance <= 10))
  {
    stopp();
  }
}
void stopp()
{
  //STOPP
  digitalWrite(r2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  s1.write(95);
  delay(15);
  s1.write(0);
  Serial.println("Stop ");
}
