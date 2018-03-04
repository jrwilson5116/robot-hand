#include <Servo.h>

/*one servo for each finger 
 * plus double actuation 
 * for the thumb
 */
Servo index;
Servo middle;
Servo ring;
Servo pinky;
Servo thumb;

void setup() {
  /*attach servo signal 
   * lines to arduino lines
   */
  index.attach(2);
  middle.attach(4);
  ring.attach(6);
  pinky.attach(8);
  thumb.attach(10);
    
  //for first time setup
  //  index.write(90);
  //  middle.write(90);
  //  ring.write(90);
  //  pinky.write(90);
  //  thumb.write(90);
      
}


void loop() {
//   //put your main code here, to run repeatedly:
//   openHand();
//   delay(3000);
//   closeHand();
//   delay(3000);
//   openHand();
//   delay(3000);
//   thumbsUp();
//   delay(3000);
  
}


void openHand(){
  thumb.write(0);
  index.write(0);
  middle.write(0);
  ring.write(0);
  pinky.write(0);
}

void closeHand(){
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
  thumb.write(180);
  thumb.write(180);
}

void thumbsUp(){
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
  thumb.write(0);
}

void peace(){
  index.write(0);
  middle.write(0);
  ring.write(180);
  pinky.write(180);
  thumb2.write(180);
  thumb.write(180);
}

void callMe(){
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(90);
  thumb.write(0);
}

void metal(){
  index.write(0);
  middle.write(180);
  ring.write(180);
  pinky.write(0);
  thumb.write(180); 
}

void theFinger(){
  index.write(180);
  middle.write(0);
  ring.write(180);
  pinky.write(180);
  thumb.write(180);
}


