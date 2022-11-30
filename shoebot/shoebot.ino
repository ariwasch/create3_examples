/*
USAGE:
Send any of the following through serial:
  * "lift!"
  * "lower!"
  * "push!"
  * "pull!"
  * "connect!"
  * "disconnect!"
  * "press!"
  * "release!"
  * "test!" (temorary - turns on LED)
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
#define ELEVATOR_1_UP 7
#define ELEVATOR_1_DOWN 8
#define ELEVATOR_1_SPD 9
#define ELEVATOR_2_UP 10
#define ELEVATOR_2_DOWN 11
#define ELEVATOR_2_SPD 12
#define PEG_CONNECTOR 14

// Limit switches
#define TOP_LIMIT 15
#define BOTTOM_LIMIT 16

// Linear actuator
#define ACTUATOR_DOWN 17
#define ACTUATOR_UP 18

// Peg connector
Servo pegConnector;

void setup() {
  // Inputs
  pinMode(TOP_LIMIT, INPUT);
  pinMode(BOTTOM_LIMIT, INPUT);
  
  // Outputs
  pinMode(ROLLER_1_IN, OUTPUT);
  pinMode(ROLLER_1_OUT, OUTPUT);
  pinMode(ROLLER_1_SPD, OUTPUT);
  pinMode(ROLLER_2_IN, OUTPUT);
  pinMode(ROLLER_2_OUT, OUTPUT);
  pinMode(ROLLER_2_SPD, OUTPUT);
  pinMode(ELEVATOR_1_UP, OUTPUT);
  pinMode(ELEVATOR_1_DOWN, OUTPUT);
  pinMode(ELEVATOR_1_SPD, OUTPUT);
  pinMode(ELEVATOR_2_UP, OUTPUT);
  pinMode(ELEVATOR_2_DOWN, OUTPUT);
  pinMode(ELEVATOR_2_SPD, OUTPUT);
  pinMode(ACTUATOR_DOWN, OUTPUT);
  pinMode(ACTUATOR_UP, OUTPUT);

  // Servo
  pegConnector.attach(PEG_CONNECTOR);

  Serial.begin(115200);
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
    if (message == "press") actuate(true);
    if (message == "release") actuate(false);
    if (message == "test") { // delete if successful
      digitalWrite(LED_BUILTIN, 1);
      delay(1000);
      digitalWrite(LED_BUILTIN, 0);
    }
}

void lift(bool up) {
    if (!digitalRead(up ? TOP_LIMIT : BOTTOM_LIMIT)) {
        digitalWrite(ELEVATOR_1_UP, up);
        digitalWrite(ELEVATOR_1_DOWN, !up);
        digitalWrite(ELEVATOR_1_SPD, 255);

        digitalWrite(ELEVATOR_2_UP, up);
        digitalWrite(ELEVATOR_2_DOWN, !up);
        digitalWrite(ELEVATOR_2_SPD, 255);
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

void actuate(bool down) {
  digitalWrite(ACTUATOR_DOWN, down);
  digitalWrite(ACTUATOR_UP, !down);
}
