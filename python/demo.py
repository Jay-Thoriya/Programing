
"""
def swap(a,b):
    temp=a 
    a=b
    b=temp 

    print(f" after swaping number : a is :{a} and b is :{b}")

a=int(input("enter frist number : "))
b=int(input("enter second number : "))
print(f" befor swaping number : a is : {a} and b is :{b}")
swap(a,b)
"""


"""
def factorial(num):
    fact=1
    i=1
    while i<=num :
        fact=fact*i 
        i=i+1
    return fact 

num = int(input(" enter a number : "))
result=factorial(num)
print("factorial of number",result)
factorial(num)

"""

""""
n=int(input("enter nnumber "))

def fibonacci (n):
    a=0
    b=1
    if n==1 : print(a)
    else:
        print(a,end=',')
        print(b,end=',')
        for i in range(2,n):
            c=a+b
            a=b
            b=c
            print(c,end=",")

fibonacci(n)

"""


def _sum (arr,n):
    return (sum(arr))
arr=[2,3,4,45,5]

n=len(arr)
ans = _sum(arr,n)

print("sum of the array is : ",ans)