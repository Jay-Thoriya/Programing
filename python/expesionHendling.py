from logging import exception


num1=input(" enter a frist number :")
num2=input(" enter a  secoud number :")

try:
    print("the num1 and num2 sum is : ",
    int(num1)+int(num2))
except exception as e:
    print(e)

print("it is exception hendlind !")