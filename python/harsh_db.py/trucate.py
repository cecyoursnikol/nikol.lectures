import connection

mycursor = connection.conn.cursor()

sql = "TRUNCATE TABLE cars"

mycursor.execute(sql)