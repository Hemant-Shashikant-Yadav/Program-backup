import java.util.Scanner;

public class Q1Arithmetic {
    public static void checkExeption(int a, int b) {
        try {
            int c = a / b;
            System.out.println("Division of two numbers is =" + c);
        } catch (ArithmeticException e) {
            System.out.println("You got the arithmetic eroor.\nThe division operation cannot be performed.");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter to numbers = ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        checkExeption(a, b);
    }

}