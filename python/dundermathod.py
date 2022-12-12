
class Employee:
    nnumber = 0
    def __init__(self,Name,Salary,Work):
        self.name = Name
        self.salary = Salary
        self.work = Work

    def __repr__(self):
        return f"-->  student name is {self.name} , student salary is {self.salary} and student work is {self.work}."  

    def __str__(self):
        return f"-->  student name is {self.name} , student salary is {self.salary} and student work is {self.work}."   

    def printinformation(self):
        return f"-->  student name is {self.name} , student salary is {self.salary} and student work is {self.work}."
    
    @classmethod
    def change_number (cls,new_number) :
        cls.number = new_number ;
    
    @classmethod
    def from_str(cls,string):
        karan = string.split("-")
        return cls( karan[0], karan[1],karan[2])
    @staticmethod
    def printgood(string):
        print("it is good",string)
        return 90
    
jay =  Employee("JAY",90121,"college")
kevin =  Employee("kevin",202311,"compney")
karan = Employee.from_str("karan-383-student")
#Employee.number = 60    change karva mate class no refrens lidha vagar change karava  mate using class mathodes
jay.change_number(34)
#print(Employee.number)
jay.printgood("jay")
print(karan.salary)
#print(jay.salary)
#print(kevin.work)

#print(jay.printinformation())
#print(kevin.printinformation())
print(jay)