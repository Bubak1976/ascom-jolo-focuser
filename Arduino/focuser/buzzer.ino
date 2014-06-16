void initializeBuzzer() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BUZ_LED_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(BUZ_LED_PIN, LOW);
}  

void buzz(byte buzzTime, byte buzzCount) {
  if(BUZZER_ON) timer.oscillate(BUZZER_PIN, buzzTime, LOW, buzzCount);
  timer.oscillate(BUZ_LED_PIN, buzzTime, LOW, buzzCount);
}
