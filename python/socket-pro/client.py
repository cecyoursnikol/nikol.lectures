import socket

s = socket.socket()

s.connect(('127.0.0.1',1222))

print('I am connected')


while True:
    text = input("Me :")
    s.send(text.encode())

    msg = s.recv(1024).decode()
    print('Server :',msg)