import java.util.Scanner;

public class Gase_number {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int number_of_gusse =1 ;

        while(number_of_gusse <= 9){
            System.out.print(" Guess the number  : ");
            int number_gusse = sc.nextInt();
            if(number_gusse < 67){
                System.out.println("you have less  number please input the greater  number ! ");
            }
            else if(number_gusse > 67){
                System.out.println("you have greater  number please input the less  number ! ");
            }
            else{
                System.out.println("congratulation  ! you have winner  of Game");
                System.out.println(number_of_gusse +"life  you have complit Game ");
                break;
            }
            number_of_gusse += 1;
        }
        if(number_of_gusse>9){
            System.err.println(" Game Over  ");;
        }
        sc.close();
    }
    
}
