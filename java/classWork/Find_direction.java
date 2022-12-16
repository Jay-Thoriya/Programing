

import java.util.Scanner;
public class Find_direction{

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter a Input : ");
        int num=0,i=0,sum=0,div=0 ;
        while(i==0){
            num=sc.nextInt();
            sum=sum+num;
            if(num==0){
                break;
            }
        }
        div=num%4;
        switch(div){
            case 0:                                        
                System.out.println("East");
                break;
            case 1:
            case -3:
                System.out.println("North");
                break;
            case 2:
            case -2:
                 System.out.println("West");
                 break;
            case 3:
            case -1:
                System.out.println("South");
                break;
        }
        sc.close();
    }
}