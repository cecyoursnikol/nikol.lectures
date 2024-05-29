def add(x,y):  #formal para
    print(x+y)
    
add(5,5) #actual arguments


def yash(name = "dhoni"):  #default argus
    # name = "virat"
    print(name)
    
yash()
yash("me")



def name(name , fathers_name):      #keywords arguments
    
    print(name)
    print(fathers_name)
    
name(fathers_name="manish" , name="shinchan")