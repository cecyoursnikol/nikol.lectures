import p01_connection

mycursor = p01_connection.mydb.cursor()

sql = "DELETE FROM customers WHERE address = 'Highway 21'"

mycursor.execute(sql)
p01_connection.mydb.commit()

print(mycursor.rowcount,"record(s) deleted")





# delete the properties