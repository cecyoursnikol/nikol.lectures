import p01_connection

mycursor = p01_connection.mydb.cursor()
mycursor.execute("SELECT * FROM customers")

myresult = mycursor.fetchall()

for x in myresult:
    print(x)





# Fatch The data from databas(table)