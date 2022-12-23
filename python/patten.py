from xmlrpc.client import boolean


n = int(input("enter any nnumber :"))
b=int(input("enter 0 ya 1 :"))

if b==0:
    for i in range(n):
        for j in range(i+1):
            print("*",end=" ")
        print()
elif b == 1:
    for i in range(n):
        for j in range(i,n):
            print("*",end=' ')
        print()

