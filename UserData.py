import socket
import sys

UDP_IP = "192.168.0.162"
UDP_PORT = 3333
PREFIX = bytes.fromhex("F2")
MESSAGE = ",TEST,1,2,3,4,5,6"
BUFFER = PREFIX + bytes(MESSAGE, "utf-8")

print("UDP target IP: %s" % UDP_IP)
print("UDP target port: %s" % UDP_PORT)
print("message: %s" % MESSAGE)

sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP
sock.sendto(BUFFER, (UDP_IP, UDP_PORT))
