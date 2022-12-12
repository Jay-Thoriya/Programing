class Employee{
    int id;
    String name;
    int salary;

    public void printDitail(){
        System.out.println("Employee id is : "+ id);
        System.out.println("Employee name is : "+ name);
    }
    
    public void printSalary(){
        System.out.println("Employee salary is : "+ salary);
    }

    public void getEmployee() {
    }

    public void setEmployee(String name2, String desg, float bsal) {
    }
    


}

public class Oops {

    public static void main(String[] args) {

        Employee emp1 = new Employee();
        Employee emp2 = new Employee();

        emp1.id = 5;
        emp1.name = "jay";
        emp1.salary = 1200000;

        
        emp2.id = 8;
        emp2.name = "kevin";
        emp2.salary = 2500000;

        emp1.printDitail();
        emp1.printSalary();

        emp2.printDitail();
        emp2.printSalary();
              
    }
    
}
