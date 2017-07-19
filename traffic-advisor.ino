// lights.ino
// Part of the diy-traffic-advisor project
//
// By Ian Thompson
// Copyright (c) 2017.
//
#include <MultiShiftRegister.h>

#define ACTIVATED LOW

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
byte data = 0b00000000;


MultiShiftRegister msr (2, latchPin, clockPin, dataPin);


void setup() {
  // put your setup code here, to run once:

  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  
  
  msr.shift();

  Serial.begin(9600);


  

}

void loop() {
  

left_half(140);


}


/*

    Below flash patterns with other flash patterns inside (confusing? yes). Function names are respective to their lettering. See below

    l = Left
    r = Right
    f = Full
    etc. 

*/

void l_l_r_r_f_f(int speed){

  // Left Left Right Right Full Full

  left_half(speed);
  delay(speed);
  left_half(speed);
  delay(speed);

  right_half(speed);
  delay(speed);
  right_half(speed);
  delay(speed);

  flash_all(speed);
  delay(speed);
  flash_all(speed);
  delay(speed * 1.5);


  
  
}



void l_r_l_r(int speed){
  left_half(speed);
  delay(speed);
  left_half(speed);
  delay(speed);

  right_half(speed);
  delay(speed);
  right_half(speed);
  delay(speed);
}

void l_l_r_r_lrlr(int speed){

  left_half(speed);
  delay(speed);
  left_half(speed);
  delay(speed);

  right_half(speed);
  delay(speed);
  right_half(speed);
  delay(speed);



  for (int i = 2; i >= 0; i--){
    left_half(speed);
    delay(speed / 5);
    right_half(speed);
    delay(speed / 5);     
    }
  
  
}

void sweep(int speed) {

  int id = random(3);

  switch (id) {
    case 0: 
      split(speed / 2);
      delay(speed);
      break;
    case 1:
      left_half(speed);
      delay(speed);
      break;
    case 2:
      right_half(speed);
      delay(speed);
      break;
    case 3:
      flash_all(speed);
      delay(speed);
      break;
      
    
  }
  
}


/* 

  Below are individual flash patterns. You can create new funtions with these flash patterns to create new flash patterns. All
  functions take one parameter. It should be an int. This int will control delay() speeds so the larger the int, the slower the
  pattern.

*/


void split(int speed){

  // LEDS light up in middle, and spread accross

  int num = 1;

  for (int i = 7; i >= 0; i--){
    msr.set_shift(i);
    msr.set_shift(i + num);
    num = num + 2;
    delay(speed);
  }


     for (int k = 0; k <= 15; k++){
       msr.clear_shift(k);

    }

}

void single_right_full(int speed){

    // Each LED will turn on from left to right
    
    for (int k = 0; k < 15; k++){
      msr.set_shift(k);
      delay(90);
      msr.clear_shift(k);
    }
}

void single_right_half(int speed){

  // Each led will turn on going right. Half of the light bar

  for (int k = 7; k < 15; k++){
      msr.set_shift(k);
      delay(90);
      msr.clear_shift(k);
    }
}


void single_left_half(int speed){

  
  
  for (int k = 6; k >= 0; k--){
        msr.set_shift(k);
        delay(600);
        msr.clear_shift(k);
    

      }
}

void single_left_full(int speed){
  for (int k = 15; k >= 0; k--){
        msr.set_shift(k);
        delay(600);
        msr.clear_shift(k);
    

      }
}


void right_half(int speed){

  for (int k = 7; k <= 15; k++){
      msr.set_shift(k);

    }

    delay(speed);
 
 for (int k = 7; k <= 15; k++){
      msr.clear_shift(k);

    }

   delay(speed);
    
}

void left_half(int speed){

  for (int k = 0; k <= 6; k++){
      msr.set_shift(k);

    }

    delay(speed);
 
 for (int k = 0; k <= 6; k++){
      msr.clear_shift(k);

    }

   delay(speed);
    
}

void flash_all(int speed){

  for (int k = 0; k <= 15; k++){
      msr.set_shift(k);

    }

    delay(speed);
 
 for (int k = 0; k <= 15; k++){
      msr.clear_shift(k);

    }

   delay(speed);
    
}

void full_stay_right(int speed){

  for (int i = 0; i < 16; i++){
    msr.set_shift(i);
    delay(speed);
  }

for (int i = 0; i < 16; i++){
  
    msr.clear_shift(i);

    
  }

    
}
  
void full_stay_left(int speed){

  for (int i = 15; i >= 0; i--){
    msr.set_shift(i);
    delay(speed);
  }

  for (int i = 0; i < 16; i++){
    msr.clear_shift(i);
  }
  
}

void half_stay_right(){
    for (int i = 7; i < 16; i++){
    msr.set_shift(i);
    delay(250);
  }

for (int i = 7; i < 16; i++){
  
    msr.clear_shift(i);

    
  }
}

void half_stay_left(){

  for (int i = 7; i >= 0; i--){
    msr.set_shift(i);
    delay(250);
  }

  for (int i = 0; i < 16; i++){
    msr.clear_shift(i);
  }
  
}



