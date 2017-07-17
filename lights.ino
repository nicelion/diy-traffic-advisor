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
  
 




}

void split(int speed){

  // LEDS light up in middle, and spread accross

  int num = 1;

  for (int i = 3; i >= 0; i--){
    msr.set_shift(i);
    msr.set_shift(i + num);
    num = num + 2;
    delay(speed);
  }


     for (int k = 0; k <= 7; k++){
       msr.clear_shift(i);

    }

}

void single_right_full(){

    // Each LED will turn on from left to right
    
    for (int k = 0; k < 7; k++){
      msr.set_shift(k);
      delay(90);
      msr.clear_shift(k, LOW);
    }
}

void single_right_half(){

  // Each led will turn on going right. Half of the light bar

  for (int k = 4; k < 7; k++){
      msr.set_shift(k);
      delay(90);
      msr.clear_shift();
    }
}


void single_left_half(){

  
  
  for (int k = 3; k >= 0; k--){
        msr.set_shift(k);
        delay(600);
        msr.clear_shift();
    

      }
}

void single_left_full(){
  for (int k = 7; k >= 0; k--){
        msr.set_shift(k);
        delay(600);
        msr.clear_shift();
    

      }
}


void right_half(int speed){

  for (int k = 4; k <= 7; k++){
      msr.set_shift(k);

    }

    delay(speed);
 
 for (int k = 4; k <= 7; k++){
      msr.clear_shift();

    }

   delay(speed);
    
}

void left_half(int speed){

  for (int k = 0; k <= 3; k++){
      msr.set_shift(k);

    }

    delay(speed);
 
 for (int k = 0; k <= 3; k++){
      msr.clear_shift();

    }

   delay(speed);
    
}

void flash_all(int speed){

  for (int k = 0; k <= 7; k++){
      msr.set_shift(k);

    }

    delay(speed);
 
 for (int k = 0; k <= 7; k++){
      msr.clear_shift();

    }

   delay(speed);
    
}

void full_stay_right(int speed){

  for (int i = 0; i < 8; i++){
    msr.set_shift(i);
    delay(speed);
  }

for (int i = 0; i < 8; i++){
  
    msr.clear_shift(i);

    
  }

    
}
  
void full_stay_left(int speed){

  for (int i = 7; i >= 0; i--){
    msr.set_shift(i);
    delay(speed);
  }

  for (int i = 0; i < 8; i++){
    msr.clear_shift();
  }
  
}

void half_stay_right(){
    for (int i = 4; i < 8; i++){
    msr.set_shift(i);
    delay(250);
  }

for (int i = 4; i < 8; i++){
  
    msr.clear_shift();

    
  }
}

void half_stay_left(){

  for (int i = 3; i >= 0; i--){
    msr.set_shift(i);
    delay(250);
  }

  for (int i = 0; i < 8; i++){
    msr.clear_shift();
  }
  
}



