import p01_connection

mycursor = p01_connection.db.cursor()


sql = "INSERT INTO students1 (rollno, name) VALUES (%s, %s)"
value = ("25","Khush")


mycursor.execute(sql,value)
p01_connection.db.commit()


print(mycursor.rowcount,"Value Updated")