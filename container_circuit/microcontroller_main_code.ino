String wifi_name ="xyz";
String wifi_password ="xyz";
String IP ="xyz";
float gas;

#define green 5      // 5 is the pin for green 
#define red 7  //7 is the pin for red


#define methane A1     // A1 is the pin for methane sensor

void setup(){
  
  pinMode(green, OUTPUT);    // green is a output for microcontroller
  pinMode(red, OUTPUT);  //red is a output for microcontroller
  
  Serial.begin(115200); // opening the serial port
                        // baudRate of ESP is 115200, so serial port's either
  
  Serial.println("AT"); //check if connection with ESP succesfull or not
  
  delay(3000); //waiting 3 seconds for connection
 analogReference(INTERNAL);
  if(Serial.find("OK")){         //if connection is succesfull, wifi module is replying the "AT" command with "OK" 
     Serial.println("AT+CWMODE=1"); //making the wifi mode of module STA, so the module can connect with other networks
     delay(2000);
     String connection_command=String("AT+CWJAP=\"")+wifi_name+"\",\""+wifipassword+"\"";
    Serial.println(connection_command);
    
     delay(5000);
 }

}

void loop(){
  
  int methane_value=analogRead(methane);   // setting a valuable for the methane value
  Serial.println(methane_value);         // starting the methane value's serial communication
  delay(50);                           
  

  
  methane_value=map(methane_value, 370, 1023, 0, 255); // min487 ve max877 arasında gelen metan verisini methane sensor is sending 370 for minimum and 1023 for maximum,
                                                  // so making that values between 0-255 so LED can work normally
  
  analogWrite(green, 255 - methane_value);  // if methane value is 0, so the food is fresh, the green leg of LED will be full 
  analogWrite(red, 255- methane_value);  // if methane value is 255, so the food is spoiled, the red lef of LED will be full
  
  float gas = analogRead(methane); 
 Serial.println(gas);
 sicaklik_yolla(gas);
 // dakikada 1 güncellenmesi için 1 dakika bekle
 delay(500);
}
  
   void sicaklik_yolla(float gas){
 Serial.println(String("AT+CIPSTART=\"TCP\",\"") + IP + "\",80");  // This line is for connecting ThingSpeak server
                                                                   // requesting allowance for connecting the server 
                                                                   
 delay(1000);
  if(Serial.find("Error")){     //if we cannot connect to the server, it says "error"
   Serial.println("AT+CIPSTART Error");
    return;
  }
  
 String value_to_send = "GET (USER'S API KEY)=";   // THE THINGSPEAK API KEY HERE IS DIFFERENT FOR EVERY SINGLE USER
 value_to_send += (int(gas));                                      // methane value is the value that we want to send to THINGSPEAK and to the mobile app 
 value_to_send += "\r\n\r\n";                                             
  delay(3000);                                                                                
 
 Serial.print("AT+CIPSEND=");                    //we're using this when we'll send data, firstly we let the thingspeak know how digit is the data that we sent
 Serial.println(value_to_send.length()+2);       
 
 delay(1000);
 
 if(Serial.find(">")){                    
                                       
 Serial.print(value_to_send);
 Serial.print("\r\n\r\n");
 }
 else{
 Serial.println("AT+CIPCLOSE");
 }
}
