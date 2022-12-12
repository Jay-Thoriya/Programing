public class Fibonacci {
     
    static int fibo(int n){
        if(n == 0)
            return 0;
        else if(n ==1)
            return 1;
        else{
            int a=0,b=1,c=0;
            for(int i=2;i<=n;i++){
                c=a+b;
                a=b;
                b=c;      
            }
            return c;
        }
    }

    static int fibo_rec(int n){
        if(n==0 || n==1)
            return (n-1);
        else
            return fibo(n-1)+fibo(n-2);
    }
    public static void main(String[] args) {
        
        System.out.println(fibo(5));
        System.out.println(fibo_rec(5));
    }
}
