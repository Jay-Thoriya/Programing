public class Factorial {
    public static void main(String[] args) {
        int n=5;
        int i=1;
        int fac = 1;
        while(i<=n){
            fac = fac * i;
            i++;
        }
        System.out.printf("factorial of %d is %d ",n,fac);
    }
    
}
