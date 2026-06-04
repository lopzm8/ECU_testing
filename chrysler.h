#define retorno 6
#define encbtn 7 

void setup_sbec050() // SBEC 50    2.5                       (050)
      
      { 
       sbec50:
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
                       digitalWrite (11, LOW);
                       delay (analogRead (0)/10);
                      }

                 for (int i=1; i<4; i++)
                       {
                        digitalWrite (10, HIGH);
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
                        digitalWrite (11, HIGH);
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
                        }

                  for (int i=1; i<5; i++)
                        {
                         digitalWrite (10, HIGH);
                         digitalWrite (11, HIGH);
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
       goto sbec50;
      }

void setup_sbec052() // SBEC 52    3.3, 3.5 Y 3.8            (052)  <-----  PCM 65     3.3 Y 3.8                 (065)
{
  sbec52:
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

                 for (int i=1; i<5; i++)
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
                       digitalWrite (10, LOW);
                       digitalWrite (11, LOW);
                       delay (analogRead (0)/10);
                        }
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
      
                   for (int i=1; i<5; i++)
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
                             digitalWrite (10, LOW);
                             digitalWrite (11, LOW);
                             delay (analogRead (0)/10);
                             }

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
                        for (int i=1; i<5; i++)
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
                                digitalWrite (10, LOW);
                                digitalWrite (11, LOW);
                                delay (analogRead (0)/10);
                               }
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
                          for (int i=1; i<5; i++)
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
                                 digitalWrite (10, LOW);
                                 digitalWrite (11, LOW);
                                 delay (analogRead (0)/10);
                                 }
                           for (int i=1; i<14; i++)
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
                                   digitalWrite (10, LOW);
                                   digitalWrite (11, LOW);
                                   delay (analogRead (0)/10);
                                   }
                            for (int i=1; i<6; i++)
                                  {
                                   digitalWrite (10, LOW);
                                   digitalWrite (11, LOW);
                                   delay (analogRead (0)/10);
                                  }
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
               goto sbec52;
    }


void setup_pcm061() // SBEC 53    4.0                       (053)  <-----  PCM 61     2.5                       (061)
{
 pcm61:                
              for (int i=1; i<4; i++)
               {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
    
               for (int i=1; i<5; i++)
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
               }

               for (int i=1; i<4; i++)
                    {
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
                    }
   if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
                    
      goto pcm61; 
} 
  
void setup_sbec054()  // SBEC 54    3.9, 5.2 Y 5.9            (054)
{
sbec54:  
                 digitalWrite (10, LOW);
                 digitalWrite (11, HIGH);
                 delay (analogRead (0)/10);
                 digitalWrite (10, LOW);
                 digitalWrite (11, HIGH);
                 delay (analogRead (0)/10);
   
                 for (int i=1; i<8; i++)
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

                      digitalWrite (10, HIGH);
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

      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
     goto sbec54;    

}   

void setup_pcm060() // PCM 60     2.0 Y 2.4                 (060)

{
 pcm60:
                 for (int i=1; i<7; i++)
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
                        }

                   for (int i=1; i<9; i++)
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
                         }
                  for (int i=1; i<5; i++)
                        {
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
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);
                           digitalWrite (10, LOW);
                           digitalWrite (11, LOW);
                           delay (analogRead (0)/10);
                          }
                    for (int i=1; i<8; i++)
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
                   for (int i=1; i<9; i++)
                         {
                          digitalWrite (10, HIGH);
                          digitalWrite (11,LOW);
                          delay (analogRead (0)/10);
                         }
                      
                     digitalWrite (10,LOW);
                     digitalWrite (11, LOW);
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
                    for (int i=1; i<8; i++)
                          {
                          digitalWrite (10, LOW);
                          digitalWrite (11, LOW);
                          delay (analogRead (0)/10);
                          } 
        if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
                 goto pcm60;   
}      
         
void setup_pcm61()  // PCM 61     2.5                       (061)  ----->  SBEC (053), PCM(063), JTEC(072)
{
 pcm61:                
              for (int i=1; i<4; i++)
               {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
    
               for (int i=1; i<5; i++)
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
               }

               for (int i=1; i<4; i++)
                    {
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
                    }

    if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
      goto pcm61; 
}  

void setup_chry100()

{
chry100:
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

                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);

                  for (int i=1; i<6; i++)
                       {
                        digitalWrite (10, LOW);
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
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
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

                    for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);                      
                       }

                     for (int i=1; i<7; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);
                        digitalWrite (10, HIGH);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);                      
                       }

                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);

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
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);
                      digitalWrite (10, HIGH);
                      digitalWrite (11, HIGH);
                      delay (analogRead (0)/10);

                      
                    for (int i=1; i<13; i++)
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
                        digitalWrite (11, HIGH);
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

     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
                        
goto chry100;
}

void setup_chry102()
{
chry102:
                 for (int i=1; i<4; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);                                            
                       }

                 for (int i=1; i<10; i++)
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

                      for (int i=1; i<6; i++)
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

                 for (int i=1; i<4; i++)
                       {
                        digitalWrite (10, HIGH);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10); 

                      for (int i=1; i<6; i++)
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
                       }

                 for (int i=1; i<6; i++)
                       {
                        digitalWrite (10, HIGH);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10); 

                      for (int i=1; i<6; i++)
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
                        digitalWrite (11, LOW);
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

                      for (int i=1; i<6; i++)
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
                       }

                 for (int i=1; i<5; i++)
                       {
                        digitalWrite (10, HIGH);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10); 

                      for (int i=1; i<6; i++)
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
                          digitalWrite (10, LOW);
                          digitalWrite (11, LOW);
                          delay (analogRead (0)/10);
                       }

                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);

                 for (int i=1; i<6; i++)
                       {
                        digitalWrite (10, HIGH);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10); 

                      for (int i=1; i<6; i++)
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
                       digitalWrite (11, LOW);
                       delay (analogRead (0)/10);  
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }                    
goto chry102;
}

void setup_chry104()  // PACIFICA 2005 (104)
{
chry104:                
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
                digitalWrite (10, HIGH);
                digitalWrite (11, LOW);
                delay (analogRead (0)/10);
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

                
                for (int i=1; i<7; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, LOW);
                        delay (analogRead (0)/10);                                           
                       }

                for (int i=1; i<5; i++)
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
                digitalWrite (11, HIGH);
                delay (analogRead (0)/10);

               for (int i=1; i<13; i++)
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
goto chry104;
}

void setup_chry105()  // CHRYSLER 300C MOTOR HEMI 5.7L (NGC)  (105)
{
chry105:
            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);                                           
                       }

            for (int i=1; i<7; i++)
                       {
                        digitalWrite (10, LOW);
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
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
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

            for (int i=1; i<4; i++)
                       {
                        digitalWrite (10, LOW);
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
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);                                           
                       }

            for (int i=1; i<7; i++)
                       {
                        digitalWrite (10, LOW);
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
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
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

            for (int i=1; i<3; i++)
                       {
                        digitalWrite (10, LOW);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);  
                        digitalWrite (10, HIGH);
                        digitalWrite (11, HIGH);
                        delay (analogRead (0)/10);                                           
                       }

            for (int i=1; i<14; i++)
                       {
                        digitalWrite (10, LOW);
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
goto chry105;
}
  
