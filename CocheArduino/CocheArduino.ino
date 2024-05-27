void ini_crystalino()
{
  pinMode(MDER_1, OUTPUT);
  pinMode(MDER_2, OUTPUT);
  pinMode(MIZQ_1, OUTPUT);
  pinMode(MIZQ_2, OUTPUT);

  digitalWrite(MDER_1,LOW);
  digitalWrite(MDER_2,LOW);
  digitalWrite(MIZQ_1,LOW);
  digitalWrite(MIZQ_2,LOW);
}