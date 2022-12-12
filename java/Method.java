public class Method {
    // void fucntion no return 
     static void Message(){
        System.out.println(" Hello my dear friend !! ");
     }
    // give arrgument 
     static void Sum(int a , int b){
        int c = a + b;
        System.out.printf(" the sum of %d and %d is %d \n ",a,b,c);
     }

    // when passing array then array is pass refernc (array value change)
     static void Change(int arr[]){
        arr[0]=30;
     }

    // Method overloding 
     static int Addition(int a){
          return a;
     }
     static int Addition(int a,int b){
        return a+b;
     }
    static int Addition(int a,int b,int c){
        return a+b+c;
     }
    // variable argument 
    static int Multiplication(int ...arr){
        int result = 1;
        for(int e:arr){
            result *= e;
        }
        return result;
    }
    public static void main(String[] args) {
        
        int array[]={23,35,98,13,64};

        Message();
        Sum(2, 4);
        System.out.println("befor calling change function array frist element is : " + array[0]);
        Change(array);
        System.out.println("after calling change functioin array frist element is : " + array[0]);

        System.out.println(Addition(4));
        System.out.println(Addition(4,4));
        System.out.println(Addition(4,4,4));
        
        System.out.println(Multiplication());
        System.out.println(Multiplication(2));
        System.out.println(Multiplication(3,5));
        System.out.println(Multiplication(2,5,2));
    }
    
}
