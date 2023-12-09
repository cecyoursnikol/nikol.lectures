import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  password="",
  database="python"
)


# Creating Table
mycursor  = mydb.cursor()

# mycursor.execute("CREATE TABLE customers (name VARCHAR(255), address VARCHAR(255))")

# Show Table

mycursor.execute("SHOW TABLES")

for a in mycursor:
    print(a)




# Insert values 

sql = "INSERT INTO customers (name , address) VALUES (%s, %s)"
val =  ("Rudra" , "Information Technology")

mycursor.execute(sql, val)
mydb.commit()
print(mycursor.rowcount, "Values Inserted.")