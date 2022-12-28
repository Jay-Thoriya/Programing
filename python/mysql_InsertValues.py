import mysql.connector as c

mydb = c.connect(host="localhost",user="root",password="jay@81550",database='using_python')
cur = mydb.cursor()
s="insert into book (BookId , Tital , Price)  values(%s,%s,%s)"
b1=(1,'python',385) #----> singl line inset
books=[(2,"html",564),(3,"mysql",766),(4,"java",435),(5,"c++",643),(6,"css",352)] #---.> maltiple line insert
cur.executemany(s,books)
mydb.commit()