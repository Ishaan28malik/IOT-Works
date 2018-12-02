#Use of W1ThermSensor by timofurrer.github.io

import time 
from w1thermsensor import W1ThermSensor

sensor= W1ThermSensor()

while True:
  temperature=sensor.gettemperature()
  print("Temperature measured is: %s C" %temperature) # C for Celsius
  
  time.sleep(1)
