class Employee:
    public = 30
    _protected = 40
    __priveat = 50


jay = Employee
print(jay.public)
print(jay._protected)
print(jay._Employee__priveat)  # -----> imp privet ne accses karava  agad _class name lakhavu pade 
