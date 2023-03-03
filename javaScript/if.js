let age = prompt("Enter yor age ? ")
age = Number.parseInt(age)

if(age>0 && age<=10){
    alert("You are child")
}
else if(age>11 && age<=20){
    alert("you are boy")
}

else if(age>21 && age<=30){
    alert("you are Young-boy")
}

else if(age>31 && age<=40){
    alert("you are gantal-man")
}
else{
    alert("you are alian")
}