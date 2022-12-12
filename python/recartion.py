"factoriyal of number "

def factorial(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else :
        return n * factorial(n-1)
    print(n)

n=int(input("Enter the number : "))

print("factorial is : ",factorial(n))


def factorial1(n1):
    fac=1
    for i in range(n1):
        fac=fac*(i+1)
    return fac

n1=int(input("Enter the number : "))


print("factorial1 is : ",factorial1(n1))


