#include <EEPROM.h>
void setup(){
  Serial.begin(9600);
  }
  int add;
  int inputData;

  void loop(){
    String buffer = "";
    buffer = Serial.readString();
    if (buffer.startsWith("read")){
      address = buffer.substring(buffer.indexOf(' ')+1).toInt();
      Serial.print("Read from Address: ");
      Serial.print(add);
      Serial.println();
      Serial.println(EEPROM.read(address));
      } else if(buffer.startsWith("write")){
        address = buffer.substring(6,7).toInt();
        dataToWrite = buffer.substring(8).toIn();
        Serial.print("Ready to Write in the Memory: ");
        Serial.print(inputData);
        Serial.println();
        Serial.print("To Address: ");
        Serial.print(address);
        Serial.println();
        EEPROM.write(address,inputData);
        }
    }
