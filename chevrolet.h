#define retorno 6
#define encbtn 7

void setup_chevytbi()

{
  chevytbi16:             
             
              for (int i=1; i<8; i++)
               {
               digitalWrite (10, LOW);                    
               delay (analogRead (0)/10); 
               }
               
               digitalWrite (10, HIGH);                    
               delay (analogRead (0)/10);

              for (int i=1; i<5; i++)
               {
               digitalWrite (10, LOW);                    
               delay (analogRead (0)/10); 
               }
               
              for (int i=1; i<6; i++)
               {
               digitalWrite (10, HIGH);                    
               delay (analogRead (0)/10); 
               }

              for (int i=1; i<25; i++)
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

  goto chevytbi16;
}


void setup_chevrolet021()
    
   { 
    chevrolet21:
           for (int i=1; i<17; i++)
                {
                 digitalWrite (10, HIGH);
                 delay (analogRead (0)/10);
                }
           for (int i=1; i<17; i++)
                {
                 digitalWrite (10, LOW);
                 delay (analogRead (0)/10);
                 } 

     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
    goto chevrolet21;
    
  }
  void setup_chevrolet180() //CHEVROLET CHEVY 2000   (180)
  { 
    chevrolet180:
           for (int i=1; i<4; i++)
                {
                 digitalWrite (10, LOW);
                 delay (analogRead (0)/10);
                }
           for (int i=1; i<4; i++)
                {
                 digitalWrite (10, HIGH);
                 delay (analogRead (0)/10);
                 } 

           for (int i=1; i<58; i++)
                {
                 digitalWrite (10, LOW);
                 delay (analogRead (0)/10);
                 digitalWrite (10, HIGH);
                 delay (analogRead (0)/10);
                 }
    if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }          
    goto chevrolet180;
   }

void setup_chevrolet181() //CHEVROLET CAVALIER 1998 2.2 L
      {       
        chevrolet181:  

              for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);                                    
                   }

              for (int i=1; i<3; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     
                    for (int i=1; i<6; i++)
                      {
                       digitalWrite (10, LOW);
                       digitalWrite (11, HIGH);
                       delay (analogRead (0)/10);                     
                      }
                    }

                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10); 
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10); 
                     
               for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, HIGH);
                     digitalWrite (11, HIGH);
                     delay (analogRead (0)/10);
                     
                    for (int i=1; i<6; i++)
                      {
                       digitalWrite (10, LOW);
                       digitalWrite (11, HIGH);
                       delay (analogRead (0)/10);                     
                      }
                    }
                    
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
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         } 
        goto chevrolet181;
      }

void setup_chevrolet182() // CHEVROLET MONTECARLO 1999 3.8 L  (182)
      {       
     chevrolet182:  
              for (int i=1; i<4; i++)
                    {
                     digitalWrite (10, LOW);
                     digitalWrite (11, HIGH);
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

                    for (int i=1; i<6; i++)
                         {
                         digitalWrite (10, LOW);
                         digitalWrite (11, LOW);
                         delay (analogRead (0)/10);
                         }                    
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
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         } 
       goto chevrolet182;
      } 

void setup_chevrolet183()  // CHEVROLET TRAILBLAZER LS 4.2 L  (183)
     {       
          chevrolet183:  
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
                    
                    for (int i=1; i<5; i++)
                    
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                        }
                        
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10); 

                    for (int i=1; i<6; i++)
                    
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                        }                                                      
                   }

               digitalWrite (10, HIGH);
               digitalWrite (11, LOW);
               delay (analogRead (0)/10);
               digitalWrite (10, LOW);
               digitalWrite (11, LOW);
               delay (analogRead (0)/10); 
               digitalWrite (10, HIGH);
               digitalWrite (11, HIGH);
               delay (analogRead (0)/10); 

                    for (int i=1; i<6; i++)
                    
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                        }

                digitalWrite (10, HIGH);
                digitalWrite (11, LOW);
                delay (analogRead (0)/10);  

                        for (int i=1; i<6; i++)
                    
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
                        }

                      for (int i=1; i<3; i++)
                    
                        {
                         digitalWrite (10, LOW);
                         digitalWrite (11, HIGH);
                         delay (analogRead (0)/10); 
                        }

                digitalWrite (10, HIGH);
                digitalWrite (11, LOW);
                delay (analogRead (0)/10); 

                       for (int i=1; i<6; i++)
                    
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
                        }

                     for (int i=1; i<3; i++)
                    
                        {
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

                  for (int i=1; i<6; i++)
                    
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
                        }                  
if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
       goto chevrolet183;
      }

void setup_chevrolet184() // CHEVROLET AVEO 2004  1.4 L  (184)
      {       
       chevrolet184:           
              for (int i=1; i<32; i++)
                   {
                    digitalWrite (10, HIGH);
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

               for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

                for (int i=1; i<28; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

                for (int i=1; i<32; i++)
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

                for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

                for (int i=1; i<28; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }                   
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
       goto chevrolet184;
      }
      
void setup_chevrolet185() // CHEVROLET OPTRA 2004  1.8 L  (185)
      {       
       chevrolet185:           
              for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

               for (int i=1; i<54; i++)
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }

                for (int i=1; i<81; i++)
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

                for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);  
                   }                
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
        goto chevrolet185;
      }

void setup_chevrolet186() // CHEVROLET CLASSIC 2004  1.4  Y 2.2 L  (186)
      {       
       chevrolet186:           
              for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
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
                   }

               for (int i=1; i<5; i++)
                   {
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
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                   
                   }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);

                for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                   
                   }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, HIGH);
                   delay (analogRead (0)/10);

                 for (int i=1; i<6; i++)
                   {
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

                 for (int i=1; i<5; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

                 for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

                 for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

                  for (int i=1; i<6; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }
                   
                   digitalWrite (10, HIGH);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

                  for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

                   digitalWrite (10, HIGH);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);                  
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
        goto chevrolet186;
      }

void setup_chevrolet187() // CHEVROLET COLORADO 2005  2.8  Y 3.5 L  (187)
      {       
   chevrolet187:            
              for (int i=1; i<31; i++)
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

         for (int i=1; i<61; i++)
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

          for (int i=1; i<31; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                   
                   }
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
         goto chevrolet187;
      } 

 void setup_chevrolet188() // CHEVROLET IMPALA 2005  3.8 L  (188)
      {       
    chevrolet188:            
              for (int i=1; i<3; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                   
                   }

       for (int i=1; i<15; i++)
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

                   for (int i=1; i<8; i++)
                             {
                              digitalWrite (10, LOW);
                              digitalWrite (11, HIGH);
                              delay (analogRead (0)/10);                    
                             }                   
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

         for (int i=1; i<6; i++)
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

                   for (int i=1; i<8; i++)
                             {
                              digitalWrite (10, LOW);
                              digitalWrite (11, LOW);
                              delay (analogRead (0)/10);                    
                             }                   
                   }  
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }                 
        goto chevrolet188;
      }
      
void setup_chevrolet189() // CHEVROLET MALIBU 2008  3.5 L  (189)

      {       
   chevrolet189:            
             for (int i=1; i<14; i++)
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

          for (int i=1; i<25; i++)
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

             for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                       
                   }

             for (int i=1; i<24; i++)
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

               for (int i=1; i<27; i++)
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
                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);
                   digitalWrite (10, HIGH);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);
                      
              for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                     
                   }  
    if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }               
        goto chevrolet189;
   }

 void setup_chevrolet190() // CHEVROLET HHR LS 2008  2.4 L  (190)
      {       
     chevrolet190:            
       
       for (int i=1; i<24; i++)
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

         for (int i=1; i<27; i++)
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
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);

            for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                                    
                   }

            for (int i=1; i<15; i++)
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

            for (int i=1; i<25; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
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

            for (int i=1; i<7; i++)
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

                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);

               for (int i=1; i<8; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);                                   
                   } 
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }                
        goto chevrolet190;
      }
 void setup_chevrolet191() // CHEVROLET SILVERADO 5.3 L  (191)
      {       
    chevrolet191:            
             for (int i=1; i<24; i++)
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

                   digitalWrite (10, LOW);
                   digitalWrite (11, LOW);
                   delay (analogRead (0)/10);

         for (int i=1; i<27; i++)
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

           for (int i=1; i<3; i++)
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
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

            for (int i=1; i<15; i++)
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

             for (int i=1; i<25; i++)
                   {
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

               for (int i=1; i<10; i++)
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

                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, HIGH);
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
                   }
   if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }                    
        goto chevrolet191;
      } 
      
void setup_chevrolet192() // CHEVROLET ASTRA 2000 1.8 L  (192)
      {       
      chevrolet192:            
              for (int i=1; i<27; i++)
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

                   
       for (int i=1; i<32; i++)
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

        for (int i=1; i<4; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                   }

        for (int i=1; i<28; i++)
                   {
                    digitalWrite (10, HIGH);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);
                    digitalWrite (10, LOW);
                    digitalWrite (11, LOW);
                    delay (analogRead (0)/10);                   
                   }

         for (int i=1; i<31; i++)
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
                    digitalWrite (10, HIGH);
                    digitalWrite (11, HIGH);
                    delay (analogRead (0)/10);
                   }                  
 if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
         goto chevrolet192;
      }
      
 void setup_chevrolet193() // CHEVROLET MOTOR 2.4 L  (193) // CHEVROLET 2.4 L           (SR. Jesus)  193   ----->  CHEVROLET 22    CHEVROLET 2.4 L        022
      {       
        chevrolet193:            
                   digitalWrite (10, HIGH);                   
                   delay (analogRead (0)/10);
                   digitalWrite (10, LOW);                   
                   delay (analogRead (0)/10);
                   digitalWrite (10, HIGH);                   
                   delay (analogRead (0)/10);      
       
          for (int i=1; i<7; i++)
                   {
                    digitalWrite (10, LOW);                   
                    delay (analogRead (0)/10);                                      
                   }

          for (int i=1; i<6; i++)
                   {
                    digitalWrite (10, HIGH);                   
                    delay (analogRead (0)/10);

                     for (int i=1; i<7; i++)
                                   {
                                   digitalWrite (10, LOW);                   
                                   delay (analogRead (0)/10);                                
                                   }
                    }
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
            goto chevrolet193;
      }
  void setup_chevrolet194() // CHEVROLET SONIC 2017 1.4L   (Perez E)  194 
{
   chevrolet194:
   
    //PRIMER FOR  
    for (int i = 1; i <= 10; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH);
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);
    }

      //2do FOR  
    for (int i = 1; i <= 5; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, LOW);
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

     // 3ro FOR  
    for (int i = 1; i <= 3; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

      // 4to FOR  
    for (int i = 1; i <= 5; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);
    }

     // 5to FOR  
    for (int i = 1; i <= 13; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }
     

    // 6to FOR  
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
     
    

     // 7mo FOR  
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
     
  
        // 8vo FOR  
    for (int i = 1; i <= 6; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, LOW); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

     // 9no FOR  
    for (int i = 1; i <= 3; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

    // 10mo FOR  
    for (int i = 1; i <= 5; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);
    }

    // 11vo FOR  
    for (int i = 1; i <= 17; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

    // 12vo FOR  
    for (int i = 1; i <= 8; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, LOW); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

     // 13vo FOR  
    for (int i = 1; i <= 13; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, LOW); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);
    }

    // 14vo FOR  
    for (int i = 1; i <= 6; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);
    }
      
      // 15vo FOR  
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
     


     // 16vo FOR  
    for (int i = 1; i <= 2; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
     
    }

    // AJUSTE
      digitalWrite (10, LOW);
      digitalWrite (11, HIGH);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);



   // 17mo FOR  
    for (int i = 1; i <= 8; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, LOW); 
      digitalWrite (12, HIGH); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      digitalWrite (12, HIGH);  
            delay(analogRead(0)/10);
    }

     // 18vo FOR  
    for (int i = 1; i <= 13; i++){
      digitalWrite (10, HIGH);
      digitalWrite (11, LOW); 
      digitalWrite (12, LOW); 
            delay(analogRead(0)/10); 
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      digitalWrite (12, LOW);  
            delay(analogRead(0)/10);
       }
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6
         {
         loop();
         }
       goto chevrolet194;
    }    
