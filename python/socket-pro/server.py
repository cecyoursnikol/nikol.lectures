import socket

s = socket.socket()

s.bind(('',1222))

print("Server is ready Wait for Connection....")

s.listen(1)

c,d = s.accept();   

print('i am connected with ',d)


while True:
    msg = c.recv(1024).decode()
    print("Client :",msg)

    text = input("Me :")
    c.send(text.encode())
