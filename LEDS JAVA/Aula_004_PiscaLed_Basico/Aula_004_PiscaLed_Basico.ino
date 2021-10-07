void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void seq1() {
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  delay(300);
  digitalWrite(7, LOW);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);

}

void seq2() {
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(5, HIGH);
  delay(300);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(300);
  digitalWrite(11, LOW);
  delay(300);
  digitalWrite(9, LOW);
  delay(300);
  digitalWrite(7, LOW);
  delay(300);
  digitalWrite(5, LOW);
  delay(300);
  digitalWrite(3, LOW);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);
}


void loop() {
  char serial = (char)Serial.read();
  if (serial == '1')
  {
    digitalWrite(13, HIGH);
  }
    if (serial == 'z')
  {
    digitalWrite(13, LOW);
  }
  if (serial == '2')
  {
    digitalWrite(11, HIGH);
  }
    if (serial == 'x')
  {
    digitalWrite(11, LOW);
  }
  if (serial == '3')
  {
    digitalWrite(9, HIGH);
  }
    if (serial == 'c')
  {
    digitalWrite(9, LOW);
  }
  if (serial == '4')
  {
    digitalWrite(7, HIGH);
  }
    if (serial == 'v')
  {
    digitalWrite(7, LOW);
  }
  if (serial == '5')
  {
    digitalWrite(5, HIGH);
  }
    if (serial == 'b')
  {
    digitalWrite(5, LOW);
  }
  if (serial == '6')
  {
    digitalWrite(3, HIGH);
  }
    if (serial == 'n')
  {
    digitalWrite(3, LOW);
  }
  if (serial == '7')
  {
    digitalWrite(2, HIGH);
  }
    if (serial == 'm')
  {
    digitalWrite(2, LOW);
  }
  if (serial == 'q')
  {
    seq1();
  }
  if (serial == 'w')
  {
    seq2();
  }

}
