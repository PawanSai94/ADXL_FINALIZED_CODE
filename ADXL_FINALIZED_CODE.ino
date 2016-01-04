 
//#include <Adafruit_GFX.h>    // Core graphics library
//#include "SWTFT.h" // Hardware-specific library


//SWTFT tft;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

const int ap1 = A12; 
const int ap2 = A11;
const int ap3 = A10;

int sv1 = 0;        
int ov1 = 0;    
int sv2 = 0;      
int ov2= 0;      
int sv3 = 0;       
int ov3= 0; 

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void setup(void) {
  Serial.begin(9600);
  
}



void loop ()
{
  analogReference(EXTERNAL);    //connect 3.3v to AREF
  // read the analog in value:
  sv1 = analogRead(ap1);            
  // map it to the range of the analog out:
  ov1 = map(sv1, 0, 1023, 0, 255);  
  // change the analog out value:
  delay(2);                     
  //
  sv2 = analogRead(ap2);            
  
  ov2 = map(sv2, 0, 1023, 0, 255); 
 // 
  delay(2);                 
  //
  sv3 = analogRead(ap3);            
  
  ov3 = map(sv3, 0, 1023, 0, 255);  
  /*
  // print the results to the serial monitor:
  Serial.print("Xsensor1 = " );                       
  Serial.print(sv1);      
 // tft.setTextColor(WHITE);  tft.setTextSize(3);
  // tft.println("X-axis");
   //tft.setTextColor(YELLOW);  tft.setTextSize(3);
 // tft.println(ov1);
  Serial.print("\t output1 = ");      
  Serial.println(ov1);   
 
  Serial.print("Ysensor2 = " );                       
  Serial.print(sv2);  
 //  tft.setTextColor(WHITE);  tft.setTextSize(3);
   //tft.println("Y-axis");
   //tft.setTextColor(YELLOW);  tft.setTextSize(3);
 // tft.println(ov2); 
  Serial.print("\t output2 = ");      
  Serial.println(ov2);   
  
  Serial.print("Zsensor2 = " );                       
  Serial.print(sv3);  
 //  tft.setTextColor(WHITE);  tft.setTextSize(3);
   //tft.println("Y-axis");
   //tft.setTextColor(YELLOW);  tft.setTextSize(3);
 // tft.println(ov2); 
  Serial.print("\t output2 = ");      
  Serial.println(ov3);*/  
 
 char sz[32];
  Serial.println("X\t Y\t Z\t x\t y\t z");
    sprintf(sz, "%d\t%d\t%d \t%d\t%d\t%d\n ",
        sv1, sv2, sv3, ov1, ov2, ov3);
    Serial.println(sz); 

   

  delay(2000);                     
  
}



