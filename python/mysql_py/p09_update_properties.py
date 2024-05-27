import p01_connection

mycursor = p01_connection.mydb.cursor()

sql = "UPDATE customers SET name = 'Ram' WHERE name = 'Rudra'"
mycursor.execute(sql)
p01_connection.mydb.commit()
print(mycursor.rowcount,"record(s)")





# Update the properties to the table