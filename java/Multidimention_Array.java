import java.util.Scanner;
public class Multidimention_Array {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        String [][] name = new String [2][2];
 
        for(int j=0;j<=name.length-1;j++){
            
            for(int i=name.length-1;i>=0;i--){

                System.out.format("Enter a name [%d][%d] : ",j,i);
                name[i][j] = sc.next();

            }
        }

        
        for(int i=0;i<name.length;i++){
            
            for(int j=0;j<=name[i].length-1;j++){

                System.out.println(name[i][j]);

            }
        }

        sc.close();


    }
    
}
