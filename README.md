# Temperature-controller-DHT22
ESP8266-LCD1602-DHT22
<img src="https://raw.githubusercontent.com/taikhoancuangoc/Temperature-controller-DHT22/main/hardware_connection_diagram.jpg">
I use kit ESP8266 as main processor, DHT22 as sensor for measuring temperature and humidity. 1602 LCD display shows measured temperature and humidity. The system will work as follows: When power is available the system will be started. The microprocessor block (ESP8266) sends a reset signal to the sensor block (DHT11), then the DHT22 measures the temperature and humidity and returns the 5 byte data byte to the microprocessor block. Those 5 bytes of data include 2 bytes of humidity information, 2 bytes of temperature information and 1 byte of test value. The temperature and humidity values will be displayed on the LCD screen. If the temperature exceeds the allowed threshold (here I set it to 32 degrees Celsius) the red led will be on and the cooling motor will work, otherwise the green led will be on.
There is the result:
<img src="https://raw.githubusercontent.com/taikhoancuangoc/Temperature-controller-DHT22/main/result.jpg">
