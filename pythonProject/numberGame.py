# fiex number = 37 
# you have 7 life line 
# you find number right then you winner!
# you have not complite in 7 life line then you loss!

# start the game 

n=37
number_of_guess = 1
print(" YOU HAVE 9 LIFE 💗 TO WIN GAME ")
while(number_of_guess<=9):
    guess_number=int(input(" Guess the number 🤔 : "))
    if(guess_number<37):
        print("you have less 🤏🏻 number please input the greater 💁🏻‍♂️ number ! ")
    elif(guess_number>37):
        print("you have greater 💁🏻‍♂️ number please input the less 🤏🏻 number ! ")
    else:
        print("congratulation 🥇 ! you have winner 🤑 of Game")
        print(number_of_guess,"life 💗 you have complit Game ")
        break
    number_of_guess=number_of_guess+1

if(number_of_guess>9):
    print("💀 Game Over 💀 ")