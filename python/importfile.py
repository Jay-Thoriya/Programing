import function_file

print(function_file.wel_come())


def num( n):
    print(n)
    if(n>1):
        num(n-1)
    print(n)

num(9)