def one():
    a = int(input('Eneter the value between 1-10:'))
    if(a<10):
        print("Hurray! Ur value is ..",a)
    else:
        one()

one()