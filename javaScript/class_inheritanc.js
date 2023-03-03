class Animal{
    constructor(name){
        this.name = name;
    }
    Souting(){
        console.log(`${this.name} is Souting`)
    }
    Running(){
        console.log(`${this.name} is Running`)
    }
}

class Monkey extends Animal{
    constructor(name){
        this.name = name;
    }
    Eatting(){
        console.log(`${this.name} is Eatting`)
    }
}

let a = new Animal("lion");
let b = new Monkey("chimpu");

b.Souting();
b.Running();
b.Eatting();