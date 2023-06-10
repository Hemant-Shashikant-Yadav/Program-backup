import java.util.Scanner;

interface shape {
    double calculateArea();

    double calculatePerimeter();
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

    public double calculatePerimeter() {
        int r;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius of circle = ");
        r = sc.nextInt();

        return 2 * 3.14 * r;
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

    public double calculatePerimeter() {
        int l, b;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of rectangle = ");
        l = sc.nextInt();
        System.out.print("Enter breadth of rectangle = ");
        b = sc.nextInt();
        return l + b;
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

    public double calculatePerimeter() {
        int l1, l2, l3;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length of side 1 of triangle = ");
        l1 = sc.nextInt();
        System.out.print("Enter length of side 2 of triangle = ");
        l2 = sc.nextInt();
        System.out.print("Enter length of side 3 of triangle = ");
        l3 = sc.nextInt();
        return l1 + l2 + l3;
    }
}

public class Q3AreaPerimeter {

    public static void main(String[] args) {
        Circle A = new Circle();

        System.out.println("Area of circle is  = " + A.calculateArea());
        System.out.println("Perimeter of circle is  = " + A.calculatePerimeter());

        Rectangle B = new Rectangle();
        System.out.println("Area of rectangle is  = " + B.calculateArea());
        System.out.println("Perimeter of rectangle is  = " + B.calculatePerimeter());

        Triangle C = new Triangle();

        System.out.println("Area of triangle is  = " + C.calculateArea());
        System.out.println("Perimeter of triangle is  = " + C.calculatePerimeter());

    }
}
