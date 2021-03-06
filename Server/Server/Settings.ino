void set_time(){
   Wire.begin();
   RTClock.setClockMode(false); // Set the RTC to "24-hour-per-day" format.
   RTClock.setSecond(SerialNumData[7]); 
   RTClock.setMinute(SerialNumData[6]); 
   RTClock.setHour(SerialNumData[5]);   
   RTClock.setDoW(SerialNumData[4]);    
   RTClock.setDate(SerialNumData[3]);   
   RTClock.setMonth(SerialNumData[2]);  
   RTClock.setYear(SerialNumData[1]); 
}

void set_relay_1(){
  EEPROM_write(1, SerialNumData[1]); // Hr
  EEPROM_write(2, SerialNumData[2]); // Min
  EEPROM_write(3, SerialNumData[3]); // Sec
  EEPROM_write(4, SerialNumData[4]); // Capacity lasts 
  EEPROM_write(5, SerialNumData[5]); // ON/OFF
  EEPROM_write(6, SerialNumData[6]); // Auto ON/OFF
}

void set_relay_2(){
  EEPROM_write(7, SerialNumData[1]); // Hr
  EEPROM_write(8, SerialNumData[2]); // Min
  EEPROM_write(9, SerialNumData[3]); // Sec
  EEPROM_write(10, SerialNumData[4]); // Capacity lasts 
  EEPROM_write(11, SerialNumData[5]); // ON/OFF
  EEPROM_write(12, SerialNumData[6]); // Auto ON/OFF
}

void set_relay_3(){
  EEPROM_write(13, SerialNumData[1]); // Hr
  EEPROM_write(14, SerialNumData[2]); // Min
  EEPROM_write(15, SerialNumData[3]); // Sec
  EEPROM_write(16, SerialNumData[4]); // Capacity lasts 
  EEPROM_write(17, SerialNumData[5]); // ON/OFF
  EEPROM_write(18, SerialNumData[6]); // Auto ON/OFF
}

void set_weather_ratio(){
  EEPROM_write(20, SerialNumData[1]); // Temperature ratio
  EEPROM_write(21, SerialNumData[1]); // Humidity ratio
  EEPROM_write(22, SerialNumData[1]); // Air dust ratio
  EEPROM_write(23, SerialNumData[1]); // Air pressure ratio
}

