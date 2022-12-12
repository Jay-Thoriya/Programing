def function1():
    print("you have in there function 1 !")

function1()

def function2(a,b):
    if(a>b):print("a is bigger number !")
    else:print("b is bigger number !")


function2(3,4)

def function3(a,b):
    c=sum((a,b))
    print(c)

function3(5,6)

def function4(a,b):
    """ it is using only 2 parameters is not using 3 perameters its know as doc string """
    avrege=(a+b)/2
    return avrege

print(function4(4,5))
print(function4.__doc__)

