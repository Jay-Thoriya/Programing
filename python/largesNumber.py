"""

a=int(input(" Enter a number frist : "))
b=int(input(" Enter a number secoud : "))

if a<b:
    print(f"larges number is {a}")
elif a>b:
    print(f"larges number is {b}")
else:
    print(f"both number is equile {a}")

"""

"""
def findlargeselement(arr,n):
    maxvalue=arr[0]
    for i in range(1,n):
        if arr[i]>maxvalue:
            maxvalue=arr[i]
    return maxvalue


n = int(input("Enter a number of element in array "))
arr =[]

for i in range(n):
    number=int(input("enter element of array : "))
    arr.append(number)

maxvalue=findlargeselement(arr,n)
print("largest element in array ia : ",maxvalue)

"""

"""
name= ["jay","binal","catty","janvi","kiva"]
print("unsoted",name)
name.sort()
print("soted",name)

"""