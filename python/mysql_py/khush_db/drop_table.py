import p01_connection

mycursor = p01_connection.db.cursor()

sql = "DROP TABLE students"

mycursor.execute(sql)