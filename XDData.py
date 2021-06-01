import socket
import sys
import time

UDP_IP = "127.0.0.1"
UDP_PORT = 20000
PREFIX = bytes.fromhex("F3")

sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP

print("UDP target IP: %s" % UDP_IP)
print("UDP target port: %s" % UDP_PORT)

frame = 1

                     
while(1):
    frame += 1
    if frame > 24:
        frame = 1
    MESSAGE = ",Premista28-100mmT2.9 F,5600,13,100,120,68122,5203,6066,22.3,0,7,11.6,16.2,18.5,20.8,23.2,100,98.4,95.6,91.4,88.7,83.5,66.2,1.7445e-02,9.9871e-03,0.0000e+00,0.0000e+00,-3.4797e-03,0.0000e+00,0.0000e+00,0.0000e+00,5.0000e-01,5.0000e-01,04:34:15:01,0,24,FUJINON,F08000184,FUJIFILM Corporation,6.52"
    print("message: %s" % MESSAGE)
    BUFFER = PREFIX + bytes(MESSAGE, "utf-8")
    sock.sendto(BUFFER, (UDP_IP, UDP_PORT))
    time.sleep(.0416)
