//Coded By: Angelo Casimiro (4/27/14)
//Voice Activated Arduino (Bluetooth + Android)
//Feel free to modify it but remember to give credit
#include <SoftwareSerial.h>
#include <Process.h>

SoftwareSerial BT(10, 11); //RX, TX
String voice;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  Serial.println("Begin");
} 

//-----------------------------------------------------------------------//  
void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = BT.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }  
  if (voice.length() > 0) {
    Serial.println(voice);

  if(voice == "*start") 
  {
    Serial.print("start");
  }
  if(voice == "*open browser")
  {
     Process p;
     p.begin("C:\\Users\Anna\Documents\PythonScripts\WebCommands\openbrowser.py");
     //p.addParameter(voice);
     p.run();
     p.runShellCommand("python C:\\Users\Anna\Documents\PythonScripts\WebCommands\openbrowser.py"); 
     Serial.println("browser opened");
  }
  else if(voice == "*stop") 
  {
    Serial.print("stop");
  }
   

voice="";}} //Reset the variable after initiating
