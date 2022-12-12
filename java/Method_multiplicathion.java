public class Method_multiplicathion {

    static void Mutiplication(int n){
        
        for(int i=0 ;i<=10;i++){
            System.out.println("5 * "+ i + " = " + (i*n));
        }
        System.out.println(" revers order : "); 
        for(int i=10;i>0;i--){
            System.out.println("5 * "+ i + " = " + (i*n));

        }
    }
    public static void main(String[] args) {
        Mutiplication(5);
    }
}
