# name = input("Enter your name: ")
# age = int(input("Enter your age: "))
# print("Hello " + name + "! \nyou enter your age is ", age)

# list1 = ["Morbi",2,"Ahmdabad",True,"Surat"]
# print(list1[2])
# list1[2]="Rajkot" liat are mutabal
# print(list1[2])

# print(list1[ : : ]) #-----> [ START : END : GAP ]
# print(list1[2:])
# print(list1[4:])
# print(list1[:2])
# print(list1[:4])
# print(list1[::2])
# print(list1[::-1]) #---> revars oreder


# print(type(list1[0]))
# print(type(list1[1]))
# print(type(list1[2]))
# print(type(list1[3]))
# print(type(list1[4]))

# sentance = input("Enter a sentance : ")
# print(sentance)
# word1 = input(" Enter a word you are replased with : ")
# word2 = input(" Enter a word you are replas : ")
# print(sentance.replace(word1,word2))


# dict1 = { "name":"jay","age":20,"working":"student"}

# print(dict1["age"])

# try:
#     x=int(input("Enter a Integer: "))
# except:
#     print(" Someting went wrong")
# else:
#     print("Given input is currect")
# finally:
#     print("Try block run!!")

# prog_file = open("tempCodeRunnerFile.py","r")
# print(prog_file.readlines())
# prog_file.close()


# prog_file = open("tempCodeRunnerFile.py","a")
# print(prog_file.write("whho"))
# prog_file.close()

# class math:
#     def __init__(self, var1 , var2):
#         self.x=var1;
#         self.y=var2;
#         return print(" sum of x and y is ",x+y)
    
# x = int(input(" x = "))
# y = int(input(" y = "))
# # m1 = math(x,y)

# num = ['one','two','one','three']
# num.reverse()
# print(num)

l = [i for i in  range(10)]
l[:] = [i for i in l if i%2]
print(l)