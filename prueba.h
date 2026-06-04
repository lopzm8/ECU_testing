#define retorno 6

void setup_555()

{
     programa555:        
               digitalWrite (10, HIGH);
               digitalWrite (11, HIGH);
               digitalWrite (12, HIGH);
               digitalWrite (13, HIGH);
               digitalWrite (30, HIGH);
               delay (analogRead (0)/10);
               
               digitalWrite (10, LOW);
               digitalWrite (11, LOW);
               digitalWrite (12, LOW);
               digitalWrite (13, LOW);
               digitalWrite (30, LOW);
               delay (analogRead (0)/10);

     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
     goto programa555; 
}
