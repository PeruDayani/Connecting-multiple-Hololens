#!/usr/bin/env python

import socket, time, sys

name = sys.argv[1]
loop = int(sys.argv[2])

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.connect(('localhost', 50000))


i = 0

dataSend = name + " 0"
dataSend = dataSend.encode()
s.sendall(dataSend)

dataRecv = s.recv(1024)
dataRecv = dataRecv.decode()
print('Received :' + repr(dataRecv))

while i < loop:
	time.sleep(3)

	i += 1

	dataSend = name + " " + str(i)
	dataSend = dataSend.encode()
	s.sendall(dataSend)

	dataRecv = s.recv(1024)
	dataRecv = dataRecv.decode()
	print('Received :' + repr(dataRecv))
	
s.close()