int led_green =  0;
int led_yellow=1;
int led_red =2;

void setup(){
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
  
  
}

void loop(){
  digitalWrite(led_green, HIGH);
  delay(500);
  digitalWrite(led_green, LOW);
  
  digitalWrite(led_yellow, HIGH);
  delay(500);
  digitalWrite(led_yellow, LOW);
  
  digitalWrite(led_red, HIGH);
  delay(500);
  digitalWrite(led_red, LOW);
}
