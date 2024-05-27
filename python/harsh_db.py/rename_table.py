import connection 

mycursor = connection.conn.cursor()

sql = "RENAME TABLE cars to  supercars"

mycursor.execute(sql)

mycursor.execute("SHOW TABLES")
 
for a in mycursor:
    print(a)