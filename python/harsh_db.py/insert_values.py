import connection

ob = connection.conn.cursor()

a = ("INSERT INTO supercars (car_name , car_brand , car_prize)  VALUEs (%s,%s,%s)")
values = ("porshe","turboo","8500000")
ob.execute(a,values)
connection.conn.commit()

print(ob.rowcount,"VAlues Inserted ")