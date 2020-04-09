#!/usr/bin/env python

import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

print("Listening")
s.bind(('localhost', 50000))
s.listen(1)

conn,addr = s.accept()
print("Connected")

while True:
	data = conn.recv(1024)

	if not data:
		break
	conn.sendall(data)

