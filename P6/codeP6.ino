Arduino IoT Cloud Variables description
The following variables are automatically generated and updated when changes are made to the Thing
CloudLight luz;
CloudTemperatureSensor temperatura;
Variables which are marked as READ/WRITE in the Cloud Thing will also have functions which are called
when their values are changed from the Dashboard.
These functions are generated with the Thing and added at the end of this sketch.
*/
#include "thingProperties.h"
  / DHT sensor library - Version: Latest
#include <DHT.h>
#include <DHT_U.h>
#define pin1 15 //ESPECIFICAR PIN TEMP
DHT dht1(pin1, DHT11); //INICIALIZAR DHT
#define PIN_LED 12 //ESPECIFICAR PIN LED

void setup() {
// Initialize serial and wait for port to open:
Serial.begin(9600);
// This delay gives the chance to wait for a Serial Monitor without blocking if none is found
delay(1500);
// Defined in thingProperties.h
initProperties();
// Connect to Arduino IoT Cloud
ArduinoCloud.begin(ArduinoIoTPreferredConnection);
/* The following function allows you to obtain more information related to the state of network and IoT
Cloud connection and error the higher number the more granular information you’ll get.
The default is 0 (only errors).
Maximum is 4
*/
setDebugMessageLevel(2);
ArduinoCloud.printDebugInfo();
}
void loop() {
ArduinoCloud.update();
// Your code here
}
/* Since Temperatura is READ_WRITE variable, onTemperaturaChange() is
executed every time a new value is received from IoT Cloud.
*/
void onTemperaturaChange() {
// Add your code here to act upon Temperatura change
}
/* Since Luz is READ_WRITE variable, onLuzChange() is
executed every time a new value is received from IoT Cloud.
*/
void onLuzChange() {
// Add your code here to act upon Luz change
}
