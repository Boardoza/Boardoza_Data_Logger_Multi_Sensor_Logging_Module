#include <Wire.h>
#include <SoftwareSerial.h>

// BNO055 UART communication pins
#define PS0_PIN  5
#define PS1_PIN  18
#define RX_PIN   21
#define TX_PIN   22

SoftwareSerial mySerial(RX_PIN, TX_PIN);  // RX, TX pins are defined

uint8_t writeByte(uint8_t reg, uint8_t value) {

    uint8_t buffer[5];
    buffer[0] = 0xAA;    // Start byte
    buffer[1] = 0x00;    // Write command (0x00)
    buffer[2] = reg;     // Register address
    buffer[3] = 0x01;    // Length of data to write (1 byte)
    buffer[4] = value;   // Data to write

    for (int i = 0; i < 5; i++) {
        mySerial.write(buffer[i]);
    }

    unsigned long startMillis = millis();
    while (mySerial.available() < 1) {  // Wait until response arrives
        if (millis() - startMillis > 1000) {  // 1 second timeout
            Serial.println("Write response not received.");
            return 0;  // Return error since no response received
        }
    }

    uint8_t response = mySerial.read();
    if (response == 0xEE) {
        Serial.println("Write operation successful.");
    } else {
        Serial.print("Unexpected response: 0x");
        Serial.println(response, HEX);  // Print the unexpected response
    }

    return value;  // Return the written value upon successful write
}

uint8_t readChipID() {
  uint8_t value = 0;
  uint8_t response = 0;
  uint8_t buffer[6];
  uint8_t count=0;

  buffer[0] = 0xAA;    // Start byte
  buffer[1] = 0x01;    // Read command (0x01)
  buffer[2] = 0x3D;    // CHIP_ID register address (e.g., could be 0x00)
  buffer[3] = 0x01;    // Read 1 byte of data
  buffer[4] = 0xBB;
  buffer[5] = 0x01;

  // Send command via UART
  for (int i = 0; i < 4; i++) {
    mySerial.write(buffer[i]);
  }

  // Wait for response (up to 1 second)
  unsigned long startMillis = millis();
  while (mySerial.available() < 1) {
    if (millis() - startMillis > 1000) {
      Serial.println("Response not received.");
      return 0;
    }
  }

  response=mySerial.read();
  if (response==0xBB);
    {
      count=mySerial.read();
      for(int i = 0; i < count; i++){ 
        value=mySerial.read(); 
      }
    }
  if (response==0xEE)
    {
    Serial.print(mySerial.read(), HEX);    
    }  

  return value; // Return the read CHIP_ID value
}

void setup() {
  pinMode(PS0_PIN, OUTPUT);
  pinMode(PS1_PIN, OUTPUT);

  digitalWrite(PS0_PIN, LOW);   // PS0 = LOW
  digitalWrite(PS1_PIN, HIGH);  // PS1 = HIGH

  Serial.begin(115200);         // Initialize hardware Serial for debugging
  mySerial.begin(115200);

}

void loop() {
  //writeByte(0x3D, 0x01);
  //delay(30);
  uint8_t chipID = readChipID();

  // Print the CHIP_ID value
  Serial.print("CHIP_ID: 0x");
  Serial.println(chipID, HEX);
  //Serial.println(bnoSensor.readByte(0x00));
  delay(250);
}
