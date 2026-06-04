#define retorno 6
#define encbtn 7

void setup_superduty(){ // inicia FORD SUPER DUTY 5.4L

superduty54:

               digitalWrite (10, HIGH);                    
               delay (analogRead (0)/10); 
               digitalWrite (10, HIGH);                    
               delay (analogRead (0)/10); 
               digitalWrite (10, HIGH);                    
               delay (analogRead (0)/10); 
               digitalWrite (10, LOW);                    
               delay (analogRead (0)/10);       
              
              for (int i=1; i<61; i++)
                    {
                     digitalWrite (10, HIGH);                    
                     delay (analogRead (0)/10);  
                     digitalWrite (10, LOW);                    
                     delay (analogRead (0)/10);                                   
                   } 
        
        if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }

goto superduty54;
  
} // Termina FORD SUPER DUTY 5.4L


void setup_60cav(){
cav60:
        digitalWrite (10, HIGH);  
        delay (analogRead (0)/10);  
        digitalWrite (10, LOW);
        delay (analogRead (0)/10);
        
         if (digitalRead(retorno) == 0)
         {
         loop();
         }
goto cav60;
  
  }

void setup_104cav(){

cav104:
  for (int i=1; i<11; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                    }

              for (int i=1; i<5; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
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
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                    }
  if (digitalRead(retorno) == 0){
  loop();
      }
  goto cav104;

  }
