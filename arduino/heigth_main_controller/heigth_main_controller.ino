
#define STORE_PRECISION 100.0f
#define SONIC_SENSOR_MAX 1
#define SONIC_BUFFER_SIZE 30
#define SONIC_EMIT_PIN 12
#define SONIC_ECHO_PIN 13
#define DEFAULT_MESSURES 20
#define BUTTON_DELETE 6

#define BUTTON_SELECT 7
#define DEFAULT_HEIGTH 5

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
  sonic_sensor_setup(0, SONIC_EMIT_PIN, SONIC_ECHO_PIN);
  sonic_sensor_set_offset(0);
  button_setup( BUTTON_DELETE);
  button_setup( BUTTON_SELECT);
  lcd_setup();
  lcd_get_baseline_height();
  
}

void loop() {
  int i;
  lcd_print_measuring();
  float distance = sonic_sensor_meassure();
  
  lcd_print_distance(distance);
  // put your main code here, to run repeatedly:
  
  delay(1000);
 
  
}
