#define retorno 6

void setup_nissan040()

{
  nissan40:
           for (int i=1; i<9; i++)
                {
                  digitalWrite (10, HIGH);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
                  digitalWrite (10, LOW);
                  digitalWrite (11, HIGH);
                  delay (analogRead (0)/10);
                } 
  
            for (int i=1; i<83; i++)
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
                   for (int i=1; i<3; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10);
                         }   
                   for (int i=1; i<89; i++)
                       {
                       digitalWrite (10, HIGH);
                       digitalWrite (11, LOW);
                       delay (analogRead (0)/10);
                       digitalWrite (10, LOW);
                       digitalWrite (11, LOW);
                       delay (analogRead (0)/10);
                       }
                   }

     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
                 goto nissan40;

}

void setup_nissan041()
{
      nissan41:
             for (int i=1; i<6; i++)
                   {
                    digitalWrite (10, HIGH);
                    delay (analogRead (0)/10);
                   }
             for (int i=1; i<2; i++)
                   {
                    digitalWrite (10, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    delay (analogRead (0)/10);
                   }
              for (int i=1; i<6; i++)
                   {
                     digitalWrite (10, LOW);
                     delay (analogRead (0)/10);
                    }
              for (int i=1; i<4; i++)
                    {
  
                      for (int i=1; i<6; i++)
                            {
                             digitalWrite (10, HIGH);
                             delay (analogRead (0)/10);
                            }
                      for (int i=1; i<8; i++)
                            {
                             digitalWrite (10, LOW);
                             delay (analogRead (0)/10);
                            }
            }
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
            goto nissan41;
}


void setup_nissan042()
 
 {
  nissan42:       

          
          for (int i=1; i<14; i++)
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
            digitalWrite (10, HIGH);
            digitalWrite (11, HIGH);
            delay (analogRead (0)/10);
            digitalWrite (10, LOW);
            digitalWrite (11, HIGH);
            delay (analogRead (0)/10);
          }

                    
          for (int i=1; i<13; i++)
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
            digitalWrite (10, HIGH);
            digitalWrite (11, HIGH);
            delay (analogRead (0)/10);
            digitalWrite (10, LOW);
            digitalWrite (11, HIGH);
            delay (analogRead (0)/10);
          }

          for (int i=1; i<13; i++)
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
          digitalWrite (10, LOW);
          digitalWrite (11, HIGH);
          delay (analogRead (0)/10);

          digitalWrite (10, HIGH);
          digitalWrite (11, LOW);
          delay (analogRead (0)/10);
          digitalWrite (10, LOW);
          digitalWrite (11, LOW);
          delay (analogRead (0)/10);

             for (int i=1; i<14; i++)
          {
            digitalWrite (10, HIGH);
            digitalWrite (11, HIGH);
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
                              
          goto nissan42;

 }

void setup_nissan043()

{

nissan43:            
            for (int i=1; i<9; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   } 
  
            for (int i=1; i<53; i++)
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
                    for (int i=1; i<3; i++)
                          {
                           digitalWrite (10, HIGH);
                           digitalWrite (11, HIGH);
                           delay (analogRead (0)/10);
                           digitalWrite (10, LOW);
                           digitalWrite (11, HIGH);
                           delay (analogRead (0)/10);
                          } 
  
                     for (int i=1; i<59; i++)
                           {            
                            digitalWrite (10, HIGH);
                            digitalWrite (11, LOW);
                            delay (analogRead (0)/10);            
                            digitalWrite (10, LOW);
                            digitalWrite (11, LOW);
                           delay (analogRead (0)/10);
                           }
                  }
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
           goto nissan43;
}

void setup_nissan200()
{
nissan200:            
            digitalWrite (10, HIGH);
            digitalWrite (11, HIGH);
            delay (analogRead (0)/10);

             for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }            
            
            for (int i=1; i<16; i++)
                   {
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);

                        for (int i=1; i<5; i++)
                              {
                               digitalWrite (10, LOW);
                               digitalWrite (11, HIGH);
                               delay (analogRead (0)/10);
                             }

                        for (int i=1; i<5; i++)
                              {
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
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

            for (int i=1; i<11; i++)
                   {
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);

             for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<5; i++)
                   {
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 
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

            for (int i=1; i<8; i++)
                   {
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
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10); 

             for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<5; i++)
                   {
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

             for (int i=1; i<14; i++)
                   {
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

goto nissan200;

}  

void setup_nissan201()  // NISSAN PATHFINDER 2004          (002)  201

{

nissan201:            
         
             for (int i=1; i<7; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
                   {
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

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<7; i++)
                   {
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                    
                   }
                   
             for (int i=1; i<3; i++)
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
                   }

             for (int i=1; i<7; i++)
                   {
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

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<7; i++)
                   {
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                    
                   }
                   
             for (int i=1; i<3; i++)
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
                   }

             for (int i=1; i<7; i++)
                   {
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

             for (int i=1; i<10; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
                   {
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

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<7; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
                   {
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

             for (int i=1; i<10; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
                   {
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

             for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }
                   
    if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
goto nissan201;

}

void setup_nissan202() // NISSAN XTERRA 2006              (016)  202

{

nissan202:            
         
             for (int i=1; i<7; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
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
                   }

             for (int i=1; i<4; i++)
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

             for (int i=1; i<3; i++)
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
                   }

             for (int i=1; i<3; i++)
                   {
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

             for (int i=1; i<7; i++)
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
                   }

             for (int i=1; i<4; i++)
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

             for (int i=1; i<3; i++)
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
                   }

             for (int i=1; i<3; i++)
                   {
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

             for (int i=1; i<7; i++)
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
                   }

             for (int i=1; i<10; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
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
                   }

             for (int i=1; i<4; i++)
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

             for (int i=1; i<11; i++)
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
                   }

             for (int i=1; i<10; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

             for (int i=1; i<11; i++)
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

goto nissan202;

}  
