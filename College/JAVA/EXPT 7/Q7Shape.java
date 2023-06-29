
class shape {
    void calculateArea() {
        System.out.println("Super class function.");
    }
}

class circle extends shape {
    int r;

    circle(int a) {
        r = a;
    }

    void calculateArea() {
        System.out.println("Area of circle = " + 3.14 * r * r);
    }
}

class rectangle extends shape {
    int l, b;

    rectangle(int a, int c) {
        l = a;
        b = c;
    }

    void calculateArea() {
        System.out.println("Area of rectangle = " + l * b);
    }
}

public class Q7Shape {
    

    public static void main(String[] args) {
        shape A= new circle(10);
       
        A.calculateArea();

        shape B = new rectangle(48,21);
        B.calculateArea();

    }

}


