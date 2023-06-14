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

public class Q3Shape {
    public static void main(String[] args) {
        shape S[] = new circle[3];
        S[0] = new circle(5);
        S[1] = new circle(3);
        S[2] = new circle(2);
        S[0].calculateArea();
        S[1].calculateArea();
        S[2].calculateArea();

        shape S1[] = new rectangle[3];
        S1[0] = new rectangle(15, 21);
        S1[1] = new rectangle(3, 41);
        S1[2] = new rectangle(32, 21);
        S1[0].calculateArea();
        S1[1].calculateArea();
        S1[2].calculateArea();

    }

}