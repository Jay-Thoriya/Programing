n = int(input("Enter any intiger number : "))

""" 
 
  print * petan like :

  *
  * *
  * * *
  * * * *
  * * * * * 

"""

for i in range(n):
    for j in range(i+1):
        print("#",end=" ")
    print()

print("\n")
print("\n")

for i in range(n):
    for j in range(i,n):
        print("#",end=' ')
    print()

print("\n")
print("\n")

for i in range(n):
    for j in range(i,n):
        print(" ",end=' ')

    for j in range(i+1):
        print("#",end=' ')
    print()

print("\n")
print("\n")

for i in range(n):
    for j in range(i+1):
        print(" ",end=' ')
    for j in range(i,n):
        print("#",end=' ')
    print()

print("\n")
print("\n")

for i in range(n):
    for j in range(i,n):
        print(" ",end=' ')
    for j in range(i):
        print("#",end=' ')
    for j in range(i+1):
        print("#",end=' ')
    print()

print("\n")
print("\n")

for i in range(n):
    for j in range(i+1):
        print(" ",end=' ')
    for j in range(i,n-1):
        print("#",end=' ')
    for j in range(i,n):
        print("#",end=' ')
    print()

print("\n")
print("\n")


for i in range(n-1):
    for j in range(i,n):
        print(" ",end=' ')
    for j in range(i):
        print("#",end=' ')
    for j in range(i+1):
        print("#",end=' ')
    print()

for i in range(n):
    for j in range(i+1):
        print(" ",end=' ')
    for j in range(i,n-1):
        print("#",end=' ')
    for j in range(i,n):
        print("#",end=' ')
    print()



"""

now print diffrent type of petan like :

1            1          1          1           1
1 1          1 2        2 2        2 2         2  3
1 1 1        1 2 3      3 3 3      1 1 1       4  5  6
1 1 1 1      1 2 3 4    4 4 4 4    2 2 2 2     7  8  9  10
1 1 1 1 1    1 2 3 4 5  5 5 5 5 5  1 1 1 1 1   11 12 13 14 15

"""

for i in range(n):
    for j in range(i+1):
        print("1",end=' ')
    print()

print("\n")
print("\n")


p=5
for i in range(n):
    for j in range(i,n):
        print(p,end=' ')
    p-=1
    print()

print("\n")
print("\n")

for i in range(n):
    p=1
    for j in range(i+1):
        print(p,end=' ')
        p+=1
    print()

print("\n")
print("\n")

for i in range(n):
    for j in range(i+1):
        if (i%2==0):
            print("a",end=' ')
        else:
            print("b",end=' ')
    print()

print("\n")
print("\n")

for i in range(n):
    p=1
    for j in range(i,n):
        print(" ",end=' ')
    for j in range(i):
        print(p,end=' ')
        p+=1
    for j in range(i+1):
        print(p,end=' ') 
        p-=1
    print()

print("\n")
print("\n")

p=1
for i in range(n):
    for j in range(i+1):
        print(p,end='  ')
        p+=1
    print()