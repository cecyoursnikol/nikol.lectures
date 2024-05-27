from threading import *
def file():
    print("This is the child thread")
t = Thread(target = file())
t.start()
print("THis is parent thread")