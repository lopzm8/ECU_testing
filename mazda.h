#define retorno 6

void setup_mazda250() // MAZDA 1990  2.6 L
      {       
           mazda250:  

              for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);                                    
                   }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);

                for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10); 
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);  
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);                                
                   }                             
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         } 
        goto mazda250;
      }
