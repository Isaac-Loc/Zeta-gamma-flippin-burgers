const int pinLaser = 14; // output signal pin of laser module/laser pointer
const int pinRececiver = 18; // input signal pin of receiver/detector (the used module does only return a digital state)


const int pinLaser2 = 15;
const int pinReceiver2 = 19;


const int pinLaser3 = 16;
const int pinReceiver3 = 20;


const int pinLaser4 = 17;
const int pinReceiver4 = 21;


void setup() {
  pinMode(pinLaser, OUTPUT); // set the laser pin to output mode
  pinMode(pinReceiver, INPUT); // set the laser pin to output mode
  digitalWrite(pinLaser, HIGH); // emit red laser


  pinMode(pinLaser2, OUTPUT); // set the laser pin to output mode
  pinMode(pinReceiver2, INPUT); // set the laser pin to output mode
  digitalWrite(pinLaser2, HIGH);// emit red laser


  pinMode(pinLaser3, OUTPUT); // set the laser pin to output mode
  pinMode(pinReceiver3, INPUT); // set the laser pin to output mode
  digitalWrite(pinLaser3, HIGH);// emit red laser

  
  pinMode(pinLaser4, OUTPUT); // set the laser pin to output mode
  pinMode(pinReceiver4, INPUT); // set the laser pin to output mode
  digitalWrite(pinLaser4, HIGH);// emit red laser

  
  Serial.begin(9600); // Setup serial connection for print out to console
}


void loop() {
  int value = digitalRead(pinReceiver); // receiver/detector send either LOW or HIGH (no analog values!)
  int value2 = digitalRead(pinReceiver2); // receiver/detector send either LOW or HIGH (no analog values!)
  int value3 = digitalRead(pinReceiver3); // receiver/detector send either LOW or HIGH (no analog values!)
  int value4 = digitalRead(pinReceiver4); // receiver/detector send either LOW or HIGH (no analog values!)
  Serial.print(value); // send value to console
  Serial.print(value2);
  Serial.println(value3);
  Serial.println(value4);
  delay(1000); // wait for 1000ms
}

