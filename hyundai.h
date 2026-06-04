#define retorno 6

void setup_hyundai240() // HYUNDAI ACCENT 2002 1.5 L  (240)
      {       
           hyundai240:  
              for (int i=1; i<8; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);                                    
                   }
                   
              for (int i=1; i<52; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);                                    
                   }

              for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                    }
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
         goto hyundai240;
      }   
      
 void setup_hyundai241() // HYUNDAI ELANTRA GLS  2002  2.0 L   (241)
      {      
        hyundai241:  
               for (int i=1; i<5; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                    }
              
              for (int i=1; i<8; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);                                    
                   }

                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

              for (int i=1; i<51; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
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

              for (int i=1; i<59; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);                                    
                   }                    
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
          goto hyundai241;
      }
      
void setup_hyundai242() // HYUNDAI     (JOSE M. SANCHEZ)   242 (5 DE DIEMBRE 2020)
      {       
       hyundai242:    
          for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

          for (int i=1; i<9; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

          for (int i=1; i<52; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                   
                   }

          for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

          for (int i=1; i<60; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                   
                   }   
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
      goto hyundai242;
      }
