import java.util.Scanner;

interface shape {
    double calculateArea();
}

class Circle implements shape {
    public double calculateArea() {
        int r;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius of circle = ");
        r = sc.nextInt();
        double area = 3.14f * r * r;
        return area;
    }
}

class Rectangle implements shape {
    public double calculateArea() {
        int l, b;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of rectangle = ");
        l = sc.nextInt();
        System.out.print("Enter breadth of rectangle = ");
        b = sc.nextInt();
        double area = l * b;
        return area;
    }
}

class Triangle implements shape {
    public double calculateArea() {
        int b, h;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter base of triangle = ");
        b = sc.nextInt();
        System.out.print("Enter height of triangle = ");
        h = sc.nextInt();
        double area = 0.5 * h * b;
        return area;
    }
}

public class Q2Area {

    public static void main(String[] args) {
        Circle A = new Circle();

        System.out.println("Area of circle is  = " + A.calculateArea());

        Rectangle B = new Rectangle();
        System.out.println("Area of rectangle is  = " + B.calculateArea());

        Triangle C = new Triangle();

        System.out.println("Area of triangle is  = " + C.calculateArea());

    }
}
