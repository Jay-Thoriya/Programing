Play_again()

function Play_again(){
        
    alert("YOU HAVE 10 LIFE TO GUESS NUMBER")

    number = Math.floor(Math.random() * 101)

    let i = 0
    flag = false
    while(i <= 10){
        let Input_number = prompt("Guess the number")
        Input_number = Number.parseInt(Input_number)
        if( Input_number > number){ console.info("Enter a smaller number")}
        else if( Input_number < number){ console.info("Enter a greter number")}
        else if( Input_number == number){ console.info("Congratutation! you have find out...")
            flag = true
            break;
        }
        else{
            console.error("You have worng input pleass enter currect input.")
        }
        i++;
    }   

    if(flag){
        alert("!! YOU WIN GAME !!")
    }
    else{
        alert("!! YOU LOSS GAME !!")
    }

    let a = confirm("Do You Want To Play Again ?")
    if(a == true){
        Play_again()
    }
}
