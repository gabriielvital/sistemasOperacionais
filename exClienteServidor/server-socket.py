import socket

HOST = "127.0.0.1"
PORT = 5005
BUFFER_SIZE = 12000

serverSocket = socket.socket(socket.AF_INET,    #internet
                            socket.SOCK_DGRAM)  #udp

orig = (HOST, PORT)
serverSocket.bind(orig)

while True:
        msg, cliente = serverSocket.recvfrom(BUFFER_SIZE)
        print(cliente, msg.decode('utf-8'))