/*
USAGE:
Send a byte through serial (XXXXXXXX):
  * Bit 0 (rightmost): lift elevator
  * Bit 1: lower elevator
  * Bit 2: push shoe
  * Bit 3: pull shoe
  * Bit 4: connect peg
  * Bit 5: release peg
  * Bit 6: lower actuator
  * Bit 7: lift actuator
*/

#include <Servo.h>

// Rollers
#define ROLLER_1_IN 2
#define ROLLER_1_OUT 56
#define ROLLER_1_SPD 57
#define ROLLER_2_IN 53
#define ROLLER_2_OUT 54
#define ROLLER_2_SPD 55

// Elevator
#define ELEVATOR_1_DIR 4
#define ELEVATOR_1_SPD 3
#define ELEVATOR_2_DIR 50
#define ELEVATOR_2_SPD 51
#define PEG_CONNECTOR 52

// Limit switches
#define TOP_LIMIT 14
#define BOTTOM_LIMIT 15

// Linear actuator
#define ACTUATOR_DOWN 7
#define ACTUATOR_UP 6
#define ACTUATOR_SPD 5

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
  pinMode(ELEVATOR_1_DIR, OUTPUT);
  pinMode(ELEVATOR_1_SPD, OUTPUT);
  pinMode(ELEVATOR_2_DIR, OUTPUT);
  pinMode(ELEVATOR_2_SPD, OUTPUT);
  pinMode(ACTUATOR_DOWN, OUTPUT);
  pinMode(ACTUATOR_UP, OUTPUT);
  pinMode(ACTUATOR_SPD, OUTPUT);

  // Servo
  pegConnector.attach(PEG_CONNECTOR);

  // Set speeds for motors
  analogWrite(ROLLER_1_SPD, 255);
  analogWrite(ROLLER_2_SPD, 255);
  analogWrite(ACTUATOR_SPD, 255);

  Serial.begin(115200);
}

void loop() {
  if (Serial.available()) handleMessage(Serial.read());
}

void handleMessage(byte message) {
    // lift
    if (bitRead(message, 0)) lift(1, 255);
    else if (bitRead(message, 1)) lift(0, 255);
    else lift(0, 0);

    // intake
    if (bitRead(message, 2)) intake(1, 0);
    else if (bitRead(message, 3)) intake(0, 1);
    else intake(0, 0);

    // peg
    if (bitRead(message, 4)) peg(1);
    else if (bitRead(message, 5)) peg(0);

    // linear actuator
    if (bitRead(message, 6)) actuate(1, 0);
    else if (bitRead(message, 7)) actuate(0, 1);
    else actuate(0, 0);
}

void lift(bool up, byte spd) {
    if (!digitalRead(up ? TOP_LIMIT : BOTTOM_LIMIT)) {
      analogWrite(ELEVATOR_1_SPD, spd);
      digitalWrite(ELEVATOR_1_DIR, up);
      
      analogWrite(ELEVATOR_2_SPD, spd);
      digitalWrite(ELEVATOR_2_DIR, up);
    }
}

void intake(bool pull, bool push) {
    digitalWrite(ROLLER_1_IN, pull);
    digitalWrite(ROLLER_1_OUT, push);

    digitalWrite(ROLLER_2_IN, pull);
    digitalWrite(ROLLER_2_OUT, push);
}

void peg(bool conn) {
    pegConnector.write(conn ? 180 : 90);
}

void actuate(bool prs, bool rls) {
  digitalWrite(ACTUATOR_DOWN, prs);
  digitalWrite(ACTUATOR_UP, rls);
}
