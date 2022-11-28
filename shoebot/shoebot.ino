/*
USAGE:
Send any of the following through serial:
  * "lift!"
  * "lower!"
  * "push!"
  * "pull!"
  * "connect!"
  * "disconnect!"
*/

#include <Servo.h>

// Rollers
#define ROLLER_1_IN 1
#define ROLLER_1_OUT 2
#define ROLLER_1_SPD 3
#define ROLLER_2_IN 4
#define ROLLER_2_OUT 5
#define ROLLER_2_SPD 6

// Elevator
#define ELEVATOR_UP 7
#define ELEVATOR_DOWN 8
#define ELEVATOR_SPD 9
#define PEG_CONNECTOR 10

// Limit switches
#define TOP_LIMIT 11
#define BOTTOM_LIMIT 12

// Linear actuator
#define ACTUATOR 13

// Peg connector
Servo pegConnector;

void setup() {
  // Inputs
  pinMode(TOP_LIMIT, INPUT);
  pinMode(BOTTOM_LIMIT, INPUT);
  
  // Outputs
  pinMode(ROLLER_IN, OUTPUT);
  pinMode(ROLLER_OUT, OUTPUT);
  pinMode(ROLLER_SPD, OUTPUT);
  pinMode(ELEVATOR_UP, OUTPUT);
  pinMode(ELEVATOR_DOWN, OUTPUT);
  pinMode(ELEVATOR_SPD, OUTPUT);

  // Servo
  pegConnector.attach(PEG_CONNECTOR);

  Serial.begin(115200); // can delete when done with testing?
}

void loop() {
  if (Serial.available()) handleMessage(Serial.readStringUntil('!'));
}

void handleMessage(String message) {
    Serial.println(message);
  
    if (message == "lift") lift(true);
    if (message == "lower") lift(false);
    if (message == "push") intake(true);
    if (message == "pull") intake(false);
    if (message == "conn") peg(true);
    if (message == "disconn") peg(false);
}

void lift(bool up) {
    if (!digitalRead(up ? TOP_LIMIT : BOTTOM_LIMIT)) {
        digitalWrite(ELEVATOR_UP, up);
        digitalWrite(ELEVATOR_DOWN, !up);
        digitalWrite(ELEVATOR_SPD, 255);
    }
}

void intake(bool pull) {
    digitalWrite(ROLLER_1_IN, pull);
    digitalWrite(ROLLER_1_OUT, !pull);
    analogWrite(ROLLER_1_SPD, 255);

    digitalWrite(ROLLER_2_IN, pull);
    digitalWrite(ROLLER_2_OUT, !pull);
    analogWrite(ROLLER_2_SPD, 255);
}

void peg(bool conn) {
    pegConnector.write(conn ? 180 : 90);
}
