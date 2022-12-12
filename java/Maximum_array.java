public class Maximum_array {
    public static void main(String[] args) {
     int number []= {2,4,23,45,6,98};   
     int max=0;

     for(int i=0;i<number.length;i++){
        if(number[i] > max){
            max = number[i];
        }
     }

     System.out.println(max);
    }
    
    
}
