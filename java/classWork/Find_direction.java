

import java.util.Scanner;
public class Find_direction{

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter a Input : ");
        int sum=0,div=0 ;
        while(true){
            div=sc.nextInt();
            if(div==1 || div==-1){
                sum +=div;
            }
            else if(div==0){
                break;
            }
            else{
                continue;
            }
        }
        
        switch(sum%4){
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