public class First_nth_number_sum {
      
    static int sum_of(int n){
        int sum = 0;
        for(int i=0;i<=n;i++){
            sum = sum + i;
        }
        return sum;
    }

    static int sum_rec(int n){

        if(n == 1){
            return 1;
        }
        return n + sum_rec(n-1);
    }
    public static void main(String[] args) {
        System.out.println(sum_of(5));
        System.out.println(sum_rec(5));
    }
    
}
