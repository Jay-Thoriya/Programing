// public class Patten {
//     public static void main(String[] args) {
//         int n = 4;
//         for(int i=n;i>0;i--){
//             for(int j = 0 ; j<i;j++){

//                 System.out.print("*");
//             } 
//             System.out.print("\n");
//         }
//     }
// }

class TestGarbage1 {
    public void finalize() {
        System.out.println("object is garbage collected");
    }

    public static void main(String args[]) {
        TestGarbage1 s1 = new TestGarbage1();
        TestGarbage1 s2 = new TestGarbage1();
        s1 = null;
        s2 = null;
        System.gc();
    }
}