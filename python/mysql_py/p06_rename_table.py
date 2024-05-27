import p01_connection

mycursor = p01_connection.mydb.cursor()

sql = "RENAME TABLE unknown to person"

mycursor.execute(sql)

# Show Table

mycursor.execute("SHOW TABLES")

for a in mycursor:
    print(a)

# rename the table 