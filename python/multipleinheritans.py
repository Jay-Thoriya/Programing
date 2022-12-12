#  Diamond shape problem 

class A:

    def mathod(self):
        print("This is class A mathode")
    pass 

class B(A):
    def mathod(self):
        print("This is class B mathode")
    pass 

class C(A):
    def mathod(self):
        print("This is class C mathode")
    pass 

class D(C,B):
    def mathod(self):
        print("This is class D mathode")
    pass

d = D()

d.mathod()
