//#include <TM1637.h>
#include <TM1637Display.h>

/*!
 * @file readDHT11.ino
 * @brief DHT11 is used to read the temperature and humidity of the current environment. 
 *
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author [Wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2018-09-14
 * @url https://github.com/DFRobot/DFRobot_DHT11
 */

#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 8
// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3

TM1637Display display(CLK, DIO);

void setup(){
  Serial.begin(9600);
   pinMode(9,OUTPUT);
 
}



void loop(){
 
  DHT.read(DHT11_PIN);
  Serial.print("temp:");
  Serial.print(DHT.temperature);
  delay(1000);
  Serial.print("  humi:");
  Serial.println(DHT.humidity);
  delay(1000);
   display.clear();
  //delay(1000);
  //uint8_t data[] = { 0xff, 0xff, 0xff, 0xff };
  display.setBrightness(0xff);
  display.showNumberDec(DHT.temperature,false);  // Expect: 04__
   //delay(2000);
}

void loop {
  
  if(DHT.temperature<35) 
  {
    digitalWrite(9,HIGH);
   delay(100);
   digitalWrite(9,LOW);
   delay(100);
  } 
}
  
  
