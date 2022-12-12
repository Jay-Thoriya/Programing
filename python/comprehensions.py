#  generator  

item1 = (i for i in range(100) if i%2==0)

for i in item1:
    print(i,end=" ")

print("\n")
# set

item2 = [i for i in range(100) if i%3==0]

print(item2)

print("\n")

#directre

dict={i:f"item{i}" for i in range(6)}

print(dict)