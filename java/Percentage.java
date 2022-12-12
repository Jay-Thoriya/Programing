import java.util.Scanner;
public class Percentage{
    public static void main (String [] args){
        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter student maths marks : ");
        int maths = sc.nextInt();
        System.out.print(" Enter student physics marks : ");
        int physics = sc.nextInt();
        System.out.print(" Enter student chemestry marks : ");
        int chemestry = sc.nextInt();
        System.out.print(" Enter student english marks : ");
        int english = sc.nextInt();
        System.out.print(" Enter student computer marks : ");
        int computer = sc.nextInt();
        
        
        System.out.print(" Enter student Total marks : ");
        int total_marks = sc.nextInt();
        

        int student_total_marks = (maths + physics + chemestry + english + computer);
        float percentage = ((student_total_marks * 100)/total_marks) ;


        System.out.print(" student percentage is : ");
        System.out.print(percentage);
        sc.close();
    }
}