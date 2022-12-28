import mysql.connector as c
mydb = c.connect(host='localhost',user='root',password='jay@81550')
if mydb.is_connected():
    print("Successfully Connected...")