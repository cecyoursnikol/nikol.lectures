gender = str(input("ENter ur gender:"))

if(gender=="male"):
    print('Ur gender is male..')
    print('Now enter ur Age')
    age = int(input("Enter ur age"))

    if(age >=21):
        print("Hurry u are eligible")

    else:
        print("bache school clg jaaa")

elif(gender=="female"):
    print("Ur gender is female")
    print('Now enter ur Age')
    age = int(input("Enter ur age"))

    if(age >=18):
        print("Hurry u are eligible")

    else:
        print("bache school clg jaaa")

else:
    print("sorry transcluton is not allowed")