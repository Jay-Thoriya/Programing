import java.util.Scanner;
public class If_else 

{
    public static void main(String[] args){
        System.out.println(" It's Time to general knowledge !! ");
        System.out.println("\t \t Let's GO.....");
        System.out.print(" Enter for START Game :: ");

        Scanner sc = new Scanner(System.in);
        System.out.print("1. When is Earth Day celebrated ? \n 1) 29 april \t 2) 21 oct \t 3) 22 april \t 4) 29 oct :");
        int ans1 = sc.nextInt();
        

        if(ans1 == 3 ){
            System.out.println("====>>>> right Answer !!Good.");
        }
        else{
            System.out.print("=====>> worrg answer !! sorry better luck next time ..");
        }

       sc.close();

        
    }
}