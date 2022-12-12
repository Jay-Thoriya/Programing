def sum(a,b):
    sum=a+b
    print(sum)

sum(7,9)


sum= lambda a,b:a+b  #======>> using lambda function
print(sum(2,4))


def list1(a):
    return a[1]


a =[[3,4],[2,5],[9,1]]
a.sort(key=list1)
print(a)


a =[[3,4],[2,5],[9,1]]     #=======>> using lambda function
a.sort(key=lambda x:x[1])
print(a)