int rojo = 13, amarillo = 12, verde = 11, azul = 10;
int rojo2 = 9, amarillo2 = 8, verde2 = 7, azul2 = 6;
int rojo3 = 5, amarillo3 = 4, verde3 = 3, azul3 = 2

void loop() {
  // --- SEMÁFORO 1 ACTIVO ---
  digitalWrite(rojo, LOW);    
  digitalWrite(verde, HIGH); 
  digitalWrite(rojo2, HIGH);  
  digitalWrite(rojo3, HIGH);
  delay(3000); 

  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH); 
  delay(1500);
  
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, HIGH);    
  digitalWrite(azul, HIGH);    
  delay(2500);
  digitalWrite(azul, LOW);

  // --- SEMÁFORO 2 ACTIVO ---
  digitalWrite(rojo2, LOW);  
  digitalWrite(verde2, HIGH);
  delay(3000);

  digitalWrite(verde2, LOW);
  digitalWrite(amarillo2, HIGH);
  delay(1500);

  digitalWrite(amarillo2, LOW);
  digitalWrite(rojo2, HIGH);   
  digitalWrite(azul2, HIGH);   
  delay(2500);
  digitalWrite(azul2, LOW);
}


