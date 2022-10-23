int analogPin = 3;     // номер порта к которому подключен потенциометр
int val = 0;           // переменная для хранения считываемого значения
 
void setup()
{
pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);              //  установка связи по serial
}
 
void loop()
{
  if (analogRead(analogPin) > 1000 && val < 10) {
    Serial.println("done");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  val = analogRead(analogPin);     // считываем значение
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}
