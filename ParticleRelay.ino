int relayOne 0
int relayTwo = D1;
int relayThree = D2;
int relayFour = D3;
int LED = D7;

void setup() {
   Spark.function("relayControlOne", relayControlOne);
   Spark.function("relayControlTwo", relayControlTwo);
   Spark.function("relayControlThree", relayControlThree);
   Spark.function("relayControlFour", relayControlFour);
   pinMode(relayOne, OUTPUT);
   pinMode(relayTwo, OUTPUT);
   pinMode(relayThree, OUTPUT);
   pinMode(relayFour, OUTPUT);
   pinMode(LED, OUTPUT);
}

void loop(void) {
    // Check status of Particle Photon
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
}

 int relayControlOne(String args) {
     if (args == "ON") digitalWrite(relayOne, LOW);
     if (args == "OFF") digitalWrite(relayOne, HIGH);
     int statusCode = 1;
     return statusCode;
 }
 int relayControlTwo(String args) {
     if (args == "ON") digitalWrite(relayTwo, LOW);
     if (args == "OFF") digitalWrite(relayTwo, HIGH);
     int statusCode = 1;
     return statusCode;
 }
 int relayControlThree(String args) {
     if (args == "ON") digitalWrite(relayThree, LOW);
     if (args == "OFF") digitalWrite(relayThree, HIGH);
     int statusCode = 1;
     return statusCode;
 }
 int relayControlFour(String args) {
     if (args == "ON") digitalWrite(relayFour, LOW);
     if (args == "OFF") digitalWrite(relayFour, HIGH);
     int statusCode = 1;
     return statusCode;
 }