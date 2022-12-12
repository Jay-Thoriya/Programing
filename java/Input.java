import java.util.Scanner;

public class Input {
    public static void main (String[] args){
    Scanner sc = new Scanner(System.in);

    System.out.print(" Enter a your name : ");
    String a = sc.nextLine();
    System.out.print(" Enter a your Roll number in float : ");
    float b = sc.nextFloat();
    System.out.print(" Enter a your age : ");
    int c = sc.nextInt();
    System.out.print(" Enter a your favorite character : ");
    char d = sc.next().charAt(0);
    
    System.out.print(" your name is : ");
    System.out.println( a );
    System.out.print(" your Roll number in float is : ");
    System.out.println( b );
    System.out.print(" your age is : ");
    System.out.println( c );
    System.out.print(" your favorite character is : ");
    System.out.println( d );
    
    sc.close();
}
}