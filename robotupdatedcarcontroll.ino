int ls;
int cs;
int rs;
int lmt1 = 5;
int lmt2 = 3;
int rmt1 = 6;
int rmt2 = 11;
void setup() {
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(lmt1, OUTPUT);
  pinMode(lmt2, OUTPUT);
  pinMode(rmt1, OUTPUT);
  pinMode(rmt2, OUTPUT);
}

void loop() { 
  ls = digitalRead(7);
  cs = digitalRead(8);
  rs = digitalRead(9);
}

void forward()
 { 
 analogWrite(lmt1, 150);
 analogWrite(lmt2, 0);
 analogWrite(rmt1, 150);
 analogWrite(rmt2, 0);
 }
void backward()
{
 analogWrite(lmt1, 0);
 analogWrite(lmt2, 150);
 analogWrite(rmt1, 0);
 analogWrite(rmt2, 150); 
}
void right()
{
  analogWrite(lmt1, 150);
 analogWrite(lmt2, 0);
 analogWrite(rmt1, 0);
 analogWrite(rmt2, 150);
}
void left()
{
   analogWrite(lmt1, 0);
 analogWrite(lmt2, 150);
 analogWrite(rmt1, 150);
 analogWrite(rmt2, 0);
}
void stp()
{
 analogWrite(lmt1, 0);
 analogWrite(lmt2, 0);
 analogWrite(rmt1, 0);
 analogWrite(rmt2, 0);
}
void stpright()
{
 analogWrite(lmt1, 150);
 analogWrite(lmt2, 0);
 analogWrite(rmt1, 0);
 analogWrite(rmt2, 0);
}
void stpleft()
{
 analogWrite(lmt1, 0);
 analogWrite(lmt2, 0);
 analogWrite(rmt1, 150);
 analogWrite(rmt2, 0);
}

void loop() {
int sensor;
pinMode(8, INPUT);
int sensor2;
pinMode(11 , INPUT);
sensor = digitalRead(11);
if(sensor == HIGH)
{
  stpright();
}
sensor = digitalRead(8);
if(sensor == HIGH)
{
  stp();
}

else forward();
}
