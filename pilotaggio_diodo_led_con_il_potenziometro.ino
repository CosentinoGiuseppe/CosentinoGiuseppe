void setup()
{
 Serial.begin(9600); //inizializzazione monitor seriale
 pinMode(13, OUTPUT);//settaggio del pin 13 come output

}

void loop()
{
  int V = analogRead(A0); //lettura del valore del potenziometro
  Serial.println(V);
  delay(1000);
  
  if (V<250) //se il valore del potenziometro è minore di 250
    {
    digitalWrite(13,LOW); //spegni led
    Serial.println("OFF");//scrivi sul monitor seriale la parola off
    }

  else if ((V<750) && (V>250)) //altrimenti se il valore del potenziometro è compreso tra 250 e 750
    {
    digitalWrite(13,HIGH); //accendi led
    delay(500); //aspetta 500 millisecondi
    digitalWrite(13,LOW); //spegni led
    delay(500); //aspetta 500 millisecondi
    Serial.println("BLINK");//scrivi sul monitor seriale la parola blink
    }
  
  else if(V>=750) //altrimenti se il valore del potenziometro è maggiore o uguale a 750
    {
    digitalWrite(13,HIGH); //accendi led
    Serial.println("ON"); //scrivi sul monitor seriale la parola on
    }
   
}
