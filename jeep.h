#define retorno 6
#define encbtn 7

void setup_jtec071() // JTEC 71     2.5                      (071)  <-----  (yo) (5 DE DICIEMBRE 2020)
{
 jtec71:
             
              
                 for (int i=1; i<10; i++)
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
                     digitalWrite (10, LOW);
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

                  for (int i=1; i<7; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                   
                   }

                  for (int i=1; i<7; i++)
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
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);                     
                    }

                  for (int i=1; i<11; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                    }

                  for (int i=1; i<11; i++)
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
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
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

                 for (int i=1; i<7; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                    }

                 for (int i=1; i<12; i++)
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
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);                     
                    }

                  for (int i=1; i<12; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                    }
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }   
goto jtec71;
}


void setup_jtec073() // JTEC 73     4.7                      (073)
{
 jtec73:
              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);
  
              for (int i=1; i<4; i++)
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
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

             for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    }
       
             for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    }

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }
              for (int i=1; i<3; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, LOW);
                     delay (analogRead (0)/10);
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                    }
              for (int i=1; i<4; i++)
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
               digitalWrite (10, LOW);
               digitalWrite (11, HIGH);
               delay (analogRead (0)/10);
  
               digitalWrite (10, HIGH);
               digitalWrite (11, LOW);
               delay (analogRead (0)/10);
               digitalWrite (10, LOW);
               digitalWrite (11, LOW);
               delay (analogRead (0)/10);

               for (int i=1; i<4; i++)
                     {
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, LOW);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);
                     }

               for (int i=1; i<4; i++)
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

    if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         } 

              goto jtec73;

}


void setup_jtec074()  // JTEC 74     3.9, 5.2 Y 5.9           (074) 

{
 jtec74:
                  for (int i=1; i<3; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
    
                  for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                        }

                  digitalWrite (10, HIGH);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
                  digitalWrite (10, LOW);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
                  digitalWrite (10, HIGH);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
      
                  for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                         }
                       }

                  digitalWrite (10, HIGH);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
    
                  for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                        }

                  digitalWrite (10, HIGH);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
                  digitalWrite (10, LOW);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
                  digitalWrite (10, HIGH);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);

                  for (int i=1; i<4; i++)
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
       
                   for (int i=1; i<10; i++)
                         {
                          digitalWrite (10, LOW);
                          digitalWrite (11, LOW);
                          delay (analogRead (0)/10);
                         }
        
                  digitalWrite (10, HIGH);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);
                  digitalWrite (10, LOW);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);
                  digitalWrite (10, HIGH);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);

                  for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }

                  digitalWrite (10, HIGH);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10); 

                  for (int i=1; i<10; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }

                  digitalWrite (10, HIGH);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);
                  digitalWrite (10, LOW);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);
                  digitalWrite (10, HIGH);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);

                  for (int i=1; i<9; i++)
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }

                 digitalWrite (10, HIGH);
                 digitalWrite (11, LOW);
                 delay (analogRead (0)/10);
                 digitalWrite (10, LOW);
                 digitalWrite (11, LOW);
                 delay (analogRead (0)/10);
                 digitalWrite (10, HIGH);
                 digitalWrite (11, LOW);
                 delay (analogRead (0)/10);

                 for (int i=1; i<10; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);
                       }
        
                 digitalWrite (10, HIGH);
                 digitalWrite (11, LOW);
                 delay (analogRead (0)/10); 

                 for (int i=1; i<10; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);
                       }

     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }             
    goto jtec74; 
}    
void setup_jeep143() // JEEP PATRIOT 2008-2011  2.4 L 143
      {       
      jeep143:      
            for (int i=1; i<52; i++)
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);

             for (int i=1; i<7; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                      
                   }

             for (int i=1; i<52; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                      
                   }

                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
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
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }        
         goto jeep143;
      }

 void setup_jeep145() // JEEP GRAND CHEROKEE 2005 4.7 L 
      {       
    jeep145:    
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
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

        for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                                          
                   }

        for (int i=1; i<3; i++)
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
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
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

        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
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
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
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

        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);

         for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                      
                   }

        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
        delay (analogRead (0)/10);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
        delay (analogRead (0)/10);

        for (int i=1; i<6; i++)        
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
         goto jeep145;
      }
