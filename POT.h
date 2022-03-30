class Encender{
  private:
  int LED;
  int porcent;
  
  public:

  void Modo(int LED){
    pinMode(LED,OUTPUT);
  }

  void Encendido(int LED){
    int valor = analogRead(A0), valor2 = analogRead(A0);
    porcent = map(valor,0,1023,0,100);
    float volt = valor2 * (5.0/1023.0);
    Serial.println(volt);
    
    if(porcent>=50 && porcent<=99){
    digitalWrite(13,HIGH);
    }else{
    digitalWrite(13,LOW);
    }
    delay(200);
    
  if(porcent==100){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    }
  }
};
