public class Array_sum{
    public static void main(String[] args) {
        
        Float marks [] = {1.3f,2.3f,3.3f,4.3f,5.3f};
        Float sum = 0.0f;
        for(int i=0;i<=marks.length-1;i++){

            sum += marks[i];

        }

        System.out.println("Sum is : " + sum);

    }
}