#define retorno 6

void setup_mitsubishi260() // MITSUBISHI LANCER 2006  2.0 L  (260)
     {       
       mitsubishi260:  
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         } 
            digitalWrite (10, HIGH);
            digitalWrite (11, HIGH);
            delay (analogRead (0)/10);    
            digitalWrite (10, HIGH);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10); 
            digitalWrite (10, HIGH);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10);             
       
       for (int i=1; i<6; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                                          
                   }

                   
        for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                                          
                   }

            digitalWrite (10, HIGH);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10);

        for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<6; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                                          
                   }
   if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }                       
         goto mitsubishi260;
      }
