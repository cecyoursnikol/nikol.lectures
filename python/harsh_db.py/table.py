import connection

ob = connection.conn.cursor()

ob.execute("CREATE TABLE cars (car_name VARCHAR(255),car_brand VARCHAR(255))")

ob.execute("SHOW TABLES")

for a in ob:
    print(a)
