import p01_connection

mycursor = p01_connection.mydb.cursor()

sql = "TRUNCATE TABLE customers"

mycursor.execute(sql)


# Removes Only The data Inside The table not Table ..