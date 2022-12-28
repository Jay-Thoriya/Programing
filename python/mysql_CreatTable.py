import mysql.connector as c

mydb = c.connect(host='localhost',user='root',password='jay@81550',database='using_python')
cur = mydb.cursor()
s="create table book(BookId integer(4),Tital varchar(20),Price float(5,2))"
cur.execute(s)