import socket

s = socket.socket()

s.bind(('localhost',1432))


print("Server createding client is ready to recieve")

s.listen(1)

a , b = s.accept()

print("connected with ",b)

while True:
    msg = a.recv(1024).decode()
    print('client : ',msg)
    
    text = input("Him :")
    a.send(text.encode())