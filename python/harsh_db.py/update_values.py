import connection

mycursor = connection.conn.cursor()

sql = "UPDATE supercars SET name = 'endeavour' WHERE name = 'mustang'"
mycursor.execute(sql)
connection.conn  .commit()
print(mycursor.rowcount,"record(s)")
