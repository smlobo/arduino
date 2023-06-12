

// the pin number of the hall effect output
const int sensorPin = 2;

// the number of the LED pin
//const int ledPin =  12;

// State of the hall effect sensor
int sensorState = 0;

// Count magnet passes
int count = 0;

// State of the LED
//int ledState = 0;

void setup() {
  // put your setup code here, to run once:

  // initialize the LED pin as an output:
//  pinMode(ledPin, OUTPUT);
  // initialize the sensor pin as an input:
  pinMode(sensorPin, INPUT);

  // Initialize LED
//  ledState = 0;
//  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the state of the pushbutton value:
  sensorState = digitalRead(sensorPin);

  // check if the sensor detects a magnetic field
  if (sensorState == LOW) {
    count++;
    // Log to serial port
    Serial.write("Count: ");
    Serial.println(count);
//    Serial.write("\n");
    
    // swap LED
//    if (ledState == 0) {
//      ledState = 1;
//      digitalWrite(ledPin, HIGH);
//    }
//    else {
//      ledState = 0;
//      digitalWrite(ledPin, LOW);      
//    }
  }

  // Wait
  delay(10);
}
