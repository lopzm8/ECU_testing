#define retorno 6
#define encbtn 7
void setup_ngc080()  // NGC 80      2.0 Y 2.4                (080)

{
 ngc80:
                   for (int i=1; i<5; i++)
                         {
                          digitalWrite (10, LOW);
                          digitalWrite (11, HIGH);
                          delay (analogRead (0)/10);
                          digitalWrite (10, HIGH);
                          digitalWrite (11, HIGH);
                          delay (analogRead (0)/10);
                         }
                  digitalWrite (10, LOW);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);
   
                  for (int i=1; i<7; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                        }

                  digitalWrite (10, LOW);
                  digitalWrite (11, LOW);
                  delay (analogRead (0)/10);

                  for (int i=1; i<3; i++)
                        { 
                         for (int i=1; i<5; i++)
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
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);
                          }
                        }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);

                   for (int i=1; i<7; i++)
                         {
                          digitalWrite (10, LOW);
                          digitalWrite (11, HIGH);
                          delay (analogRead (0)/10);
                         }

                   for (int i=1; i<12; i++)
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

                  for (int i=1; i<5; i++)
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

                 for (int i=1; i<7; i++)
                       {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                       }

                digitalWrite (10, LOW);
                digitalWrite (11, HIGH);
                delay (analogRead (0)/10);
               
                for (int i=1; i<3; i++)
                      { 
                       for (int i=1; i<5; i++)
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
                     }
               digitalWrite (10, HIGH);
               digitalWrite (11, LOW);
               delay (analogRead (0)/10);
    
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
         goto ngc80;
}
void setup_dodge120()  // GRAND CARAVAN 2000-2005

      {       
      
       dodge120: 

             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);     
       
       for (int i=1; i<7; i++)
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
                     
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);                                      
                          }                                                          
                   }
                   
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

             for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                     
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);                                      
                          }                                                          
                   }

                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
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
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                     
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);                                      
                          }                                                          
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
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);

                    for (int i=1; i<7; i++)
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
                     
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);                                      
                          }                                                          
                   }

                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

             for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
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
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                     
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);                                      
                          }                                                          
                   }

              for (int i=1; i<10; i++)
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
                     
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);                                      
                          }                                                          
                   }

                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10); 
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto dodge120;
      }
      
void setup_dodge121() // INTREPID 2002 3.5 L - CHARGER 2006 3.5L 
      {       
        dodge121: 
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

             for (int i=1; i<6; i++)
                   {
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
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);

             for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 

                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10); 
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
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
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);
                   
                   digitalWrite (10, HIGH);
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);

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
                    digitalWrite (11, HIGH);
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

             for (int i=1; i<3; i++)
                   {
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
                   }

             for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10); 
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                      
                   }

             for (int i=1; i<6; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                                         
                   }

             for (int i=1; i<3; i++)
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 

             for (int i=1; i<12; i++)
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
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);

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
                    digitalWrite (11, HIGH);
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
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
         goto dodge121;
      }
void setup_dodge123() // DODGE NEON 2000  2.0L (123)
{       
        dodge123: 
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
                 
      for (int i=1; i<7; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10); 
            } 

      for (int i=1; i<5; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

            digitalWrite (10, LOW);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10);   

      for (int i=1; i<3; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }
            
            digitalWrite (10, LOW);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10);

      for (int i=1; i<4; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 

      for (int i=1; i<3; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 

      for (int i=1; i<6; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
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

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);
              
             for (int i=1; i<7; i++)
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
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);

      for (int i=1; i<3; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10); 
              digitalWrite (10, LOW);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);

      for (int i=1; i<5; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

            digitalWrite (10, LOW);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10);

      for (int i=1; i<3; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
            }

            digitalWrite (10, LOW);
            digitalWrite (11, LOW);
            delay (analogRead (0)/10);

      for (int i=1; i<6; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);            
                   }
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
 
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
       goto dodge123;
      }   

 void setup_dodge124()   // DODGE DAKOTA 4.7 L Y 5.8 L  DODGE DURANGO 4.7 L  (124)
      {       
        dodge124: 
                    digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
                 
      for (int i=1; i<3; i++)
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
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);           
            } 

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);             
             delay (analogRead (0)/10);
             
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10); 

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

      for (int i=1; i<3; i++)
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

      for (int i=1; i<3; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);             
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10); 

             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
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

      for (int i=1; i<3; i++)
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
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

             
      for (int i=1; i<8; i++)
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
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);             
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);

             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10); 
             
             digitalWrite (10, HIGH);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

      for (int i=1; i<4; i++)
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

             digitalWrite (10, HIGH);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10); 

      for (int i=1; i<4; i++)
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
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
        goto dodge124;
      }

 void setup_dodge125() // DODGE RAM 1500 (2003-2008) 3.7 Y 4.7 L
      {       
             dodge125: 
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

             digitalWrite (10, HIGH);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

      for (int i=1; i<5; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
            }

      for (int i=1; i<6; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
            }

      for (int i=1; i<4; i++)
            {
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
            }

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
             digitalWrite (11, HIGH);
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

             digitalWrite (10, LOW);
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);

             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);             
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
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

      for (int i=1; i<7; i++)
            {
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
            }

      for (int i=1; i<6; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
            }

      for (int i=1; i<4; i++)
            {
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
            }

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
             digitalWrite (11, HIGH);
             delay (analogRead (0)/10);
             
             digitalWrite (10, HIGH);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
             
      for (int i=1; i<7; i++)
            {
             digitalWrite (10, LOW);
             digitalWrite (11, LOW);
             delay (analogRead (0)/10);
            }

      for (int i=1; i<6; i++)
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
        goto dodge125;
      }
