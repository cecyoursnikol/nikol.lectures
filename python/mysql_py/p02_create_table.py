import p01_connection


# Creating Table
mycursor  = p01_connection.mydb.cursor()

mycursor.execute("CREATE TABLE Students (name VARCHAR(255), address VARCHAR(255))")

# Show Table

mycursor.execute("SHOW TABLES")

for a in mycursor:
    print(a)        