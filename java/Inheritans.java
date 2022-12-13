class base {
    base(){ System.out.println("I am a base class constracter !!!");}
    base(int a){ System.out.println("I am a base class constracter ::: the value of A is : "+a);}
}

class derived extends base{
    derived(){ System.out.println("I am a derived class constracter !!!");}
    
    derived(int a,int b){ 
        
        super(a);

        System.out.printf("I am a base class constracter ::: the value of A is : %d and value of B is : %d  \n",a,b);}
}

class chaid extends derived{
    chaid(){ System.out.println("I am a chaid class constracter !!!");}
    
    chaid(int a,int b,int c){ super(a,b); System.out.printf("I achaide class constracter ::: the value of A is : %d and value of B is : %d and value of c is : %d  ",a,b,c);}
}

public class Inheritans {

    public static void main(String[] args) {
        
        // base b = new base(2);
        
        // derived d = new derived(7,5);

        new chaid(2,3,5);
        
    }
    
}
