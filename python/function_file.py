from ast import main
from unicodedata import name


def wel_come():
    print("=========================================  WEL-COME =====================================\n\n \t\t\t this project created by jay thoriya \n\n ======================================================================================== ")


def sum_number(a=0,b=0,c=0,d=0,e=0):
    print("sum of all number is : ",a+b+c+d+e)

print(" import file name is : ",__name__)
if __name__ == '__main__':

    wel_come()
    sum_number(2,4,56,5)
