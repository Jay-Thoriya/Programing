

import java.util.Scanner;

public class Bungee_jump {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a age :");
        int age = sc.nextInt();
        System.out.println("Enter a weight :");
        int weight = sc.nextInt();
        System.out.println("Enter a height :");
        Float height = sc.nextFloat();

        if (age > 18 && age < 55) {
            if (height > 4.9f) {
                if (weight > 45 && weight < 120) {
                    if (weight > 85) {
                        System.out.println("Add extra Rope");
                        System.out.println(" you are allow  ");
                    }
                }
                else
                    System.out.println(" Not Eligible , Reason : weight limit.");
            }
            else
                System.out.println(" Not Eligible , Reason : height limit.");
        }
        else if (age > 13 && age < 17) {
            if (height > 4.2f) {
                if (weight > 18 && weight < 35) {
                    System.out.println(" you are allow  ");
                } 
                else
                    System.out.println(" Not Eligible , Reason : weight limit.");
                }
            else 
                System.out.println(" Not Eligible , Reason : height limit.");

        } else {
            System.out.println("!! DISQUALIFY !!");
        }

        sc.close();
    }
}
