
//initialising library.
#include <NewPing.h>


//// Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define MAX_DISTANCE 600
#define Serial_1   3

//int for reading the distance in cm into.
int dist;

const int pwPin1 = 3;
long pulse1, sensor1;

// NewPing setup of pins and maximum distance.
NewPing sonar(pwPin1, MAX_DISTANCE);

void setup() {
  Serial.begin(9600); 
  pinMode(pwPin1, INPUT);
}

 
  
void read_sensor(){
  pulse1 = pulseIn(pwPin1, HIGH);
  dist = pulse1/10;
}

void loop() {
   read_sensor();
//   Serial.println(dist);
  // Serial.println();
  
  // ( setting ping distance in cm to dist variable (0 = outside set distance range).
//  dist = sonar.ping_cm();

  // Wait 50ms between pings (about 20 pings/sec).
  delay(50);

  //here the dist variable is being written in bytes so that is can be read in oF as an int.                       
  Serial.write(dist); 
}
