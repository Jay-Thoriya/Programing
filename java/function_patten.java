public class function_patten {

    static void Print_patten_upword(int n){

        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                System.out.print(" * ");
            }
            System.out.println(" ");
        }
    }
    static void Print_patten_Downword(int n){

        for(int i=n;i>0;i--){
            for(int j=0;j<=i;j++){
                System.out.print(" * ");
            }
            System.out.println(" ");
        }
    }
    public static void main(String[] args) {
        Print_patten_upword(6);
        Print_patten_Downword(6);
    }
    
}
