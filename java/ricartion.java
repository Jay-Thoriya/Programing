public class ricartion {

int Factorial (int n){
    if(n==1 || n==0)
    return 1;
    else
    return n*Factorial(n-1);
}

int Fibonacci (int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (Fibonacci(n-1)+Factorial(n-2));
    }
}

    public static void main(String[] args) {
        ricartion r = new ricartion();
        ricartion r1 = new ricartion();
        System.out.println(r.Factorial(1));
        System.out.println(r.Factorial(2));
        System.out.println(r.Factorial(3));
        System.out.println(r.Factorial(4));
        System.out.println(r.Factorial(5));

        System.out.println(r1.Fibonacci(1));
        System.out.println(r1.Fibonacci(2));
        System.out.println(r1.Fibonacci(3));
        System.out.println(r1.Fibonacci(4));
    }
    
}
