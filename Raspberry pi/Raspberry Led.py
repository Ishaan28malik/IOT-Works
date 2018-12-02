import time
import RPi.GPIO as GPIO 

GPIO.setMOde(GPIO,Board)
GPIO.setup(40,OUTPUT)
while True:
  GPIO.output(40,True)
  time.sleep()
  GPIO.output(40,False)
  time.sleep()
