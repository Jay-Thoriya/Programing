"""           Rock    paper    scissors

-------> you choice out of this three item 


"""

import random 

print("=========================================  WEL-COME =====================================\n\n \t\t\t this project created by jay thoriya \n\n ======================================================================================== ")

extra = input("Press enter to strat Game [Enter] ")
extra2 = 0
print("================================= Rules ================================================== ")
print(" \t\t----->  this game is base on two player game :) ")
print(" \t\t----->  one palyer is computer and second palyer you :) ")
print(" \t\t----->  frist computer choice then you :) ")
print(" \t\t----->  you have three choice but choose only one [ ROCK , PAPER , SCISSORS ] :)\n ")
print(" \t\t    computer_choice  \t  your_choice  \t           result\n  ")
print(" \t\t    rock  \t\t  paper  \t\t  win !  ")
print(" \t\t    rock  \t\t  scissors  \t\t  loss !  ")
print(" \t\t    paper  \t\t  scissors  \t\t  win !  ")
print(" \t\t    paper  \t\t  rock  \t\t  loss !  ")
print(" \t\t    scissors  \t\t  rock  \t\t  win !  ")
print(" \t\t    scissors  \t\t  paper  \t\t  loss !  ")
print("\n \t\t-----> computer_chioce and your_choice is same then round is draw ")
print("\n\======>> I hope you have all interaction consider , let's begain :) \n\n ")

extra1 = input("Press Enter to start the Game [Enter] ")


def startGame():
    rounds = int(input("\n\nNumber of round you wont to play : "))
    total_number=rounds
    draw_rounds = 0;
    p_point =0;
    c_point =0;
    round_count = 1

    while(rounds>0):
        print(f"========================================== ROUND {round_count} ==========================================")
        cpu_moves = ["ROCK","PAPER","SCISSORS"]
        cpu_choice = random.choice(cpu_moves)

        player_choice = input(" Enter your choice :  \n\n \t ROCK for 🪨 [R] \t PAPER for 📜 [P] \t SCISSORS for ✂️ [S] : ")

        print("\ncpu_choice is ",cpu_choice)

        if player_choice=="r":
            if cpu_choice=="ROCK":
                print("\n draw !")
                draw_rounds += 1
                pass
            elif cpu_choice=="SCISSORS":
                print("\n you win !")
                p_point+= 1
                pass 
            else:
                print("\n you loss !")
                c_point +=1
                pass
            pass
        elif player_choice=="p":
            if cpu_choice=="PAPER":
                print("\n draw !")
                draw_rounds += 1
                pass
            elif cpu_choice=="ROCK":
                print("\n you win !")
                p_point+= 1
                pass 
            else:
                print("\n you loss !")
                c_point +=1
                pass
            pass
        elif player_choice=="s":
            if cpu_choice=="SCISSORS":
                print("\n draw !")
                draw_rounds += 1
                pass
            elif cpu_choice=="PAPER":
                print("\n you win !")
                p_point+= 1
                pass 
            else:
                print("\n you loss !")
                c_point +=1
                pass
            pass
        else:
            print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! Worrnig !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
            print("\n------------->  you choice invalid (*^*) Plaese enter valid choose   \n ")
            global extra2
            extra2 = input("------------->   I hope you have got it :) \n\n\t\t\t YES then enter [Y] and NO then enter [N] :  ")
            if extra2=='y':
                print("Great :)")
                continue
            elif extra2 == 'n':
                print("\n Sorry ! i can help it , you can leave\n\n ---> Game leave for Press [N] :( ")
                again()
                break
            else:
                print(" i knew , you chack my progamming will see :) ")
                continue
        rounds-=1
        round_count+=1


    print(f"\n ======================= Total score at the end of {total_number} round ========================== ")
    print(f"\n ========>>>> 1. Number of draw between computer and player is : {draw_rounds} round")
    print(f"\n ========>>>> 2. NUmber of palyer win is : {p_point} 👍🏻")
    print(f"\n ========>>>> 3. NUmber of computer win is : {c_point} 👎🏻")
    print("\n ================================================================================================== ")
    if extra2 =="n":
        pass
    else:
        again()



def again():
    cal_again=input("\n\t\t\t\t :::::::::::: Do you want to stratGame again ::::::::::: \n \n ------- Please type Y ✓ for yes and N ✕ for no : ")
    if cal_again=="y":
        startGame()
    elif cal_again=="n":
        print("see you later 🙋🏻")
    else:
        again()

startGame()
