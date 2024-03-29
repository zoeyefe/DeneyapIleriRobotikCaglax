#include <Deneyap_Servo.h> 
Servo servosolbacak;
Servo servosagbacak;
Servo servosolayak;
Servo servosagayak;
void setup() {
  servosolbacak.attach(D9); // Sol bacak pin
  servosagbacak.attach(D10, 1); // Sağ bacak pin       
}

void loop() {
 // Sol bacak deneme hareketi.a
  for (int derece = 0; derece <= 180; derece++) {
    servosolbacak.write(derece);
    delay(15); // Yumuşak geçiş için delay değerini ayarla
  }
  for (int derece = 180; derece >= 0; derece--) {
    servosolbacak.write(derece);
    delay(15);
  }

  // Sağ bacak deneme gareketi
  for (int derece = 0; derece <= 180; derece++) {
    servosagbacak.write(derece);
    delay(15); // Yumuşak geçiş için delay değerini ayarla
  }
  for (int derece = 180; derece >= 0; derece--) {
    servosagbacak.write(derece);
    delay(15);
      for (int derece = 0; derece <= 180; derece++) {
    servosolbacak.write(derece);
    delay(15); // Yumuşak geçiş için delay değerini ayarla
  }
  for (int derece = 180; derece >= 0; derece--) {
    servosolayak.write(derece);
    delay(15);
  }

  // Sağ bacak deneme gareketi
  for (int derece = 0; derece <= 180; derece++) {
    servosagayak.write(derece);
    delay(15); // Yumuşak geçiş için delay değerini ayarla
  }
  for (int derece = 180; derece >= 0; derece--) {
    servosagbacak.write(derece);
    delay(15);
  }
  }
}
