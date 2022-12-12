#var=90

def change() :
    global var 
    var=10
    char=40
    print(var,char)

#print("befor calling function var = ",var)
#change()
#print("After calling function var = ",var)

x =20
def frist() :
    x=80
    def secoud() :
        global x
        x=100

    print("befor calling function var = ",x)
    secoud()
    print("After calling function var = ",x)

print(x)
frist()
print(x)