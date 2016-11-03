# Arduino_Garage_Opener_with_Timers
Arduino Garage Door Opener with 2nd Relay and Browser Adjustable timers

Follow on to the earlier project with a few modifications.
  1.  2nd browser page that will allow adjustments to the timer/alarms
  2.  Timer/alarm time now stored in the EEPROM so a power off cycle will not reset them
  3.  2nd relay added for a ON/OFF control at certain times.  Checkbox on the browser will
       also activate the relay.
       
Inside of the arduino folder, create a DATA folder for the two html files.

The two htm files will need to be uploaded into flash before the main *.ino is uploaded.

Extra *.ino file is how to initially set the EEPROM to reasonable values
