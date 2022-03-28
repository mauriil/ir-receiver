// https://www.pjrc.com/teensy/td_libs_IRremote.html
// https://github.com/Arduino-IRremote/Arduino-IRremote
#include <IRremote.h>

int RECV_PIN =7;
IRrecv irrecv(RECV_PIN);
decode_results results;

//IRsend irsend;


void setup(){
 Serial.begin(9600);
 irrecv.begin(RECV_PIN);
}

void loop(){

  if (IrReceiver.decode()) {
     Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
     IrReceiver.printIRResultShort(&Serial); // optional use new print version
     IrReceiver.resume(); // Enable receiving of the next value
 }

 //irsend.sendNEC(0xA, 0x5A, 2);
 //delay(1000);
}
