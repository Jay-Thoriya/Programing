import java.util.Random;
import java.util.Scanner;

public class Rock_paper_scissors {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 0 for rock \t 1 for paper \t 2 for scissors");
        int user_input = sc.nextInt();
        
        Random ran = new Random();
        int computer_input = ran.nextInt(3);
        System.out.println("computer input is : " + computer_input );

        if(user_input == computer_input){
            System.out.println("Drow");
        }
        else if(user_input == 0 && computer_input == 2 || user_input == 1 && computer_input == 0 || user_input == 2 && computer_input == 1){
            System.out.println(" you win!!");
        }
        else{
            System.out.println("computer win!");
        }
        
        sc.close();
        ran.getClass();



    }
    
}
