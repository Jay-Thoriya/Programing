#Health Management System

#3 clients - jay, kevin  and karan

# Function to ask client name and exercise or food

"""
 press 1 for lock the value and 2 for retrieve :
 press 1 for jay 2 for kevin 3 for karan : 
 enter 1 for excersise and 2 for food :
"""


import datetime 
def gettime():
    return datetime.datetime.now()


 
def take(m):

    if m==1:
        k=int(input("Enter 1 for excersise 🦾 and 2 for food 🍕 : "))
        if k==1:
            value=input(" Type Here 🧟‍♂️\n ---->")
            with open("jay-ex.txt","a") as op:
                op.write(str([str(gettime())])+": "+value+"\n")
            print(" Successfully written 📝 :) ")
            pass
        elif k==2:
            value=input(" Type Here 🧟‍♂️\n ---->")
            with open("jay-food.txt","a") as op:
                op.write(str([str(gettime())])+": "+value+"\n")
            print(" Successfully written 📝 :) ")
            pass
        else:
            print(" you have enter diffrent number !, try again ")
            again()
        pass
    
    if m==2:
        k=int(input("Enter 1 for excersise 🦾 and 2 for food 🍕 : "))
        if k==1:
            value=input(" Type Here 🧞\n ---->")
            with open("kevin-ex.txt","a") as op:
                op.write(str([str(gettime())])+": "+value+"\n")
            print(" Successfully written 📝 :) ")
            pass
        elif k==2:
            value=input(" Type Here 🧞\n ---->")
            with open("kevin-food.txt","a") as op:
                op.write(str([str(gettime())])+": "+value+"\n")
            print(" Successfully written 📝 :) ")
            pass
        else:
            print(" you have enter diffrent number !, try again ")
            again()
            pass
    
    if m==3:
        k=int(input("Enter 1 for excersise 🦾 and 2 for food 🍕 : "))
        if k==1:
            value=input(" Type Here 👥\n ---->")
            with open("karan-ex.txt","a") as op:
                op.write(str([str(gettime())])+": "+value+"\n")
            print(" Successfully written 📝 :) ")
            pass
        elif k==2:
            value=input(" Type Here 👥\n ---->")
            with open("karan-food.txt","a") as op:
                op.write(str([str(gettime())])+": "+value+"\n")
            print(" Successfully written 📝 :) ")
            pass
        else:
            print(" you have enter diffrent number !, try again ")
            again()
            pass

        pass

    else:
        print(" you have in valid input !, try again ")
        again()


def retrieve(m):

    
    if m==1:
        k=int(input("Enter 1 for excersise 🦾 and 2 for food 🍕 : "))
        if k==1:
            with open("jay-ex.txt") as op:
                for i in op:
                    print(i,end=' ')
            pass
        elif k==2:
            with open("jay-food.txt") as op:
                for i in op:
                    print(i,end=' ')
            pass
        else:
            print(" you have in valid input !, try again ")
            again()
            pass

    elif m==2:
        k=int(input("Enter 1 for excersise 🦾 and 2 for food 🍕 : "))
        if k==1:
            with open("kevin-ex.txt") as op:
                for i in op:
                    print(i,end=' ')
            pass
        elif k==2:
            with open("kevin-food.txt") as op:
                for i in op:
                    print(i,end=' ')
            pass
        else:
            print(" you have in valid input !, try again ")
            again()
            pass
    
    elif m==3:
        k=int(input("Enter 1 for excersise 🦾 and 2 for food 🍕: "))
        if k==1:
            with open("karan-ex.txt") as op:
                for i in op:
                    print(i,end=' ')
            pass
        elif k==2:
            with open("karan-food.txt") as op:
                for i in op:
                    print(i,end=' ')
            pass
        else:
            print(" you have in valid input !, try again ")
            again()   
            pass     
        pass

    else:
        print(" you have enter diffrent number !, try again ")
        again()

#  main program :

def health():

    a=int(input(" Press 1 for lock 📝 the value and 2 for retrieve 🤳🏻 : "))

    if a==1:    
        b=int(input("Press 1 for jay 🧟‍♂️ , 2 for kevin 🧞 and 3 for karan 👥: "))
        take(b)

        
    elif a==2:
        b=int(input("Press 1 for jay , 2 for kevin 🧞 and 3 for karan : "))
        retrieve(b)

    else :
        print("You have input diffrent nummber ! plaese try again ")
        again()

def again():
    cal_again=input("Do you want to health again \n Please type Y ✓ for yes and N ✕ for no : ")
    if cal_again=="y":
        health()
    elif cal_again=="n":
        print("see you later 🙋🏻")
    else:
        again()

health()


