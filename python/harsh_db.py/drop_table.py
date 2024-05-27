import connection

mycursor = connection.conn.cursor()

sql = "DROP TABLE cars"

mycursor.execute(sql)