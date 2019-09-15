#include <WiFi.h> // Include the Wi-Fi library
const char* ssid = "Eon33i"; // SSID
const char* password = "11111111"; // wifi password
int LED_BUILTIN = 2;
void setup() {
  pinMode (LED_BUILTIN, OUTPUT);
  Serial.begin(115200); // Start the Serial Com
  delay(10);
  Serial.println('\n');
  Serial.print("Connecting to ");
  Serial.print(ssid);
  
  WiFi.begin(ssid,password); // Connect to network
 
  while (WiFi.status() != WL_CONNECTED) { // Wait
    delay(500);
    Serial.print('.');
  }
  Serial.println('\n');
  Serial.println("Connection established!");
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP()); // Send the IP
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.print("+ ");
}
