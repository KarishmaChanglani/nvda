#include <SoftwareSerial.h>

#define RxD 0 //receive data on digital 0
#define TxD 1 //transmit on digital 1

SoftwareSerial blueToothSerial(RxD, TxD);
int counter = 0;
int incoming;
void setup(void){
  Serial.begin(9600);
  //pinMode(RxD,INPUT);
  //pinMode(TxD,OUTPUT);
  setupBlueToothConnection();
}

void setupBlueToothConnection(){
  blueToothSerial.begin(19200);
  blueToothSerial.print("\r\n+STWMOD=0\r\n"); //set the bluetooth work in slave mode
  blueToothSerial.print("\r\n+STNA=SeeedBTSlave\r\n"); //set the bluetooth name as     "SeeedBTSlave"
  blueToothSerial.print("\r\n+STOAUT=1\r\n"); // Permit Paired device to connect me
  //blueToothSerial.print("\r\n+STAUTO=0\r\n"); // Auto-connection should be forbidden here
  delay(2000); // This delay is required.
  blueToothSerial.print("\r\n+INQ=1\r\n"); //make the slave bluetooth inquirable
  Serial.println("The slave bluetooth is inquirable!");
  delay(2000); // This delay is required.
  blueToothSerial.flush();
} 

void loop(){
  if(blueToothSerial.available())
     Serial.println(blueToothSerial.read());
  blueToothSerial.write('x');
}
