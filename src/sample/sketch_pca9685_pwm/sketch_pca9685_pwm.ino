#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define FREQUENCY 600

void setup() {
  Serial.begin(9600);
  Serial.println("16 channel Servo test!");
  pwm.begin();

  //  @brief  Sets the PWM frequency for the entire chip, up to ~1.6 KHz
  //  @param  freq Floating point frequency that we will attempt to match
  pwm.setPWMFreq(FREQUENCY);
}

void loop() {
  //  @brief  Sets the PWM output of one of the PCA9685 pins
  //  @param  num One of the PWM output pins, from 0 to 15
  //  @param  on At what point in the 4096 - part cycle to turn the PWM output ON
  //  @param  off At what point in the 4096 - part cycle to turn the PWM output OFF
  pwm.setPWM(0, 2000, 3200);
  delay(1000);
  pwm.setPWM(0, 2000, 2200);
  delay(1000);
}
