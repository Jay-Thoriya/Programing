from secrets import choice


n=int(input(" How many item do  you want to add to your inventory : "))

i=()
I=[]

while (i<n) :
    a=input("enter the item : ")
    I.append(a)
    i+=1

choice = int(input(" Press 1 for generating a List comprehension \n  Press 2 for generating a Set comprehension \n  Press 3 for generating a Generator comprehension \n "))

if choice ==1:
    list = [item for item in I]
    print(list)

elif choice ==2:
    set= {item for item in I}
    print(set)

elif choice ==3:
    gen = (item for item in i)
    for c in gen:
        print(c)