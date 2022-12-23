package p3;
import java.util.Scanner;
public class INOUT {
    Scanner sc = new Scanner(System.in);
    public float bsal;
    public String name;
    public String desg;
    public int pincode;
    public int hno;
    public String city;
    public String stname;
    Employee e;
    Address a;
    
    public void input(){
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

        e = new Employee(name, desg, bsal);
        a = new Address(stname, city, hno, pincode);
    }
    
  

    public void output(){
        e.getEmployee();
        a.getAddress();
    }
}
