class A:
    var = "variable of class A "

    def __init__(self):
        self.var = " Instance of class A "
        pass

class B(A):
    var = "variable of class B "

    def __init__(self):
        self.var = " Instance of class B "
        super().__init__()
    pass

    
a = A()
b = B()

print(b.var)