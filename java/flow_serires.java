 
import java.util.*;

public class flow_serires {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n=sc.nextInt();
       

        for(int i=0;i<=n;i++){
            if(i%2==0){
                System.out.print((i*i)-2+" ");
            }
            else{
                
                System.out.print((i*i)-1+" ");
            }

        }
       
        sc.close();
    }
}
 