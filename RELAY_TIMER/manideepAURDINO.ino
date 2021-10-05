#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9,8,7,6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5,4,3,2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int relay=10;
void setup() 
{  
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}
void loop() 
{  
  char key = keypad.getKey();
  
  if (key != NO_KEY)
  {
    Serial.println("the alloted time is ");
    Serial.println(key);
    Serial.println(" ");
    timer(int(key));
  }
  digitalWrite(LED_BUILTIN, LOW);
}



void offrelay()
{
  digitalWrite(LED_BUILTIN, LOW);
}

void timer(int n)
{ 
  
  int i=0;
  digitalWrite(LED_BUILTIN, HIGH);
  for(i=1;i<=n;i++)
  {
    Serial.print(i);
    Serial.print("\n");
    delay(1000);
  }
  offrelay();
}
