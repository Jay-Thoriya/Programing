import mysql.connector as c

mydb = c.connect(host="localhost",user="root",password="jay@81550")
cur = mydb.cursor()
cur.execute("create database using_python")