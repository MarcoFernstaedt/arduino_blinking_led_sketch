// initial setup to digital pin 13
void setup() {
    // iniialize port
    pinMode(13, OUTPUT);
}

// loop for blinking light
void loop() {
    // provides 5v of power
    digitalWrite(13, HIGH);
    // delays light turning off
    delay(150);
    // turns voltage down to 0v
    digitalWrite(13, LOW);
    // delays turning on
    delay(150);
}