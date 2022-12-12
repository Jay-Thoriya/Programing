package p1;
public class Address{
    public String stname , city ;
    public int Hno ,pincode ;
    
    public void setAddress(String Astname,String Acity ,int AHno , int Apincode){
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