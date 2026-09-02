// C++ code
//

int ledPin = 6;
int infra = 7;
bool estadoLed = false;


void setup(){
 pinMode(ledPin, OUTPUT);
 pinMode(infra, INPUT);
}

void loop(){
  if (digitalRead(infra) == HIGH){
    estadoLed = !estadoLed;
     digitalWrite(ledPin, estadoLed);
    delay(500);
}

}
