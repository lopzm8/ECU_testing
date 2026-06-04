#define retorno 6

void setup_honda220() // HONDA CIVIC 2003 1.6 L  (220)
      {       
        honda220:  
              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);
              
              for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);                                    
                   }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

              for (int i=1; i<4; i++)
                    {
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
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);

                 for (int i=1; i<5; i++)
                    {
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);

                        for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, LOW);
                               delay (analogRead (0)/10);                      
                            }
                    }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

               for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, HIGH);
                               delay (analogRead (0)/10);                      
                            }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

               for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, LOW);
                               delay (analogRead (0)/10);                      
                            }

               for (int i=1; i<5; i++)
                    {
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);

                        for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, LOW);
                               delay (analogRead (0)/10);                      
                            }
                    }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

               for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, HIGH);
                               delay (analogRead (0)/10);                      
                            }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

              for (int i=1; i<4; i++)
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
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);

              for (int i=1; i<4; i++)
                    {
                      digitalWrite (10, LOW);
                      digitalWrite (11, LOW);
                      delay (analogRead (0)/10);

                        for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, LOW);
                               delay (analogRead (0)/10);                      
                            }
                    }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

               for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, HIGH);
                               delay (analogRead (0)/10);                      
                            }

              digitalWrite (10, LOW);
              digitalWrite (11, HIGH);
              delay (analogRead (0)/10);

              for (int i=1; i<4; i++)
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

                        for (int i=1; i<4; i++)
                            {
                               digitalWrite (10, HIGH);
                               digitalWrite (11, LOW);
                               delay (analogRead (0)/10);                      
                            }
                    }            
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
         goto honda220;
      }

void setup_honda221() // HONDA CIVIC 2003  2.0 L    (SR. Jesus) (221)
      {       
        honda221:  
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);
              digitalWrite (10, HIGH);
              digitalWrite (11, LOW);
              delay (analogRead (0)/10);
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
                                       } 

                              digitalWrite (10, LOW);
                              digitalWrite (11, HIGH);
                              delay (analogRead (0)/10); 

                              for (int i=1; i<4; i++)
                                       {
                                       digitalWrite (10, HIGH);
                                       digitalWrite (11, HIGH);
                                       delay (analogRead (0)/10);          
                                       }

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
               digitalWrite (10, HIGH);
               digitalWrite (11, HIGH);
               delay (analogRead (0)/10);                              
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL
         {
         loop();
         }
         goto honda221;
      }
      
