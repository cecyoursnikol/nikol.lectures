import socket

s = socket.socket()

s.connect(('127.0.0.1',1432))

print("client connected")


while True:
    text = input("him :")
    s.send(text.encode())
    
    msg = s.recv(1024).decode()
    print("Server :",msg)