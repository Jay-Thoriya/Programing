import mysql.connector as c

mydb = c.connect(host="localhost",user="root",password="jay@81550",database='using_python')
cur = mydb.cursor()
s="select * from book"
cur.execute(s)
result=cur.fetchall()
for rec in result:
    print(rec)