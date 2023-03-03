let a = {
    // name:"jay",
    rollno:"005"
}

let b ={
    run(){
        console.log("I am running.....")
    }
}

let c ={
    name:"kevin"
}
a.__proto__=c
console.log(a.name)
console.log(a.rollno)

a.__proto__=b
console.log(a.run())