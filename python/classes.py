class Student:
    student_result = 90
    pass

jay = Student()
kevin = Student()

print(jay,kevin)

jay.name = "JAY"
jay.salary = "no salary !"
jay.work = "college"
print(f"1. student name is {jay.name} , student salary is {jay.salary} and student work is {jay.work} .")
print("jay result is ",Student.student_result)
Student.student_result=40
jay.student_result=40
print("now, jay result is : ",jay.student_result)
print(Student.student_result)


kevin.name = "KEVIN"
kevin.salary = 180211
kevin.work = "compney"
print(f"2. student name is {kevin.name} , student salary is {kevin.salary} and student work is {kevin.work} .")
print("kevin result is ",kevin.student_result)


class Employee :
    def __init__(self,Name,Salary,Work) -> None:
        self.name = Name
        self.salary = Salary
        self.work = Work

    def printinformation(self):
        return f"-->  student name is {self.name} , student salary is {self.salary} and student work is {self.work}."
    pass

jay =  Employee("JAY",90121,"college")
kevin =  Employee("kevin",202311,"compney")

print(jay.salary)
print(kevin.work)

print(jay.printinformation())
print(kevin.printinformation())