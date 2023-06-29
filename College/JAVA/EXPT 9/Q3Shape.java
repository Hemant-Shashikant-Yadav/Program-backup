
abstract class Shape {
    String name1;

    Shape(String name) {
        name1 = name;
    }

    public abstract double calculateArea();

    public void displayShape() {
        System.out.println("The name of shape is = " + name1);
    }
}

class Rectangle extends Shape {
    private double l, b;

    Rectangle(String name, double len, double bdt) {
        super(name);
        l = len;
        b = bdt;
    }

    public double calculateArea() {
        double area = 0;
        area = l * b;
        return area;
    }
}

class Circle extends Shape {
    private double r;

    Circle(String name, double red) {
        super(name);
        r = red;
    }

    public double calculateArea() {
        double area = 0;
        area = 3.14 * r * r;
        return area;
    }
}

public class Q3Shape {
    public static void main(String[] args) {
        Rectangle R = new Rectangle("Rectangle", 10, 15);
        R.displayShape();
        System.out.println("Area of shape = " + R.calculateArea());

        System.out.println();

        Circle C = new Circle("Circle", 10);
        C.displayShape();
        System.out.println("Area of shape = " + C.calculateArea());
    }

}
