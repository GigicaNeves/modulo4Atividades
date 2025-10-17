// C++ code
//

//OBS: Testando diferentes formas de declarar entradas/saídas

int LED_YELLOW = 12;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(LED_YELLOW, HIGH);
  delay(200);
  digitalWrite(LED_YELLOW, LOW);
  delay(200);
  
  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(7, LOW);
  delay(300);
}