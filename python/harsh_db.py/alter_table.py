import connection

mycursor = connection.conn.cursor()
sql = "ALTER TABLE cars  ADD car_prize VARCHAR(255)"

mycursor.execute(sql)


# Add Columns in Table ..