d1={"jay": 1,"kevin":2,"meet":3,"rahul":4} #----> descnry {}
print(d1)
print(d1["jay"]) #---> qustion jay ka rollnumber kiya he ???
print(d1.keys()) #---> print main items
print(d1.items())

d1["ravi"]=5  #---> add ravi
print(d1)
del d1["ravi"]  #---> delete ravi
print(d1)

d2=d1  #----> not a copy give same moviesData
print(d2)
del d2["meet"] #---> delete meet it is delete from d2 also d1
print(d2)
print(d1)

d3=d2.copy() #---> pass out the copy 
print(d3)
del d3["jay"] #---> when delete jay then it is delete from the d3 it is not delete d2 
print(d3)
print(d2)

