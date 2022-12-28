import mysql.connector as c

mydb = c.connect(host="localhost",user="root",password="jay@81550",database='using_python')
cur = mydb.cursor()
s="delete from book where Tital='css'"
cur.execute(s)
mydb.commit()