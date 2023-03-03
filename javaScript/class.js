class Railwayform{
    submit(){
        console.log(`${this.name} your form is successfully submited in train number ${this.train_id} !!!!`)
    }
    
    cancale(){
        console.log(`${this.name} your form is successfully caancaled in train number ${this.train_id} !!!!`)
    }

    setdata(givename , train_id){
        this.name = givename;
        this.train_id = train_id;
    }
}

let  jay = new Railwayform();
jay.setdata("JAY" , 99811);
let kevin = new Railwayform();
kevin.setdata("KEVIN" , 14994);

jay.submit();
kevin.submit();

jay.cancale();