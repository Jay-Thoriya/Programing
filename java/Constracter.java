
class Getter_and_setter{
    private int id;
    private String name;
    
    public Getter_and_setter() {
        this.id = 00 ;
        this.name = "pls Enter name ";
    }
    public Getter_and_setter(int i) {
        this.id = i;
        this.name = "pls enter name";
    }
    public Getter_and_setter(int id,String name){ 
        this.id = id;
        this.name = name;
    }
    // public void SetData(int id,String name){ this.id = id; this.name = name;}
    public int GetData_id(){ return id; }
    public String GetData_name(){ return name ; }

}


public class Constracter {

    public static void main(String[] args) {
        Getter_and_setter gs = new Getter_and_setter(2,"jayy");
        // gs.SetData(34, "jay");
        System.out.println(gs.GetData_id());
        System.out.println(gs.GetData_name());
    
    }
    
}
