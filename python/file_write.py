f = open('file.txt', "w")
f.write("Thiss is ectended content")
f.close()
f = open('file.txt',"r")
print(f.read())
f.close()