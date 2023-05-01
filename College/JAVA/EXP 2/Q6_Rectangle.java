class Rectangle {
    int length, breadth;

    Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    int area() {
        return length * breadth;
    }
}

public class Q6_Rectangle {
    public static void main(String[] args) {
        Rectangle R1 = new Rectangle(4, 5);
        Rectangle R2 = new Rectangle(5, 8);

        System.out.println("Area of first rectangle (4,5) = " + R1.area());
        System.out.println("Area of first rectangle (5,8) = " + R2.area());
    }
}
