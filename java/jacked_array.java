public class jacked_array {
    public static void main(String[] args) {
        int [] arr = {434,453,345};
        int [] arr2 = {34,45,3444};

        int [][] arr3 = {arr,arr2};

        for(int[] temp: arr3){
            for(int k:temp)
                System.out.print(k+" ");
            System.out.println();
        }
    }
}
