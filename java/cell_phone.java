class Phone{
    public void ringing(){
        System.out.println("Ringing call........");
    } 
    public void upcalling(){
        System.out.println("Incaming call........");
    }
    public void outgoing(){
        System.out.println("Outgoing call........");
    }
}

public class cell_phone {

    public static void main(String[] args) {
        
        Phone p = new Phone();

        p.ringing();
        p.upcalling();
        p.outgoing();


    }
    
}
