#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "ford.h"
#include "chrysler.h"
#include "dodge.h"
#include "jeep.h"
#include "chevrolet.h"
#include "nissan.h"
#include "vw.h"
#include "honda.h"
#include "peugeot.h"
#include "toyota.h"
#include "renault.h"
#include "mazda.h"
#include "universales.h"
#include "prueba.h"
#include "hyundai.h"
#include "mitsubishi.h"

#define enc1 2
#define enc2 4
#define encbtn 7

#define retorno 6

int limite = 15; ///////////////////
int regreso = 0;
int posicion = 0;

LiquidCrystal_I2C lcd(0x27,20,4); //Direccion HEX del LCD

void setup() {

  lcd.init(); //iniciamos LCD
  lcd.backlight(); //encendemos luz de fondo

  //inicializar el Encoder
  pinMode (enc1,INPUT);    // Encoder DT          (PIN 2)
  pinMode (enc2,INPUT);    // Encoder CLK          (PIN 4)
  pinMode (encbtn,INPUT);  // Encoder Boton (Swich)  (PIN 7)

  pinMode (6, INPUT);   // Boton de retorno

  pinMode (10,OUTPUT);  // Salida PIN 10=CKP
  pinMode (11,OUTPUT);  // Salida PIN 11=CMP
  pinMode (12,OUTPUT);  // Salida PIN 12=CMP2
  pinMode (13,OUTPUT);  // Salida PIN 13=CKP3
  pinMode (30,OUTPUT);  // Salida PIN 30=CMP4

  Serial.begin(9600);   // inicializar puerto serie

  attachInterrupt (digitalPinToInterrupt(enc1), encoder, LOW);

}

void loop(){

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////// INICIA MENU PRINCIPAL ////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  delay(200);
  posicion=0;

marcas:
  limite=15;
  regreso = 1;
 
  switch(posicion){
    
   case 0: //Pantalla Principal
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("- Computadoras 2026-");
    lcd.setCursor(0, 2);
    lcd.print("-    BIENVENIDO    -");
    lcd.setCursor(0, 3);
    lcd.print("-      EDGAR            -");
           
           if ((digitalRead(encbtn) == 0) && (digitalRead(retorno) == 0)){
           delay(200);
             lcd.setCursor(0, 0);
             lcd.print("-      Prueba      -");
             lcd.setCursor(0, 1);
             lcd.print("-        5         -");
             lcd.setCursor(0, 2);
             lcd.print("-      LED'S       -");
             lcd.setCursor(0, 3);
             lcd.print("-   simultaneos    -");
         setup_555();
      }  
    break;

   case 1:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-    Chrysler      -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      goto marca1;
      }
    break;

   case 2:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-      Dodge       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      goto marca2;
      }
    break;

   case 3:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-      Jeep        -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      goto marca3;
      }
    break;

   case 4:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-      Ford        -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      goto marca4;
      }
    break;

   case 5:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-    Chevrolet     -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      goto marca5;
      }
    break;

   case 6:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-      Nissan      -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      goto marca6;
      }
    break;

   case 7:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-     Toyota       -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      goto marca7;
      }
    break;

   case 8:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-      Honda       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);     
      goto marca8;
      }
    break;

   case 9:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-      Mazda       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);     
      goto marca9;
      }
    break;

    case 10:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-     Hyundai      -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);     
      goto marca10;
      }
    break;
   
    case 11:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-   Mitsubishi     -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);     
      goto marca11;
      }
    break;

   case 12:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-    Volkswagen    -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);   
      goto marca12;
      }
    break;

   case 13:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-     Peugeot      -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);   
      goto marca13;
      }
    break;

   case 14:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-     Renault      -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);   
      goto marca14;
      }
    break;

   case 15:
    lcd.setCursor(0, 0);
    lcd.print("-   Probador de    -");
    lcd.setCursor(0, 1);
    lcd.print("-  Computadoras    -");
    lcd.setCursor(0, 3);
    lcd.print("-   Universales    -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);   
      goto marca15;
      }
    break;
         
    } // fin del SWITCH
    
    goto marcas;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////// INICIA SUB-MENU DE MARCAS/////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
 
marca1: //Chrysler ////////////////////////////////////////////////////////////////////////////////////////////////

   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
   
   marcachrysler:   
    limite = 11;
    switch(posicion){

     case 0: 
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      SBEC        -");
      lcd.setCursor(0, 3);
      lcd.print("-      2.5 L       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_sbec050();
      }     
      break;
      
     case 1: 
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      SBEC        -");
      lcd.setCursor(0, 3);
      lcd.print("- 3.3 3.5 Y 3.8 L  -");
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_sbec052();
      }     
      break;

     case 2: 
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      SBEC        -");
      lcd.setCursor(0, 3);
      lcd.print("-      4.0 L       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_pcm061();
      }     
      break;

     case 3: 
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      SBEC        -");
      lcd.setCursor(0, 3);
      lcd.print("-  3.9 5.2 Y 5.9 L -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_sbec054();
      }     
      break;

   case 4: 
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      PCM         -");
      lcd.setCursor(0, 3);
      lcd.print("-   2.0 Y 2.4 L    -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_pcm060();
      }     
      break;
      
     case 5: // PCM 61     2.5                       (061)  ----->  SBEC (053), PCM(063), JTEC(072)
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      PCM         -");
      lcd.setCursor(0, 3);
      lcd.print("-  2.5 L Y 3.0 L   -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_pcm61();
      }     
      break;

    case 6:  // PCM 65     3.3 Y 3.8                 (065)  ----->  SBEC 52    3.3, 3.5 Y 3.8            (052)
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      PCM         -");
      lcd.setCursor(0, 3);
      lcd.print("-   3.3 Y 3.8 L    -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0 ){
      delay(200);
      setup_sbec052();
      }     
      break;

    case 7:  // CHRYSLER SBEC 1, 2 y 3  (100) 
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   SBEC 1,2 Y 3   -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0 ){
      delay(200);
      setup_chry100();
      }     
      break;

   case 8:  // CHRYSLER SEBRING 2002   (102)
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   SEBRING 2002   -");
      lcd.setCursor(0, 3);
      lcd.print("-      2.7 L       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0 ){
      delay(200);
      setup_chry102();
      }     
      break;
   
   case 9:  // CHRYSLER STRATUS  2000   (103)
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   STRATUS 2000   -");
      lcd.setCursor(0, 3);
      lcd.print("-      2.0 L       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0 ){
      delay(200);
      setup_pcm060();
       }     
      break;

   case 10:  // CHRYSLER PACIFICA 2005   3.5 L  (NGC)   (104)
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  PACIFICA 2005   -");
      lcd.setCursor(0, 3);
      lcd.print("-      3.5 L       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0 ){
      delay(200);
      setup_chry104();
       }     
      break;

    case 11:  // CHRYSLER 300C MOTOR HEMI 5.7L (NGC)  (105)
      lcd.setCursor(0, 0);
      lcd.print("-    CHRYSLER      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- 300 C MOTOR HEMI -");
      lcd.setCursor(0, 3);
      lcd.print("-      5.7 L       -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0 ){
      delay(200);
      setup_chry105();
       }     
      break;
 
   }
    goto marcachrysler; //////////////////////////////////////// TERMINA MARCA CHRISLER
    goto marca1;///////////////////////////////////////////////////////////////////////// TERMINA MARCA 1 CHRYSLER

marca2: //DODGE
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcadodge:  ///////////////////////////////////MARCA DODGE
    limite = 5;
    switch(posicion)
    {
     case 0: // NGC 80      2.0 Y 2.4                (080)
      lcd.setCursor(0, 0);
      lcd.print("-      DODGE       -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       NGC        -");
      lcd.setCursor(0, 3);
      lcd.print("-    2.0 Y 2.4 L   -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_ngc080();
      }
      break;

   case 1:  // GRAND CARAVAN 2000-2005
      lcd.setCursor(0, 0);
      lcd.print("-      DODGE       -");
      lcd.setCursor(0, 1);
      lcd.print("-  GRAND CARAVAN   -");
      lcd.setCursor(0, 2);
      lcd.print("-    2000-2005     -");
      lcd.setCursor(0, 3);
      lcd.print("-       3.3 L      -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge120();
      }
      break;

    case 2:  // INTREPID 2002 3.5 L - CHARGER 2006 3.5L 
      lcd.setCursor(0, 0);
      lcd.print("-      DODGE       -");
      lcd.setCursor(0, 1);
      lcd.print("- INTREPID-CHARGER -");
      lcd.setCursor(0, 2);
      lcd.print("-    2002-2006     -");
      lcd.setCursor(0, 3);
      lcd.print("-       3.5 L      -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge121();
      }
      break;

   case 3:    // DODGE NEON 1999-2004  2.0L (123)
      lcd.setCursor(0, 0);
      lcd.print("-      DODGE       -");
      lcd.setCursor(0, 1);
      lcd.print("-       NEON       -");
      lcd.setCursor(0, 2);
      lcd.print("-    1999-2004     -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.0 L      -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge123();
      }
      break;

  case 4:    // DODGE DAKOTA 4.7 L Y 5.8 L  DODGE DURANGO 4.7 L  (124)
      lcd.setCursor(0, 0);
      lcd.print("-      DODGE       -");
      lcd.setCursor(0, 1);
      lcd.print("-  DAKOTA-DURANGO  -");
      lcd.setCursor(0, 2);
      lcd.print("-       2001       -");
      lcd.setCursor(0, 3);
      lcd.print("-    4.7 5.8 L     -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge124();
      }
      break;

   case 5:    // DODGE RAM 1500 (2003-2008) 3.7 Y 4.7 L
      lcd.setCursor(0, 0);
      lcd.print("-      DODGE       -");
      lcd.setCursor(0, 1);
      lcd.print("-     RAM 1500     -");
      lcd.setCursor(0, 2);
      lcd.print("-    2003-2008     -");
      lcd.setCursor(0, 3);
      lcd.print("-    3.7 Y 4.7 L   -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge125();
      }
      break;
    }
      goto marcadodge;///////////////////////// TERMINA MARCA DODGE
    goto marca2; ///////////////////////// TERMINA MARCA DODGE

marca3: /////////////////////////////JEEP

    posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
    delay(200); 
  
   marcajeep:  ///////////////////////////////////MARCA JEEP
    limite = 8;
    switch(posicion)
    {
     case 0:
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       JTEC       -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.5 L      -");      
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_jtec071();
      }
    break;

     case 1: // JTEC 72     4.0                      (072)  <-----  PCM 61     2.5                       (061)
      lcd.setCursor(0, 0);
      lcd.print("-       JEEP       -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       JTEC       -");
      lcd.setCursor(0, 3);
      lcd.print("-       4.0 L      -");      
       if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_pcm061();
      }
    break;

    case 2:  // JTEC 73     4.7                      (073)
      lcd.setCursor(0, 0); 
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       JTEC       -");
      lcd.setCursor(0, 3);
      lcd.print("-       4.7 L      -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_jtec073();
      }
      break;

   case 3:  // JTEC 74     3.9, 5.2 Y 5.9           (074) 
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       JTEC       -");
      lcd.setCursor(0, 3);
      lcd.print("-  3.9 5.2 Y 5.9   -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_jtec074();
      }
      break;

    case 4:  // LIBERTY 2003 3.7 L   // JEEP LIBERTY LIMITED 2003-REV.2 (002)  141  ----->   DODGE INTREPID 1999-REV.2       (006)  123
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  LIBERTY  2003   -");
      lcd.setCursor(0, 3);
      lcd.print("-      3.7 L       -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge123();
      }
      break;

  case 5:  // LIBERTY 2004-2007 3.7 L   // JEEP LIBERTY SPORT 2004         (003)  142  ----->   DODGE GRAND CARAVAN STX 2005    (003)  121 
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-LIBERTY 2004-2007 -");
      lcd.setCursor(0, 3);
      lcd.print("-      3.7 L       -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_dodge121();
      }
      break;

  case 6:  // JEEP PATRIOT 2008-2011  2.4 L 143
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-PATRIOT 2008-2011 -");
      lcd.setCursor(0, 3);
      lcd.print("-      2.4 L       -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_jeep143();
      }
      break;

 case 7:  // JEEP GRAND CHEROKEE 2002 COMMANDER 2006 4.7 L    144 -----> JTEC 73 4.7 L
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  COMMANDER 2006  -");
      lcd.setCursor(0, 3);
      lcd.print("-      3.7 L       -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_jtec073();
      }
      break;

 case 8:  // JEEP GRAND CHEROKEE 2005 4.7 L 
      lcd.setCursor(0, 0);
      lcd.print("-      JEEP        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   CHEROKEE 2005  -");
      lcd.setCursor(0, 3);
      lcd.print("-      4.7 L       -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_jeep145();
      }
      break;
      
    }
    goto marcajeep;///////////////////////// TERMINA MARCA JEEP
    goto marca3; ///////////////////////// TERMINA MARCA JEEP
    
marca4: //FORD ////////////////////////////////////////////////////////////////////////////////////////////////
       
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcaford:  ///////////////////////////////////MARCA FORD
    limite = 2;
    switch(posicion)
    {
     case 0: // FORD SUPER DUTY 5.4 L (011)  <-----  FORD SUPER DUTY 5.4 L                (162)
      lcd.setCursor(0, 0);
      lcd.print("-      FORD        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- SUPER DUTY 5.4 L -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_superduty();
      }
      break;

    case 1: // FORD 10  60 Y 104 TERMINALES         (010)
      lcd.setCursor(0, 0);
      lcd.print("-      FORD        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   PCM 60 CAV     -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_60cav();
      }
      break;

    case 2: // FORD 10  60 Y 104 TERMINALES         (010)
      lcd.setCursor(0, 0);
      lcd.print("-      FORD        -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   PCM 104 CAV    -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_104cav();
      }
      break;

   }
     goto marcaford; ///////////////////////////// MARCA FORD
   goto marca4; ////////////////////////////////////////////////// TERMINA MARCA 4 FORD
           
marca5: /////////////////////////////////////////CHEVROLET
  
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcachevrolet:  ///////////////////////////////////MARCA NISSAN
    limite = 16;
    switch(posicion)
    {
     case 0: // CHEVROLET CHEVY TBI 1.6 L
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    CHEVY TBY     -");
      lcd.setCursor(0, 3);
      lcd.print("-   1.4 Y 1.6 L    -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevytbi();
      }
      break;

     case 1: // CHEVROLET CHEVY 2000
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    CHEVY 2000    -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.6 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet180();
      }
      break;

    case 2: // CHEVROLET 2 y 3 CONECTORES
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- 2 Y 3 CONECTORES -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet021();
      }
      break;

     case 3: // CHEVROLET CAVALIER 1998 2.2 L
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  CAVALIER 1998   -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.2 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet181();
      }
      break;

   case 4: // CHEVROLET MONTECARLO 1999 3.8 L  (182)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- MONTECARLO 1999  -");
      lcd.setCursor(0, 3);
      lcd.print("-       3.8 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet182();
      }
      break;

   case 5: // CHEVROLET TRAILBLAZER LS 4.2 L  (183)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- TRAILBLAZER 2003 -");
      lcd.setCursor(0, 3);
      lcd.print("-       4.2 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet183();
      }
      break;

    case 6: // CHEVROLET AVEO 2004  1.4 L  (184)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-     AVEO  2004   -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.4 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet184();
      }
      break;

  case 7: // CHEVROLET OPTRA 2004  1.8 L  (185)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    OPTRA  2004   -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.8 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet185();
      }
      break;

    case 8: // CHEVROLET CLASSIC 2004  1.4  Y 2.2 L  (186)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  CLASSIC  2004   -");
      lcd.setCursor(0, 3);
      lcd.print("-   1.4  Y 2.2 L   -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet186();
      }
      break;

   case 9: // CHEVROLET COLORADO 2005  2.8  Y 3.5 L  (187)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   COLORADO 2005  -");
      lcd.setCursor(0, 3);
      lcd.print("-   2.8  Y 3.5 L   -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet187();
      }
      break;

  case 10: // CHEVROLET IMPALA 2005  3.8 L  (188)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    IMPALA 2005   -");
      lcd.setCursor(0, 3);
      lcd.print("-       3.8 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
      delay(200);
      setup_chevrolet188();
      }
      break;

   case 11: // CHEVROLET MALIBU 2008  3.5 L  (189)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    MALIBU 2008   -");
      lcd.setCursor(0, 3);
      lcd.print("-       3.5 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet189();
      }
      break;

   case 12: // CHEVROLET HHR LS 2008  2.4 L  (190)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      HHR 2008    -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.4 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet190();
      }
      break;
  
   case 13: // CHEVROLET SILVERADO 5.3 L  (191)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  SILVERADO 2008  -");
      lcd.setCursor(0, 3);
      lcd.print("-       5.3 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet191();
      }
      break;

   case 14: // CHEVROLET ASTRA 2000 1.8 L  (192)
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    ASTRA 2000    -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.8 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet192();
      }
      break;
      
  case 15: // CHEVROLET MOTOR 2.4 L  (193) // CHEVROLET 2.4 L           (SR. Jesus)  193   ----->  CHEVROLET 22    CHEVROLET 2.4 L        022
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    MOTOR 2.4 L   -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.4 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet193();
      }
      break;

   case 16: // CHEVROLET SONIC 2017 1.4L   (Perez E)  194 
      lcd.setCursor(0, 0);
      lcd.print("-    CHEVROLET     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    SONIC 2017    -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.4 L      -");   
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton de retorno 6
         {
         loop();
         }   
     if (digitalRead(encbtn) == 0){
     delay(200);
     setup_chevrolet194();
      }
      break;

    }
     goto marcachevrolet; ///////////////////////////// MARCA CHEVROLET
goto marca5; ////////////////////////////////////////////////// TERMINA MARCA 4 CHEVROLET

marca6: /////////////////////////////////////////////////////////////////////NISSAN
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcanissan:  ///////////////////////////////////MARCA NISSAN
    limite = 6;
    switch(posicion)
    {
     case 0: // NISSAN  40 GA16DE                    (040)
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      GA16DE      -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.6 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan040();
      }
      break;

   case 1: // NISSAN  41 GA16DNE                   (041)
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      GA16DNE     -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.6 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan041();
      }
      break;

  case 2: // NISSAN  42 QG18DE                    (042)
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      QG18DE      -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.8 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan042();
      }
      break;

  case 3: // NISSAN  43 VG33E  Y  VG30I           (043)
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  VG33E Y VG30I   -");
      lcd.setCursor(0, 3);
      lcd.print("-    3.3 Y 3.0 L   -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan043();
      }
      break;
     
  case 4: // NISSAN SENTRA 2001              (001)  200 
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    SENTRA 2001   -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan200();
      }
      break;

 case 5: // NISSAN PATHFINDER 2004          (002)  201
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- PATHFINDER 2004  -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan201();
      }
      break;

 case 6: // NISSAN XTERRA 2006              (016)  202
      lcd.setCursor(0, 0);
      lcd.print("-      NISSAN      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    XTERRA 2006   -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan202();
      }
      break;
    }
      goto marcanissan;///////////////////////// TERMINA MARCA NISSAN
    goto marca6; ///////////////////////// TERMINA MARCA NISSAN

marca7: //TOYOTA
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcatoyota:  ///////////////////////////////////MARCA TOYOTA
    limite = 0;
    switch(posicion)
    {
     case 0: // TOYOTA 1.5, 1.8, 2.4, 2.7, 3.5 Y 4.0 L
      lcd.setCursor(0, 0);
      lcd.print("-      TOYOTA      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-1.5, 1.8, 2.4, 2.7,-");
      lcd.setCursor(0, 3);
      lcd.print("-    3.5 Y 4.0 L    -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_toyota280();
      }
      break;
    }
      goto marcatoyota;///////////////////////// TERMINA MARCA TOYOTA
    goto marca7; ///////////////////////// TERMINA MARCA TOYOTA


marca8: //HONDA
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcahonda:  ///////////////////////////////////MARCA HONDA
    limite = 1;
    switch(posicion)
    {
     case 0: // HONDA CIVIC 2003 1.6 L  (220)
      lcd.setCursor(0, 0);
      lcd.print("-       HONDA      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    CIVIC 2003    -");
      lcd.setCursor(0, 3);
      lcd.print("-      1.6 L       -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_honda220();
      }
      break;
   
   case 1: // HONDA CIVIC 2003  2.0 L    (SR. Jesus) (221)
      lcd.setCursor(0, 0);
      lcd.print("-       HONDA      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    CIVIC 2003    -");
      lcd.setCursor(0, 3);
      lcd.print("-      2.0 L       -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_honda221();
      }
      break;
    }
      goto marcahonda;///////////////////////// TERMINA MARCA HONDA
    goto marca8; ///////////////////////// TERMINA MARCA HONDA

marca9: //MAZDA
    posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcamazda:  ///////////////////////////////////MARCA MAZDA
    limite = 0;
    switch(posicion)
    {
     case 0: // MAZDA 1990  2.6 L  (250)
      lcd.setCursor(0, 0);
      lcd.print("-       MAZDA      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   MAZDA   1990   -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.6 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_mazda250();
      }
      break;
    }
      goto marcamazda;///////////////////////// TERMINA MARCA MAZDA
    goto marca9; ///////////////////////// TERMINA MARCA MAZDA
 
marca10: //HYUNDAI
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcahyundai:  ///////////////////////////////////MARCA HYUNDAI
    limite = 2;
    switch(posicion)
    {
     case 0: // HYUNDAI ACCENT 2002 1.5 L  (240)
      lcd.setCursor(0, 0);
      lcd.print("-     HYUNDAI      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-   ACCENT 2022    -");
      lcd.setCursor(0, 3);
      lcd.print("-       1.5 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_hyundai240();
      }
      break;

    case 1: // HYUNDAI ELANTRA GLS  2002  2.0 L   (241)
      lcd.setCursor(0, 0);
      lcd.print("-     HYUNDAI      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- ELANTRA GLS 2022 -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.0 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_hyundai241();
      }
      break;
          
  case 2: // HYUNDAI     (JOSE M. SANCHEZ)   242 (5 DE DIEMBRE 2020)
      lcd.setCursor(0, 0);
      lcd.print("-     HYUNDAI      -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-     HYUNDAI      -");
      lcd.setCursor(0, 3);
      lcd.print("-     HYUNDAI      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_hyundai242();
      }
      break;
    }
      goto marcahyundai;///////////////////////// TERMINA MARCA HYUNDAI
    goto marca10; ///////////////////////// TERMINA MARCA HYUNDAI

marca11: //MITSUBISHI
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
   marcamitsubishi:  ///////////////////////////////////MARCA MITSUBISHI
    limite = 0;
    switch(posicion)
    {
     case 0: // MITSUBISHI LANCER 2006  2.0 L  (260)
      lcd.setCursor(0, 0);
      lcd.print("-    MITSUBISHI    -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      LANCER      -");
      lcd.setCursor(0, 3);
      lcd.print("-       2.0 L      -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_nissan040();
      }
      break;
    }
      goto marcamitsubishi;///////////////////////// TERMINA MARCA MITSUBISHI
    goto marca11; ///////////////////////// TERMINA MARCA MITSUBISHI

marca12: //VOLKSWAGEN
   posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
  
  marcavw:  ///////////////////////////////////MARCA VW
    limite = 3;
    switch(posicion)
    {
     case 0: //  VW 25 TERMINALES        (030)
      lcd.setCursor(0, 0);
      lcd.print("-   VOLKSWAGEN     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- VW 25 TERMINALES -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_60cav();
      }
      break;

   case 1: //  VW 68 TERMINALES        (031)
      lcd.setCursor(0, 0);
      lcd.print("-   VOLKSWAGEN     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("- VW 68 TERMINALES -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_vw031();
      }
      break;

   case 2: //  VW COMPUTADORA MAGNETI MARELLI IAW 4LV
      lcd.setCursor(0, 0);
      lcd.print("-   VOLKSWAGEN     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-  MAGNETI MARELLI -");
      lcd.setCursor(0, 3);
      lcd.print("-         4LV      -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_vw300();
      }
      break;

   case 3: //  VW JETTA TDI 2006     1.9 L  (301)
      lcd.setCursor(0, 0);
      lcd.print("-   VOLKSWAGEN     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-    JETTA TDI     -");
      lcd.setCursor(0, 3);
      lcd.print("-        1.9 L     -");      
      if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
      setup_vw301();
      }
      break;
    }
      goto marcavw;///////////////////////// TERMINA MARCA VOLKSWAGEN
 goto marca12; ///////////////////////// TERMINA MARCA VOLKSWAGEN

marca13: //PEUGEOT
  do{
    lcd.setCursor(0, 2);
    lcd.print("Estamos en PEUGEOT");

    }while (digitalRead(encbtn) != 0);
    posicion = 0;
    goto marcas;

marca14: //RENAULT
  do{
    lcd.setCursor(0, 2);
    lcd.print("Estamos en RENAULT");

    }while (digitalRead(encbtn) != 0);
    posicion = 0;
    goto marcas;

marca15: //UNIVERSALES /////////////////////////////////////////////////////UNIVERSALES /////////////////////
  posicion=0; //SE UTILIZA PARA REINICIAR EL CONTADOR A CERO (0)
   delay(200); 
    universales:  ///////////////////////////////////UNIVERSALES
    limite = 11;
    switch(posicion)
    {
     case 0: // UNIVERSAL 36-1 BAJA Y ALTA
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       36-1       -");
      lcd.setCursor(0, 3);
      lcd.print("-   BAJA Y ALTA    -");      
  if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal901();
      }
      break;

  case 1: // UNIVERSAL 60-2 BAJA Y ALTA
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-       60-2       -");
      lcd.setCursor(0, 3);
      lcd.print("-   BAJA Y ALTA    -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal902();
      }
      break;

  case 2: // UNIVERSAL FONICA BAJA
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      FONICA      -");
      lcd.setCursor(0, 3);
      lcd.print("-       BAJA       -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal903();
      }
      break;

  case 3: // UNIVERSAL FONICA ALTA
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      FONICA      -");
      lcd.setCursor(0, 3);
      lcd.print("-      ALTA        -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal904();
      }
      break;

   case 4: // UNIVERSAL HALL MAGNETIC BAJA
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-      HALL        -");
      lcd.setCursor(0, 2);
      lcd.print("-    MAGNETIC      -");
      lcd.setCursor(0, 3);
      lcd.print("-      BAJA        -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal905();
      }
      break;

   case 5: // UNIVERSAL 58+1  ------> vw031
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      58+1        -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_vw031(); 
      }
      break;

   case 6: // UNIVERSAL 57+1 
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      57+1        -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal907();
      }
      break;

  case 7: // UNIVERSAL 36+1
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      36+1        -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal908();
      }
      break;

   case 8: // UNIVERSAL 24+1
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      24+1        -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal909();
      }
      break;

   case 9: // UNIVERSAL 22+1
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      22+1        -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal910();
      }
      break;

   case 10: // UNIVERSAL 4+1
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-      4+1        -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal911();
      }
      break;

  case 11: // UNIVERSAL 36-2
      lcd.setCursor(0, 0);
      lcd.print("-    UNIVERSAL     -");
      lcd.setCursor(0, 1);
      lcd.print("-                  -");
      lcd.setCursor(0, 2);
      lcd.print("-     36-2         -");
      lcd.setCursor(0, 3);
      lcd.print("-                  -");      
     if (digitalRead(retorno) == 0)/////////////SE USA PARA REGRESAR AL MENU PRENCIPAL boton 6 
         {
         loop();
         }
      if (digitalRead(encbtn) == 0){
      delay(200);
    setup_universal912();
      }
      break;
    }
   goto universales;///////////////////////// TERMINA UNIVERSALES
goto marca15; ///////////////////////// TERMINA UNIVERSALES

  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
////////////////////////////////////////////////////////////  MO MOVER AQUI /////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

void encoder (){
 static unsigned long ultimaInterrupcion =0;
 unsigned long tiempoInterrupcion = millis();

  if (tiempoInterrupcion- ultimaInterrupcion >5){
  
  if (digitalRead(enc2)==HIGH)
  {
    posicion++;
    }
    else {
      posicion--;
      }
      posicion = min(limite, max(0,posicion));
      ultimaInterrupcion = tiempoInterrupcion;
  }
}
