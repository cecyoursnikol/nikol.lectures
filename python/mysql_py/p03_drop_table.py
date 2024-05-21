import p01_connection

mycursor = p01_connection.mydb.cursor()

sql = "DROP TABLE customers"

mycursor.execute(sql)