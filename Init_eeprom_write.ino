/******************************************************
* Small program to perform an initial write to
* a few of the EEPROM memory locations
* below is to set values into EEPROM memory so after
* a power cycle, the values do not need to be reset
*
*WEB  Initial release 20161103
****************************************************/


#include <EEPROM.h>


int GH = 17;  // hours
int GM = 34;  // minutes

int TOnH = 12;  // on at what hour
int TOnM = 17;  // on at what minute

int TOffH = 14;  // off at what hour
int TOffM = 59;  // off at what minute


void setup() {
  // put your setup code here, to run once:

EEPROM.begin(32);  // there may be way past 512 and each will hold a byte that will store a numer between 0 and 255
Serial.begin(9600);

Serial.println("initial read");
  for (int i = 0; i < 31; ++i)
      {
        Serial.println(EEPROM.read(i));
      }


 for (int i = 0; i < 31; ++i) {
      EEPROM.write(i, 0); //clearing all to zero
        }
        EEPROM.commit();
        
 EEPROM.write(0, GH);  // individual writes
 EEPROM.write(1, GM);
 EEPROM.write(2, TOnH);
 EEPROM.write(3, TOnM);
 EEPROM.write(4, TOffH);
 EEPROM.write(5, TOffM);

 EEPROM.commit();

Serial.println("Readback");
for (int i = 0; i < 31; ++i)
      {
        Serial.println(EEPROM.read(i));
      }


}

void loop() {
  // put your main code here, to run repeatedly:

}
