
import java.util.*;

public class Chalk_day {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter chalk you have : ");
        int n  = sc.nextInt();
        if(n>=4 && n<=666){
            System.out.println((n+(int)Math.sqrt(n)+1)+" days you have used");
        }
        else{ System.out.println("Invalid input...");}
        sc.close();
    }
}
