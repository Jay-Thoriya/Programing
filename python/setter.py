from fnmatch import fnmatchcase


class Employee:
    def __init__(self,fname,lname) -> None:
        self.fname=fname 
        self.lname=lname
        
        
    def explain(self):
        return f"the name is {self.fname} {self.lname}"
    
    @property
    def Email(self):
        if self.fname==None or self.lname==None:
            return "email is not exzist please set it using setter"
        return f"{self.fname}.{self.lname}@email.com" 

    @Email.setter
    def Email(self, string):
        name= string.split("@")[0]
        self.fname=name.split(".")[0]
        self.lname=name.split(".")[1]

    @Email.deleter
    def Email(self):
        fname=None
        lname=None


jay_thoriya = Employee("jay","thoriya")

print(jay_thoriya.explain())



jay_thoriya.fname="kevin"


jay_thoriya.Email="this.that@email.com"

print(jay_thoriya.Email)