import java.util.Scanner;

public class Q1_Rectangle_area {

    public static class Area {
        int length, breadth;

        void setDim(int length, int breadth) {
            this.length = length;
            this.breadth = breadth;
        }

        int getArea() {
            return length * breadth;
        }
    }

    public static void main(String[] args) {
        int length, breadth;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length = ");
        length = sc.nextInt();
        System.out.print("Enter breadth = ");
        breadth = sc.nextInt();

        Area A = new Area();

        A.setDim(length, breadth);

        System.out.println("The area of rectangle = " + A.getArea());
    }
}
