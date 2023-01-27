import socket

HOST = "127.0.0.1"
PORT = 5005
BUFFER_SIZE = 12000



clientSocket = socket.socket(socket.AF_INET,    #internet
                            socket.SOCK_DGRAM)  #udp

dest = (HOST, PORT)

print("Para sair use CTRL+X\n")
msg = input()
while msg != '\x18':
    clientSocket.sendto(msg.encode('utf-8'), dest)
    msg = input()

clientSocket.close()