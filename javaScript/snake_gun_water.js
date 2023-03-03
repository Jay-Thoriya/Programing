play_again()

function play_again() {
    let round = prompt("Enter how many round you have to play ?")
    let i = 0;
    let u_win = 0
    let c_win = 0
    let drow = 0
    while (i < round) {

        let value = ["snake", "water", "gun"]
        let Input_Computer = value[Math.floor(Math.random() * value.length)]
        let Input_Uesr = prompt(" Enter \" Snake \" \n  \" GUN \"  \n  \" WATER \" ")

        if (Input_Uesr == Input_Computer) {
            console.log("Drow")
            drow++
        }
        else if (Input_Uesr == "snake" || Input_Computer == "water" && Input_Uesr == "water" || Input_Computer == "gun" && Input_Uesr == "gun" || Input_Computer == "snake") {
            console.log("you win")
            u_win++
        }
        else if (Input_Uesr == "snake" || Input_Computer == "gun" && Input_Uesr == "water" || Input_Computer == "snake" && Input_Uesr == "gun" || Input_Computer == "water") {
            console.log("you loss")
            c_win++
        }
        else {
            console.log(" Envalid input")
        }

        i++;
    }
    alert(`  You win game : ${u_win}  \n  Computer win game : ${c_win}  \n  Drow round is : ${drow} `)

    if(u_win > c_win){
        alert("!! YOU WIN GAME !!")
    }
    else if(u_win < c_win){
        alert("!! YOU LOSS GAME !!")
    }
    else{
        alert("!! MATCH IS DROW !!")
    }
    
}

let a = confirm("Do You Want To Play Again ?")
if(a == true){
    play_again()
}


