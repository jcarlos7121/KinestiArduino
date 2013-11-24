// KinestiControl.ino
	
char cadena[10];
char caracter;
byte indice = 0;	

void setup() {
	Serial.begin(9600);
}

void loop() {
	while(Serial.available() > 0){
		if(indice < 7){
		    caracter = Serial.read();
		    cadena[indice] = caracter;
		    indice++;
		    cadena[indice] = '\0';
		}
		if(indice == 7){
		   Serial.println(cadena);

		   char primerd = cadena[1];
		   char segundod = cadena[2];
		   int parsed = primerd-48;
		   int parsedu = segundod-48;
		   int result = parsed * 10;
		   int final1 = result + parsedu;
			
		   char primerdt = cadena[4];
		   char segundot = cadena[5];
  		   int parset = primerdt-48;
		   int parsedt = segundot-48;
		   int resultt = parset * 10;
		   int final2 = resultt + parsedt;	   

		   Serial.println(final1);
		   Serial.println(final2);
		   indice = 0;
		}
	}
}

