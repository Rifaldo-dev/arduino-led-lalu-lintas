#define LED_MERAH  13
#define LED_KUNING 12
#define LED_HIJAU  7
#define BUZZER     4

void beepPendek() {
  digitalWrite(BUZZER, HIGH);
  delay(200);              // bunyi pendek
  digitalWrite(BUZZER, LOW);
}

void setup() {
  pinMode(LED_MERAH, OUTPUT);
  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_HIJAU, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // MERAH
  digitalWrite(LED_MERAH, HIGH);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, LOW);
  delay(5000);

  // KUNING (beep 1x)
  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, HIGH);
  digitalWrite(LED_HIJAU, LOW);
  beepPendek();
  delay(2000);

  // HIJAU
  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, HIGH);
  delay(5000);

  // KUNING lagi (beep 1x)
  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, HIGH);
  digitalWrite(LED_HIJAU, LOW);
  beepPendek();
  delay(2000);
}
