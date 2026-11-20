/* For this assignment you will do the following:
The green light blinks on for 200 ms and off 200 ms two times.
There is a one second pause.
The blue light does the same thing as the green just did.
There is a three second pause.
Both lights alternate blinking off and on for 650 ms each. (They continue this forever)

This video illustrated what we are going for: https://www.youtube.com/watch?v=1TTnCqdSPqc
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
  
    // blink green LED on and off twice
  digitalWrite(7, HIGH);
        delay(200);
        digitalWrite(7, LOW);
        delay(200);
        digitalWrite(7, HIGH);
        delay(200);
        digitalWrite(7, LOW);
        delay(1000);
           // blink blue LED on and off twice
 digitalWrite(8, HIGH);
        delay(200);
        digitalWrite(8, LOW);
        delay(200);
        digitalWrite(8, HIGH);
        delay(200);
        digitalWrite(8, LOW);
        delay(3000);
}

void loop() {
    // blink both LEDs on and off alternatively
 digitalWrite(7, HIGH);
        delay(650);
        digitalWrite(7, LOW);
        delay(0);
         digitalWrite(8, HIGH);
        delay(650);
        digitalWrite(8, LOW);
        delay(0);
  

}
