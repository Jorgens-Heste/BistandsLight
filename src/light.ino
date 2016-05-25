const int fieldoneport = 3;
const int fieldtwoport = 5;
const int fieldthreeport = 6;

int fieldonelight = 0;
int fieldtwolight = 0;
int fieldthreelight = 0;


void setup() {


  pinMode(fieldoneport, OUTPUT);
  pinMode(fieldtwoport, OUTPUT);
  pinMode(fieldthreeport, OUTPUT);

  Serial.begin(9600);

}


void loop() {
/*
int number;

  while (Serial.available() > 0) {
    number = Serial.parseInt();
  }

  manageLights(number);

  */

  lightup(fieldoneport, fieldonelight);



}


void manageLights(int number) {

  if(number != 0) {

    Serial.println(number);

    if(number == one()) { // Yearh i know but this was easier than trouvleshooting the error causing the strange numbers... We only hjave three values anyways

      digitalWrite(fieldoneport, HIGH);
      digitalWrite(fieldtwoport, LOW);
      digitalWrite(fieldthreeport, LOW);

      Serial.println("ONE ONE");

    } else if (number == two()) {

        digitalWrite(fieldoneport, LOW);
        digitalWrite(fieldtwoport, HIGH);
        digitalWrite(fieldthreeport, LOW);


            Serial.println("TWO TWO");

    } else {

      digitalWrite(fieldoneport, LOW);
      digitalWrite(fieldtwoport, LOW);
      digitalWrite(fieldthreeport, HIGH);

      //Serial.println("THREE THREE");


    }


}





}

int  one() {
  return 1;
}

int two() {
  return 2;
}

int  three() {
  return 3;
}





void lightup(int port, int lightvalue) {
  for(int i = 0; i <= 255; i ++) {
    analogWrite(port, i);
    delay(50);
  }

}

void stopLight() {
  for(int i = 255; i > 0; i--) {

    analogWrite(fieldoneport, fieldonelight);
    analogWrite(fieldtwoport, fieldtwolight);
    analogWrite(fieldthreeport, fieldthreelight);

    if(fieldonelight > 0) fieldonelight --;
    if(fieldonelight > 0) fieldonelight --;
    if(fieldonelight > 0) fieldonelight --;

    delay(100);

  }

}
