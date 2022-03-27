#include <IRremote.h>

int RECV_PIN =7;
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup(){
 Serial.begin(9600);
 irrecv.enableIRIn();
}

void loop(){
   if (irrecv.decode(&results)){
      int value = results.value;
      Serial.print("Received: ");
      Serial.println(value);
      irrecv.resume();
   }
}
