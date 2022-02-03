#include <Arduino.h>
#include <MeAuriga.h>

MeBuzzer buzzer;

void setup()
{
  // put your setup code here, to run once:
  buzzer.setpin(45);

  // D4 (0.25 seconds) Hap
  buzzer.tone(294, 0.25 * 1000);
  // D4 (0.25 seconds) py
  buzzer.tone(294, 0.25 * 1000);
  // E4 (0.5 seconds) birth
  buzzer.tone(330, 0.5 * 1000);
  // D4 (0.5 seconds) day
  buzzer.tone(294, 0.5 * 1000);
  // G4 (0.5 seconds) to
  buzzer.tone(392, 0.5 * 1000);
  // F#4 (1.0) seconds) you
  buzzer.tone(370, 1.0 * 1000);

  // D4 (0.25 seconds) Hap
  buzzer.tone(294, 0.25 * 1000);
  // D4 (0.25 seconds) py
  buzzer.tone(294, 0.25 * 1000);
  // E4 (0.5 seconds) birth
  buzzer.tone(330, 0.5 * 1000);
  // D4 (0.5 seconds) day
  buzzer.tone(294, 0.5 * 1000);
  // A4 (0.5 seconds) to
  buzzer.tone(440, 0.5 * 1000);
  // G4 (1.0) seconds) you
  buzzer.tone(392, 1.0 * 1000);

  // D4 (0.25 seconds) Hap
  buzzer.tone(294, 0.25 * 1000);
  // D4 (0.25 seconds) py
  buzzer.tone(294, 0.25 * 1000);
  // D^5 (0.5 seconds) birth
  buzzer.tone(622, 0.5 * 1000);
  // B4 (0.5 seconds) day
  buzzer.tone(494, 0.5 * 1000);
  // G4 (0.5 seconds) to
  buzzer.tone(392, 0.5 * 1000);
  // F# (0.5) seconds) you
  buzzer.tone(370, 0.5 * 1000);
  // E4 (0.5 seconds) you
  buzzer.tone(330, 0.5 * 1000);

  // C5 (0.25 seconds) Hap
  buzzer.tone(523, 0.25 * 1000);
  // C5 (0.25 seconds) py
  buzzer.tone(523, 0.25 * 1000);
  // B4 (0.5 seconds) birth
  buzzer.tone(494, 0.5 * 1000);
  // G4 (0.5 seconds) day
  buzzer.tone(392, 0.5 * 1000);
  // A4 (0.5 seconds) to
  buzzer.tone(440, 0.5 * 1000);
  // G4 (1.0) seconds) you
  buzzer.tone(392, 1.0 * 1000);
}

void loop()
{
  // put your main code here, to run repeatedly:
}