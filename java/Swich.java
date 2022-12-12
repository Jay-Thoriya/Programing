import java.util.Scanner;

public class Swich{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age : ");
        int a = sc.nextInt();

        switch (a) {
            case 10 :
                System.out.println("you are student");
                break;
            case 20 :
                System.out.println("you geting a job");
                break;
            case 50 :
                System.out.println("you time is resting");
                break;
            default: 
                System.out.println("thank for using my code.");
                break;
        }

        sc.close();
    }
}