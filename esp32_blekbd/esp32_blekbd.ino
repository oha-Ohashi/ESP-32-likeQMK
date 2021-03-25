
#include <BleKeyboard.h>
BleKeyboard bleKeyboard;
//#include "kc.h"

#include "kc_short.h"
#include "quantum_keycodes.h"

#define TAPPING_TERM 200

unsigned long last_press[120];      
bool layer16[] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};  
void setup() {
  //Serial1.begin(4800, SERIAL_8N1, 0, 26); // EXT_IO
  Serial2.begin(4800);
  bleKeyboard.begin();
  Serial.begin(4800);
  Serial.println(LCTL('a'),HEX);
  for(unsigned long i = 0; i < 120; i++)
    last_press[i] = 0;
}

void loop() {
  if(Serial2.available()) delay(5);
  if(Serial2.available() >= 2){
    uint8_t pair[] = {Serial2.read(), Serial2.read()}; 
    //Serial.print("pair: ");
    //Serial.print(pair[0]); Serial.print(" ");
    //Serial.println(pair[1]);
    if(pair[0] == 'b'){
      press_release(pair[1]);          /////////
    }
  }else if (Serial2.available() > 0){
    uint8_t waste = Serial2.read(); 
    Serial.print("waste this byte: ");
    Serial.println(waste);
  }
  else{
    //Serial.print("_");
  }
  delay(10);
}

void mypress(bool pressed, uint8_t code){
  if (pressed == 1){
    Serial.print("press; ");
    bleKeyboard.press(code);
  }else{
    Serial.print("release; ");
    bleKeyboard.release(code);
  }
  Serial.print(top_l());Serial.print("**"); Serial.println(code, HEX);
}
uint8_t top_l(){
  for(int i=15; i>=0; i--){
    if(layer16[i]) return i;
  }
  return 0;
}
void layer_xin16(uint8_t L){
  for(int i=15; i>=0; i--){
    layer16[i] = false;
  }
  layer16[L] = true;
}
