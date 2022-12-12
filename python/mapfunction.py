from functools import reduce


list1 = [ "2","22","222","2222","22222","222222","2222222","22222222","222222222","2222222222"]

for index, item in enumerate(list1):
    if index%2==0:
        print(f"this is odd number : {item}")
    else:
        print(f"this is even number : {item}")



list2 = ["1","2","3","4","5","6","7","8","9","10"]

num1 = list(map(int,list2))
print(num1)

square = list(map(lambda x : x*x,num1))
print(square)

cube = list(map(lambda x:x*x*x,num1))
print(cube)

def square(a):
    return a*a
def cube(a):
    return a*a*a
func=[square,cube]

for i in range(1):
        
    total=list(map(lambda x:x(i),func))
    print(total)

def is_greter_5(num1):
    return num1>5

grter_5=list(filter(is_greter_5,num1))
print(f" it is grter then 5 {grter_5}")
    
num = reduce(lambda x,y:x+y,num1)
print(num)
