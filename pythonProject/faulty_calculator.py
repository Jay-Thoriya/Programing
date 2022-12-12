def calculator() :
    print (" Welcome to caclulator it desin by 👑 JAY THORIYA 👑")
    opretion = input(" Please type math opretion you would like to complet \n ➕ for addition \n ➖ for subtretion \n ❌ for mualtifecation \n ➗ for divition  : ")
    a = int(input(" Enter frist number : "))
    b = int(input(" Enter second number : "))

    if opretion=="+" :
        if a==55 and b==4 :
            print (70)
        else :
            print(a+b)
    elif opretion=="-" :
        if a==62 and b==4 :
            print (50)
        else :
            print(a-b)
    elif opretion=="*":
        if a==5 and b==7 :
            print (40)
        else :
            print(a*b)
    elif opretion=="/" :
        if a==81 and b==9 :
            print (7)
        else :
            print(a/b)
    else :
        print ("you paress invelid key ! 😤")
    again()


def again():
    cal_again=input(" Do you want to calculation again \n Please type Y 👍🏻for yes and N 👎🏻for no ")
    if cal_again=="y":
        calculator()
    elif cal_again=="n":
        print(" see you later 🙋🏻")
    else :
        again()

calculator()