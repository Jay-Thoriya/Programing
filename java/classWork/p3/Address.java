package p3;
public class Address{
    public String stname , city ;
    public int Hno ,pincode ;
    
    public Address(String Astname,String Acity ,int AHno , int Apincode) {
        Hno = AHno;
        stname = Astname;
        city = Acity;
        pincode = Apincode;
    }

    
    public void getAddress(){
        System.out.println("HNO : "+ Hno);
        System.out.println("stname : "+ stname);
        System.out.println("city : "+ city);
        System.out.println("pincode : "+ pincode);
        
    }
}