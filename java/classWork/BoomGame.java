

import java.util.*;

class BoomGame {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a any Number : ");
        int num = sc.nextInt();
        boolean flag7 = false, flag9 = false;
        while (num != 0) {

            if (num % 10 == 7) {
                flag7 = true;
            } else if (num % 10 == 9) {
                flag9 = true;
            }
            if (flag7 && flag9) {
                break;
            }
            num = num / 10;
        }

        if (flag7 && flag9) {
            System.out.println("!! SUPER BOOM !!");
        } else if (flag7 || flag9) {
            System.out.println("!! BOOM !! ");
        } else {
            System.out.println("NO BOOM");
        }
        sc.close();
    }
}