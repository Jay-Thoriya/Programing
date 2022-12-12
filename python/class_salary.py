class Employee :
    count=0
    def __init__(self,name,desig,salary):
        self.name=name
        self.desig=desig
        self.salary=salary
        Employee.count+=1

    def display_count(self):
        print("there  are %d employees" % Employee.count)

    def display_details(self):
        print("name :",self.name,"desig :",self.desig,"salary :",self.salary)
         
    

    
e1=Employee("karan","manager",80000)
e2=Employee("shivam","leader",50000)
e3=Employee("meet","programmer",30000)
e4=Employee("raj","assistant",25000)

e1.display_details()
e2.display_details()
e3.display_details()
e4.display_details()