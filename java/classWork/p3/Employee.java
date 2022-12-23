package p3;

public class Employee {
    public String name , desg;
    public float bsal ,HR,DE ;
    
    public Employee(String Ename , String Edesg ,float Ebsal ){
        name = Ename;
        desg = Edesg;
        bsal = Ebsal;
    }

    public void getEmployee(){
        System.out.println("name : "+ name);
        System.out.println("desg : "+ desg);
        System.out.println("Total salery : "+ (bsal + bsal*0.22 + bsal*0.27));
    }

    
}

