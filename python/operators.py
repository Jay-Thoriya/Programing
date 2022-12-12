
# operators in python

#arithmetic operators
#assignment operators
#comperition operators
#logical operators
#identity operators
#membership operators
#binery operators


#arithmetic operators

from operator import truediv


print("3+5 = ",3+5)
print("3-5 = ",3-5)
print("3*5 = ",3*5)
print("3/5 = ",3/5)
print("3%5 = ",3%5)
print("3//5 = ",3//5)
print("5**3--5*5*5 = ",3**5)


#assignment operators

a=10
a+=1
a+=10
print(a)


#comperition operators

a=10
print(a>10)
print(a>=10)
print(a==10)
print(a!=10)


#logical operators

a = True
b = False

# true + true = true 
# false + false = true
# false + true = false
# true + false = false

print(a or b)
print(a and b)


#identity operators 

print(a is not b)
print(a is b)


#membership operators

list1 = [2,23,4,52,54,6,77,71,67,88,5,7,53,73,31,26,13,4,51,5,56,9,7,5,87,5]

print(7 in list1)
print(7 not in list1)


#binery operators

# 0-00
# 1-01
# 2-10
# 3-11

print(0 & 1)
print(0 | 1)
print(0 | 3)