import connection

mycursor = connection.conn.cursor()

sql = "DELETE FROM supercars WHERE car_name = 'porshe'"
mycursor.execute(sql)
connection.conn.commit()

print(mycursor.rowcount,"records deleted")