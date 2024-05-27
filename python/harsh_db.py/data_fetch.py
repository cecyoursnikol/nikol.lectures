import connection

mycursor = connection.conn.cursor()

mycursor.execute("SELECT * FROM  supercars")

myresult = mycursor.fetchall()

for a in myresult:
    print(a)