    
def show(normal,normal1,*args,**kwargs):
    print(type(args))
    print(normal)
    for item in args:
        print(item)
    print(normal1)
    for key, value in kwargs.items():
        print(f"{key} is a {value}")
    
    



lis1 = ["jay","kevin","manan","rudvik","kaushal"]
lis2 = {"jay":"losser","kevin":"topper","manan":"moniter",
        "rudvik":"player","kaushal":"cook"}
normal="hello , My friends name is : "
normal1="My Friend work is like : "
show( normal,normal1 ,*lis1,**lis2)