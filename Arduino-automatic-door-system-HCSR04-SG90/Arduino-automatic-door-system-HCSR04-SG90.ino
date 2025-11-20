#include <Servo.h>

#define TRIG_PIN 8
#define ECHO_PIN 7
#define SERVO_PIN 9
#define LED_PIN 6
#define BUZZER_PIN 5

Servo motor;

float mesafeOku();

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  motor.attach(SERVO_PIN);
  motor.write(0);  // kapı kapalı
  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);
}

void loop() {
  float mesafe = mesafeOku();

  Serial.print("Mesafe: ");
  Serial.print(mesafe);
  Serial.println(" cm");

  if (mesafe > 0 && mesafe <= 100) {     // 1 METRE
    motor.write(90);                     // kapıyı aç
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 2000);
    delay(200);
    noTone(BUZZER_PIN);

    delay(5000);                         // 5 saniye açık kalsın

    motor.write(0);                      // kapıyı kapat
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    delay(1000);                         // tekrar açılmasın diye küçük bekleme
  }

  delay(50);
}

float mesafeOku() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long sure = pulseIn(ECHO_PIN, HIGH, 30000); // 30ms timeout

  if (sure == 0) return -1;

  float uzaklik = (sure * 0.0343) / 2.0;
  return uzaklik;
}
