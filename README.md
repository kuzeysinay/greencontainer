# Green Food Container

  Green Food Container aims reducing food wastage with a mobile app and a commercial food container with a microcontroller circuit inside.

  The food container circuit tries to detect the amount of spoilage of a food product by the amount of gases that produced by the food such as methane, CO2 and more.

  A microcontroller circuit in the food container sets the color of RGB LED by the spoilage amount of food, red to green. Circuit also have a Wi-Fi module for the mobile app of project. Mobile app have a graph of the amount of spoilage either.

  I have tested the circuit. I have consciously let two kind of dish to spoil in the food container with circuit. Color of the LED succesfully changed into red from the green by the time, as the dish spoiles. But still i am not sure if some kind of dishes which doesn't produces any gas as it spoiles would make the LED red too.

# Mobile App 

  Mobile app of container firstly requests the name and password of the Wi-Fi network from the user, so the Wi-Fi module at the circuit would be able to connect internet. After that, Wi-Fi module starts to send the data of gas amounts in the container to the "thingspeak.com". Thingspeak makes a graph from the data that it receives, and mobile app shows that graph. 
  So the user would be informed about the spoilage amount of the dish, and tries to eat it before it spoiles. 
 
<p align="center">
  <img width="186" height="378" src="https://i.imgur.com/qucnyZj.png[/img]">
  <img width="186" height="378" src="https://i.imgur.com/dGAX6HA.png[/img]">
</p>


# Yeşil Kap

  Yeşil Kap, bir mikrodenetleyici devresi içeren saklama kabı ve onun mobil uygulaması ile; gıda israfını azaltmayı amaçlar.

  Saklama kabı, yemeğin bozulma miktarını ürünün salgıladığı metan ve karbondioksit gibi gazlarin miktarini algılayarak tespit etmeye çalışır.

  Saklama kabının içindeki mikrodenetleyici devresi yemeğin bozulma miktarına bağlı olarak saklama kabının üstündeki RGB LED'in rengini yeşilden kırmızıya çevirir. Devre ayrıca, mobil uygulama için bir Wi-Fi modülü içerir. Ek olarak, mobil uygulama yemeğin bozulma miktarını gösteren bir grafiğe sahiptir.

  Devreyi test ettim. İki tür yemeği bilinçli olarak saklama kabının içinde bozulmaya terk ettim. LED'in rengi, başarılı bir şekilde yeşilden kırmızıya döndü. Fakat hala, bozulduğunda gaz salgılamayan yemek türlerinin de bu sistem ile çalışıp çalışmayacağından emin degilim.

# Mobil Uygulama

  Saklama kabının mobil uygulaması, ilk olarak kullanıcıdan Wi-Fi ağının adını ve şifresini talep eder; böylelikle saklama kabının devresindeki Wi-Fi modülü internete bağlanabilir. Sonra, Wi-Fi modülü saklama kabının içindeki gaz miktarını "thingspeak.com"a gönderir. Thingspeak bu veriden yola çıkarak bir grafik hazırlar, ve bu grafik mobil uygulamada gösterilir.
 

<p align="center">
  <img width="186" height="378" src="https://i.imgur.com/qucnyZj.png[/img]">
  <img width="186" height="378" src="https://i.imgur.com/dGAX6HA.png[/img]">
</p>



