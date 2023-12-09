import p01_connection

mycursor = p01_connection.mydb.cursor()
sql = "ALTER TABLE customers  ADD stream VARCHAR(255)"

mycursor.execute(sql)


# Add Columns in Table ..