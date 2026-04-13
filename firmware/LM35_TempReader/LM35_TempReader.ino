/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Mon: Mang Cam Bien - Tuan 03
 * Cap nhat: Ho tro 2 kenh (A0, A1) - Dinh dang CSV
 */

int adcValue1, adcValue2;
float nhietDo1, nhietDo2;

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Doc cam bien 1 (Chan A0)
  adcValue1 = analogRead(A0);
  nhietDo1 = (adcValue1 * 500.0) / 1023.0;

  // Doc cam bien 2 (Chan A1)
  adcValue2 = analogRead(A1);
  nhietDo2 = (adcValue2 * 500.0) / 1023.0;

  // Gui du lieu dang CSV: nhietDo1,nhietDo2
  Serial.print(nhietDo1, 1);
  Serial.print(",");
  Serial.println(nhietDo2, 1);

  delay(1000);
}
