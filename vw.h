#define retorno 6

void setup_vw031()  // VW 68 terminales
{
     vw31:
               for (int i=1; i<5; i++)
                     {
                      digitalWrite (10, LOW);
                      delay (analogRead (0)/10);
                     }
                      for (int i=1; i<59; i++)
                            {
                             digitalWrite (10, HIGH);
                             delay (analogRead (0)/10);
                             digitalWrite (10, LOW);
                             delay (analogRead (0)/10);
                            }

     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
   goto vw31; 
}

void setup_vw300() //  VW COMPUTADORA MAGNETI MARELLI IAW 4LV
{
     vw300:
               for (int i=1; i<14; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<7; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }
                     
              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

               for (int i=1; i<8; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<23; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

              digitalWrite (10, HIGH);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

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
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);              
              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);
              
              digitalWrite (10, HIGH);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);              
              digitalWrite (10, HIGH);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);              
              digitalWrite (10, HIGH);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

                for (int i=1; i<20; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<25; i++)
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

               for (int i=1; i<6; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

              digitalWrite (10, HIGH);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);
              
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
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);
              
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);              
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);              
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
     goto vw300;
}  

void setup_vw301() //  VW JETTA TDI 2006     1.9 L  (301)
{
     vw301:
               for (int i=1; i<5; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<9; i++)
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

               for (int i=1; i<16; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }
                     
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

               for (int i=1; i<9; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

                     
               for (int i=1; i<5; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<16; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

               for (int i=1; i<7; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

               for (int i=1; i<7; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                     }
                     
               for (int i=1; i<16; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);

                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);

               for (int i=1; i<7; i++)
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

               for (int i=1; i<4; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     
               for (int i=1; i<4; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<15; i++)
                     {
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);

                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);                     
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
      goto vw301;
}
