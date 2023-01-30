int trigPin = 13;
int echoPin = 12;
int led1 = 11,
    led2 = 10,
    led3 = 9,
    led4 = 8,
    led5 = 7,
    led6 = 6,
    led7 = 5,
    led8 = 4,
    led9 = 3,
    led10 = 2,
    inchesRead;
float cmRead;
long duration, cm, inches;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
}

void loop() {
  SensorRead();
  duration = pulseIn(echoPin,HIGH);
  cm = (duration/2)/29.1;
  inches = (duration/2)/74;
  
  Serial.print("INCHES COLLECTION");
  Serial.print("RAW:");
  Serial.print(inches);
  Serial.print(",DATA:");
  Serial.print(inchesRead);
  Serial.print("     ");
  Serial.print("CM COLLECTION");
  Serial.print("RAW:");
  Serial.print(cm);
  Serial.print(",DATA:");
  Serial.println(cmRead);
  
  if (inches < 11 || cm < 27.94){
    inchesRead = inches;
    cmRead = cm;
  }
  else{
    inchesRead = 11;
    cmRead = 27.94;
  }
  if(cmRead < 3.00){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    delay(50);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
  }
  if(inchesRead == 1 || cmRead == 2.54){
    digitalWrite(led1,HIGH);

    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 2 || cmRead == 5.08){
    digitalWrite(led2,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 3 || cmRead == 7.62){
    digitalWrite(led3,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 4 || cmRead == 10.16){
    digitalWrite(led4,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 5 || cmRead == 12.7){
    digitalWrite(led5,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(cmRead > 12.7 && cmRead < 15.24){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    delay(100);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    delay(100);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    delay(100);
    runn();
  }
  if(inchesRead == 6 || cmRead == 15.24){
    digitalWrite(led6,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 7 || cmRead == 17.78){
    digitalWrite(led7,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 8 || cmRead == 20.32){
    digitalWrite(led8,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 9 || cmRead == 22.86){
    digitalWrite(led9,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led10,LOW);
  }
  if(inchesRead == 10 || cmRead == 25.4){
    digitalWrite(led10,HIGH);

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
  }
  if(inchesRead > 10){
    runn();
  }
}

void SensorRead(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
}

void runn(){
  for (int i = 2; i <= 11; i++){ 
    if(i <= 11){
      digitalWrite(i,HIGH);
      delay(50);
      digitalWrite(i,LOW);
      delay(50);
    }
    else{i = 2;}
  }
}
