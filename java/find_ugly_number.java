
import java.util.*;

public class find_ugly_number {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int c=1;

        // System.out.println("1");
        if(n==1){
            System.out.println("1");
        
        }
        else{
            for(int i=2;c<=n;i++){
                if(i%2==0 || i%3==0 || i%5==0){
                    c++;
                   
                }
            }
            System.out.println("the aglynumber is "+ c);
        }
        
        
        sc.close();
    }
}
