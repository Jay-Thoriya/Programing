
class Student :
    def __init__(self,name,rollnumber,marks):
        self.name = name
        self.rollnumber = rollnumber
        self.marks = marks
       
    def infromation_student(self):
         return f"--> student name is {self.name} , student rollnumber is {self.rollnumber} and student exam mark is  {self.marks} ."
    

class Sport :
    def __init__(self,name,sport_marks):
        self.name = name
        self.sport_marks = sport_marks

    def sport_information(self):
        return f" student name is {self.name} and his sport marks is  {self.sport_marks} ."
    

class Total(Student , Sport):
    
    def totalmarks(self):
        return f"total marks is {self.marks + self.sport_marks}"


student_1 = Student("jay",5,95)
student_2 = Student("kevin",10,97)

student_1 = Sport("jay",8)
student_4 = Sport("arjun",7)

student_5 = Total
print(student_5.totalmarks())

print(student_1.infromation_student())
print(student_2.infromation_student())

print(student_3.sport_information())
print(student_4.sport_information())