# Green Container

  Green Container aims reducing food wastage with a mobile app and a commercial food container product with a microcontroller circuit inside.
  
  <p align="center">
  <img width="900" height="600" src="https://i.imgur.com/LuPSUeP.png[/img]">
</p>

# Microcontroller Circuit Inside the Food Container
  The food container circuit tries to detect the amount of spoilage of a food product by the amount of gases that produced by the food such as methane, CO2 and more.
  
  Circuit detects the amount of gases with MQ-4 gas sensor, which detects methane mainly. This selection has been made after the researchs of the gas types that rotten foods produces.

  A microcontroller circuit in the food container sets the color of RGB LED by the spoilage amount of food, red to green. Circuit also have a Wi-Fi module for the mobile app of project. Mobile app have a graph of the amount of spoilage either.


<p align="center">
  <img width="720" height="330" src="https://i.imgur.com/5AzL1vC.png[/img]">
</p>

  I have tested the circuit. I have consciously let two kind of dish to spoil in the food container with circuit. Color of the LED succesfully changed into red from the green by the time, as the dish spoiles. But still i am not sure if some kind of dishes which doesn't produces any gas as it spoiles would make the LED red too.
  
# Mobile App of Food Container

  Mobile app of container firstly requests the name and password of the Wi-Fi network from the user, so the Wi-Fi module at the circuit would be able to connect internet. After that, Wi-Fi module starts to send the data of gas amounts in the container to the "thingspeak.com". Thingspeak makes a graph from the data that it receives, and mobile app shows that graph. 
  So the user would be informed about the spoilage amount of the dish, and tries to eat it before it spoiles. 
 
<p align="center">
  <img width="186" height="378" src="https://i.imgur.com/qucnyZj.png[/img]">
  <img width="186" height="378" src="https://i.imgur.com/dGAX6HA.png[/img]">
</p>
