interface camara{
    void takePhoto();
    void recordVideo();
    private void greet(){ System.out.println("Good mornnig");}
    default void record4kvideo(){
        greet();
        System.err.println("Recoding 4k video....");
    }

}
interface Wifi{
    String[] getNetworks();
    void connectTOnetwork(String network);

}

class Mycallphone{
    void callNumber(int Phonenumber){
        System.out.println("Calling..."+ Phonenumber);
    }
    void pickcall(){
        System.out.println("connnecting....");
    }
}
class MysmartPhone extends Mycallphone implements camara,Wifi{
    public void takePhoto(){ System.out.println("Taking sanp");}
    public void recordVideo(){ System.out.println("taking sanp");}

    public String[] getNetworks(){
        System.out.println("Getting list of network");
        String[] networkList = {"jay","kalpesh","LILI"};
        return networkList;
    }
    public void connectTOnetwork(String network){
        System.out.println("cannecting to "+ network);
    }
  
}

public class defalt_method {
    public static void main(String[] args) {
        
        MysmartPhone ms = new MysmartPhone();
        ms.record4kvideo();
        String[] ar = ms.getNetworks();
        for (String item: ar){
            System.out.println(item);
        }

    }    
}
