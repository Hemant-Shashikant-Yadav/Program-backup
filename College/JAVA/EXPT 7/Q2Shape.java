class shape {
    float calculateArea() {
        System.out.println("Super class function.");
        return 0;
    }
}

class circle extends shape {
    int r;

    circle(int a) {
        r = a;
    }

    float calculateArea() {
        System.out.println("This is a circle.");
        return (3.14f * r * r);
    }
}

class rectangle extends shape {
    int l, b;

    rectangle(int a, int c) {
        l = a;
        b = c;
    }

    float calculateArea() {
        System.out.println("This is a rectangle.");
        return (l * b);
    }
}

class triangle extends shape {
    int b, h;

    triangle(int a, int c) {
        b = a;
        h = c;
    }

    float calculateArea() {
        System.out.println("This is a triangle.");
        return (b * h) / 2;
    }
}

public class Q2Shape {
    public static void main(String[] args) {
        shape S1 = new circle(12);
        System.out.println("Area = "+S1.calculateArea());

        shape S2 = new rectangle(19,24);

        System.out.println("Area = "+S2.calculateArea());
        shape S3 = new rectangle(12,32);
        System.out.println("Area = "+S3.calculateArea());

    }

}