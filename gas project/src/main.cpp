/*
#include <Arduino.h>
#define LED 25
#define RELAY_PIN 13 
#define buzzer 2

void setup() 
{
  Serial.begin(115200);
  Serial.println("MiCS-5524 Gas detection starts!");
  Serial.println("No Gas Leakage detected yet...");
  pinMode(A0, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
 
void loop() 
{ 
  int reading = digitalRead(A0);
  Serial.println(reading);
  if(reading > 0){
    Serial.println("Gas Leakage detected !!!");
    digitalWrite(LED,HIGH);
    digitalWrite(RELAY_PIN, HIGH); // turn on fan 10 seconds
    digitalWrite(buzzer, HIGH);
    delay(10000);
   }
   else { 
    digitalWrite(buzzer, LOW);
    digitalWrite(LED,LOW);
    digitalWrite(RELAY_PIN, LOW);  // turn off fan .5 seconds
    delay(500);
   }
  
  delay(1000);
}
*/
#include <Arduino.h>
#define LED 25
#define RELAY_PIN 13 
#define buzzer 2
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>

const char *ssid = "Guna";
const char *password = "testpassword";
 
WiFiServer server(80);

void setup() 
{
  Serial.begin(115200);
  WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  server.begin();

  Serial.println("Server started");
  Serial.println("MiCS-5524 Gas detection starts!");
  Serial.println("No Gas Leakage detected yet...");
  pinMode(A0, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
 
void loop() 
{ 
  int reading = digitalRead(A0);
  int rod = 0;
  Serial.println(reading);
  if(reading > 0){
    Serial.println("Gas Leakage detected !!!");
    rod = 1;
    digitalWrite(LED,HIGH);
    digitalWrite(RELAY_PIN, HIGH); // turn on fan 10 seconds
    digitalWrite(buzzer, HIGH);
    delay(10000);
   }
   else { 
    rod = 0;
    digitalWrite(buzzer, LOW);
    digitalWrite(LED,LOW);
    digitalWrite(RELAY_PIN, LOW);  // turn off fan .5 seconds
    delay(500);
   }
  WiFiClient client = server.available();
  if (client) {
    Serial.println("new client");
    // an http request ends with a blank line
    boolean currentLineIsBlank = true;
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        // if you've gotten to the end of the line (received a newline
        // character) and the line is blank, the http request has ended,
        // so you can send a reply
        if (c == '\n' && currentLineIsBlank) {
          // send a standard http response header
          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println("Connection: close");  // the connection will be closed after completion of the response
          client.println("Refresh: 5");  // refresh the page automatically every 5 sec
          client.println();
          client.println("<!DOCTYPE HTML>");
          client.println("<html>");
          if (rod == 1)
          {
            /* code */
            client.println("Gas Leakage detected!!!");
          }
          else
          {
            client.println("No Gas Leakage detected. You're safe.");
          }
          
          
          
          client.println("</html>");
          break;
        }
        if (c == '\n') {
          // you're starting a new line
          currentLineIsBlank = true;
        } else if (c != '\r') {
          // you've gotten a character on the current line
          currentLineIsBlank = false;
        }
      }
    }
  }
  delay(1000);
}
