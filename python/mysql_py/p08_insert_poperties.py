import p01_connection

mycursor  = p01_connection.mydb.cursor()


# Insert values 

sql = "INSERT INTO customers (name , address) VALUES (%s, %s)"
val =  ("Rudra" , "Information Technology")

mycursor.execute(sql, val)
p01_connection.mydb.commit()
print(mycursor.rowcount, "Values Inserted.")





# insert the values to the database