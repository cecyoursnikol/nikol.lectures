def new():
    n = int(input("Eneter a number above 10 :"))
    
    if n < 10:
        print("Correct")
    else:
        new()
        
new()