
class Square{
    public int area(int side){
        return side*side;
    } 
    public int perimeter(int side){
        return 4*side;
    }
}

class Rectangle{
    public int area(int b,int h){
        return h*b;
    } 
    public int perimeter(int b,int h){
        return 2*(b+h);
    }

}

class circle{
    public int area(int r){
        return (int) ((r*r)*3.14);
    } 
    public int diameter(int r){
        return 2*r;
    }
}


public class shap_formula {
    

    public static void main(String[] args) {
        
        Square squ = new Square();
        circle cir = new circle();
        Rectangle rec = new Rectangle();

        System.out.println("area of square : "+squ.area(5));
        System.out.println("Perimeter of square :"+squ.perimeter(5));

        System.out.println("area of "+cir.area(6));
        System.out.println("diameter of circle : "+cir.diameter(3));
 
        System.out.println("area of rectangle :"+rec.area(5, 7));
        System.out.println("perimeter of rectangle : "+rec.perimeter(4, 6));
    }
}
