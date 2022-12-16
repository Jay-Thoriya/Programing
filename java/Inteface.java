interface bicycle{
    void Speedup(int incriment);
    void breafast(int dicriment);
}
interface mobile{
    void volumup(int incriment);
    void lodingspeed(int dicriment);
}
class milan implements bicycle,mobile{
    public void Speedup(int incriment){
        System.out.println(" Speed is Up great");
    }
    public void breafast(int dicriment){
        System.out.println(" Break is down successfulley");
    }
    public void volumup(int incriment){
        System.out.println(" volum is Up great");
    }
    public void lodingspeed(int dicriment){
        System.out.println(" loding speed is down successfulley");
    }
    
}

public class Inteface {

    public static void main(String[] args) {
        milan ml =new milan();
        ml.Speedup(3);
        ml.breafast(9);
        ml.volumup(88);
        ml.lodingspeed(9);
    }
}
