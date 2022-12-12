import p1.*;
import p2.*;
import java.util.Scanner;

public class JayMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employee e = new Employee();
        Address a = new Address();

        System.out.println("enter a NAME : ");
        String name = sc.nextLine();
        System.out.println("enter a desg : ");
        String desg = sc.nextLine();
        System.out.println("enter a basl : ");
        float bsal = sc.nextFloat();

        System.out.println("Enter a hno : ");
        int hno = sc.nextInt();
        System.out.println("Enter a stname : ");
        String stname = sc.nextLine();
        System.out.println("Enter a city : ");
        String city = sc.nextLine();
        System.out.println("Enter a pincode : ");
        int pincode = sc.nextInt();

        e.setEmployee(name, desg, bsal);
        a.setAddress(stname, city, hno, pincode);
        e.getEmployee();
        a.getAddress();
        sc.close();

    }
}