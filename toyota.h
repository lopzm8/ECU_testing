#define retorno 6

void setup_toyota280() // TOYOTA 1.5, 1.8, 2.4, 2.7, 3.5 Y 4.0 L
{
 toyota280:

       for (int i=1; i<6; i++)
         {
          digitalWrite (10, LOW);
          digitalWrite (11, HIGH);
          delay (analogRead (0)/10);       
         }
                    
       for (int i=1; i<58; i++)
         {
          digitalWrite (10, HIGH);
          digitalWrite (11, LOW);
          delay (analogRead (0)/10);
          digitalWrite (10, LOW);
          digitalWrite (11, HIGH);
          delay (analogRead (0)/10);                      
          }
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
 goto toyota280;
}
