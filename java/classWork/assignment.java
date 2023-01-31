import java.util.*;
public class assignment{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print(" Enter how many number you have sum : ");
        int size= sc.nextInt() ,sumo=0,sum=0,min=999,max=0,count=0,maxfreq=0,element=0;
        int [] arr = new int[size];

        
        for(int i=0;i<size;i++){
            System.out.print("Enter array element : ");
            arr[i] = sc.nextInt();
            if(arr[i]%2 == 0){
                sum+=arr[i];
            }
            if(i%2==1){
                sumo+=arr[i];
            }
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
            
        }
        for(int j : arr){
            count=0;
            for(int k : arr){
                if(j==k){ count++;}
            }
            if(maxfreq < count){
                maxfreq =count;
                element = j;
            }
            
        }


        System.out.println("Sum of even  number is :"+ sum);
        System.out.println("Sum of odd index position is :"+ sumo);
        System.out.println("Min value is : "+min);
        System.out.println("Max value is : "+max);
        System.out.println(maxfreq +" is repeated : " + element+ " time");
        sc.close();

    }
}