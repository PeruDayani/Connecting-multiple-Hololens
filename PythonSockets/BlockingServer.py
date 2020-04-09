#!/usr/bin/env python

import select, socket, sys, queue

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.setblocking(0)
server.bind(('localhost', 50000))
server.listen(5)

inputs = [server]

clients = {}

outputs = []



message_queues = {}

while inputs:

    readable, writable, exceptional = select.select(
        inputs, outputs, inputs)

    print(' ')
    print("writable")
    print(writable) 
    print("readable")
    print(readable) 
    print("inputs")
    print(inputs) 

    for s in readable:

        if s is server:
            connection, client_address = s.accept()
            connection.setblocking(0)
            inputs.append(connection)
            print("client connected")
            message_queues[connection] = queue.Queue()
        else:
            data = s.recv(1024)
            if data:
                message_queues[s].put(data)
                if s not in outputs:
                    outputs.append(s)
                    print("added to outputs")
            else:
                if s in outputs:
                    outputs.remove(s)
                    print("remove from outputs via readable")
                inputs.remove(s)
                s.close()
                del message_queues[s]

    for s in writable:
        try:
            next_msg = message_queues[s].get_nowait()
        except queue.Empty:
            print("remove from outputs via writable")
            outputs.remove(s)
        else:
            print('sending message')
            s.send(next_msg)

    for s in exceptional:
        inputs.remove(s)
        if s in outputs:
            outputs.remove(s)
        s.close()
        del message_queues[s]





