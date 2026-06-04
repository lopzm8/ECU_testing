#define retorno 6

void setup_universal901()
{
    universal901:
                 for (int i=1; i<5; i++)
                       {
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);
                       }
                       
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

                    for (int i=1; i<9; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }

                    for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                        }

                    for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, HIGH);
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
        goto universal901;
}

void setup_universal902()

{
    universal902:
                                
                  for (int i=1; i<9; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }
                         
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
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

                  for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }
                        
                  for (int i=1; i<7; i++)
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

                    for (int i=1; i<10; i++)
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

                     for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);                         
                        }

                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);

                      for (int i=1; i<5; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);                         
                        }

                        
                      for (int i=1; i<5; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                        }                  
   if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
      goto universal902;
}  

void setup_universal903() // UNIVERSAL FONICA BAJA

{
    universal903:

                    for (int i=1; i<9; i++)
                    
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }

                        
                 for (int i=1; i<4; i++)
                 {
                     for (int i=1; i<7; i++)
                    
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                        }

                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);

                      for (int i=1; i<9; i++)
                    
                        {
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
                        }

                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                 }

                     for (int i=1; i<4; i++)
                    
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                        }

                      for (int i=1; i<9; i++)
                    
                        {
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
   if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
    goto universal903;
} 

void setup_universal904() // UNIVERSAL FONICA ALTA

{
    universal904:

                    for (int i=1; i<9; i++)
                    
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);                         
                        }

                  for (int i=1; i<4; i++)
                  {     

                     for (int i=1; i<7; i++)
                    
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
                  }

                        for (int i=1; i<4; i++)
                    
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

                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);                         
    if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
    goto universal904;
}  

void setup_universal905() // UNIVERSAL HALL MAGNETIC BAJA
{
    universal905:               
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);                       
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
      goto universal905;
} 

void setup_universal907() // UNIVERSAL 57+1 
{
    universal907:
                    for (int i=1; i<58; i++)
                       {
                         digitalWrite (10, HIGH);                       
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }

                     for (int i=1; i<4; i++)
                       {
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto universal907;
}

void setup_universal908() // UNIVERSAL 36+1
{
    universal908:
                    for (int i=1; i<37; i++)
                        {
                         digitalWrite (10, HIGH);                       
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                        }

                     for (int i=1; i<5; i++)
                       {
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto universal908;
}

void setup_universal909() // UNIVERSAL 24+1

{
    universal909:
                    for (int i=1; i<25; i++)
                        {
                         digitalWrite (10, HIGH);                       
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                        }

                     for (int i=1; i<5; i++)
                        {
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }
   if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
    goto universal909;
}

void setup_universal910() // UNIVERSAL 22+1
{
   universal910:
                    for (int i=1; i<23; i++)
                        {
                         digitalWrite (10, HIGH);                       
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                        }

                     for (int i=1; i<5; i++)
                       {
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto universal910;
}

void setup_universal911() // UNIVERSAL 4+1
{
    universal911:
                    for (int i=1; i<5; i++)
                        {
                         digitalWrite (10, HIGH);                       
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                        }

                     for (int i=1; i<4; i++)
                        {
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto universal911;
}

void setup_universal912() // UNIVERSAL 36-2
{
    universal912:
                    for (int i=1; i<35; i++)
                        {
                         digitalWrite (10, HIGH);                       
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                        }

                     for (int i=1; i<6; i++)
                       {
                         digitalWrite (10, LOW);                       
                         delay (analogRead (0)/10);
                       }
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto universal912;
}
