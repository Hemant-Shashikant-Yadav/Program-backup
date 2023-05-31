import java.util.Scanner;


public class Q5Area {
    public int area(int side) {
        return (side * side);
    }

    public int area(int length, int bradth) {
        return (length * bradth);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Q5Area A = new Q5Area();
        int a, b;

        System.out.print("Enter side of square = ");
        a = sc.nextInt();
        System.out.println("The area of a square = " + A.area(a));
        
        System.out.print("Enter length and breadth of rectangle = ");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("The area of a rectangle = " + A.area(a,b));
    }
}
