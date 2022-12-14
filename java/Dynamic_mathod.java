class Phone {
    public Phone(){  System.out.println("I am Phone class constructer");}
    
    public void Call(){ System.out.println(" Phone use for calling.... ");}

    public void Message(){ System.out.println("Phone use for Messageing...... ");}
}

class Smart_phone extends Phone{
    public Smart_phone(){ System.out.println("I am Smart phone consteructer");}

    public void Camara(){ System.out.println("Smart Phone use for click photo using camara..... ");}

    public void Calculater(){ System.out.println("Smart Phone use for calculate values.... ");}
}


public class Dynamic_mathod {
    public static void main(String[] args) {

        Phone sp = new Smart_phone();

        sp.Call();
        sp.Message();
        

    }
    
}
