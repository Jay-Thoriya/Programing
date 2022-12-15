abstract class Perent{
    Perent(){
        System.out.println("hello .. ");
    }
    abstract public void Print_mess(String message);
    public void geting(){
        System.out.println("Prent class method");
    }
}

class Child extends Perent{
    Child(){
        System.out.println("How are you.....");
    }
    
    @Override
    public void Print_mess(String message) {
        System.out.println("Child class : "+message);
        
    }

}
abstract class Sub_child extends Perent {
    Sub_child(){
        System.out.println("How was going your day ??");
    }

    public void seting(){
        System.out.println("Sub childt class method");
    }
}
public class Abstract_class {

    public static void main(String[] args) {
        // Child ch = new Child();
        // ch.Print_mess("I am fine");
        Child ch = new Child();
        // Period p = new Perent(); ------> abtrect class ka object nahi bana sakte
        // sch.Print_mess("it's good");
        ch.geting();
    }
    
}
