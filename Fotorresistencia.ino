//FOTOCELDA, OBTENCION DE NIVEL DE LUZ Y REALIZAR UNA ACCION HIGH AND LOW PARA LED
//MATERIAL
//1 resistencia de 1k Ohms
//1 resistencia de 220 Ohms
//placa NodeMCU ESP8266 V3
//Fotorresistencia
//1 Led
//Cables dupont macho

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(D1, OUTPUT);
  Serial.begin(115200);
  Serial.println("Trabajando con Fotorresistencia");
}

void loop() {
  // put your main code here, to run repeatedly:

  int valorLDR = analogRead(A0);


  Serial.println(valorLDR);
  //SI EL valorLDR ES MENOR IGUAL A 250 DE CLARIDAD, ENCIENDE LED
  //SINO APAGALO
  //if (valorLDR <= 250)
  //{
    //digitalWrite(D1, HIGH);
  //}
  //else
  //{
    //digitalWrite(D1, LOW);

  //}
  delay(200);

  analogWrite(D1, 256 - valorLDR/4);//nivel de voltaje para que encienda el led dependiendo de la luz 

}
