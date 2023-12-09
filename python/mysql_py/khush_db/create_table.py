import p01_connection

# Create Table 
mycursor = p01_connection.db.cursor()

mycursor.execute("CREATE TABLE students1 (rollno VARCHAR(255), name VARCHAR(255))")
# Show Table
mycursor.execute("SHOW TABLES")

for x in mycursor:
    print(x)