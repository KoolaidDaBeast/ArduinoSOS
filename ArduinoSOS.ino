void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
  int led_pin = 13;

  //S
  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(1000);

  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(1000);


  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(1000);

  //O
  digitalWrite(led_pin, HIGH);
  delay(3000);
  digitalWrite(led_pin, LOW);
  delay(1000);

  digitalWrite(led_pin, HIGH);
  delay(3000);
  digitalWrite(led_pin, LOW);
  delay(1000);


  digitalWrite(led_pin, HIGH);
  delay(3000);
  digitalWrite(led_pin, LOW);
  delay(1000);

  //S
  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(1000);

  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(1000);


  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(1000);

}
