public class Array_sort_or_not {
    public static void main(String[] args) {
        
        int arr [] ={2,434,23,5322,1,21,32,43};
        boolean isSorted = true;

        for(int i=0;i<arr.length;i++){
            if(arr[i]>arr[i+1]){
                isSorted =false;
                break;

            }
        }

        if(isSorted){
            System.out.println("Givan Array is sorted ");
        }
        else{
            System.out.println("Given array is not sorted ");
        }
    }
    
}
