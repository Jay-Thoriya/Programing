import java.util.Scanner;
public class find_number_in_array {

    public static void main(String[] args) {

        int number[] = {23,5,66,212,34,1,23,534,657,34,23,131,645,756,332,35,7,457,754,4,6};
        int num = 6;
        
        boolean isInArray = false;
        Scanner sc = new Scanner(System.in);


        for(int element : number){
            if(num == element)
            isInArray = true;
            break;
        }
        if(isInArray){
            System.out.println("The value is present in the array");
        }
        else{
            System.out.println("The value is not present in the array");
        }
        sc.close();
    }
    
}
