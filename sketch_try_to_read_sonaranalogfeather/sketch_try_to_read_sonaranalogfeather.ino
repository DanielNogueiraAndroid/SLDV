const int anPin = A5;
const int vMotor = 11;
long anVolt, mm, inches;

void setup() {
Serial.begin(9600);
// initialize digital pin LED_BUILTIN as an output.
pinMode(vMotor, OUTPUT);
}

void read_sensor(){
anVolt = analogRead(anPin);
mm = anVolt * 5;
inches = mm/25.4;
}

void print_range(){
Serial.print("S1");
Serial.print("=");
Serial.print(mm);
Serial.print(" ");
Serial.println(inches);
}

void loop() {
read_sensor();
print_range();
//digitalWrite(vMotor, HIGH);
//delay(20-(mm/200));

digitalWrite(vMotor, LOW);
delay(100);

}
