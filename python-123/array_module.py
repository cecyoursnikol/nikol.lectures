import array


arr = array.array('i', [1, 2, 3, 4, 5])

print(arr[0])  
print(arr[2])  

arr[0] = 10
print(arr)  

arr.append(6)
print(arr)  



arr.remove(3) 
print(arr)  



print(len(arr))  


for element in arr:
    print(element)
