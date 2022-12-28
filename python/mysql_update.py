import mysql.connector as c

mydb = c.connect(host="localhost",user="root",password="jay@81550",database='using_python')
cur = mydb.cursor()
s="update book set Price = Price+100 where Price<400"
cur.execute(s)
mydb.commit()