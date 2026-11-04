// Smart Motion Light with Battery Protection (ESP32)

#define PIR_PIN 27
#define RELAY_PIN 26
#define VOLT_PIN 35
#define CURR_PIN 34

float LOW_CUT = 3.3;
float HIGH_ON = 3.6;

bool batteryOK = true;
bool motionSeen = false;
unsigned long lastMotion = 0;
const unsigned long HOLD = 10000;

float zeroV = 2.5;

float readAvg(int pin) {
long sum = 0;
for (int i = 0; i < 20; i++) { sum += analogRead(pin); delay(2); }
return sum / 20.0;
}

void setup() {
Serial.begin(115200);
pinMode(PIR_PIN, INPUT);
pinMode(RELAY_PIN, OUTPUT);
digitalWrite(RELAY_PIN, HIGH);
analogSetAttenuation(ADC_11db);
delay(500);
zeroV = readAvg(CURR_PIN) * 3.3 / 4095.0;
}

void loop() {

float vBat = readAvg(VOLT_PIN) * 3.3 / 4095.0 * 5.0;

float vCurr = readAvg(CURR_PIN) * 3.3 / 4095.0;
float amps = (vCurr - zeroV) / 0.185;
if (amps < 0) amps = 0;

if (vBat < LOW_CUT) batteryOK = false;
if (vBat > HIGH_ON) batteryOK = true;

if (digitalRead(PIR_PIN) == HIGH) { lastMotion = millis(); motionSeen =
true; }
bool motion = motionSeen && (millis() - lastMotion < HOLD);

bool loadOn = motion && batteryOK;
digitalWrite(RELAY_PIN, loadOn ? LOW : HIGH);

Serial.printf("Battery: %.2f V | Current: %.2f A | Motion: %s | Battery:
%s | Light: %s\n",
vBat, amps, motion ? "YES" : "NO",
batteryOK ? "OK" : "LOW", loadOn ? "ON" : "OFF");
delay(300);
}
