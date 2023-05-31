import java.util.Scanner;

public class Q1FindMax {

    public void max(int num1, int num2) {
        if (num1 < num2) {
            System.out.println("The geatest number is = " + num2);
        } else {
            System.out.println("The geatest number is = " + num1);
        }

    }

    public void max(int num1, int num2, int num3) {
        if (num1 < num2) {
            if (num3 < num2) {

                System.out.println("The geatest number is = " + num2);
            } else {
                System.out.println("The geatest number is = " + num3);

            }
        } else {
            if (num3 < num1) {

                System.out.println("The geatest number is = " + num1);
            } else {
                System.out.println("The geatest number is = " + num3);

            }
        }

    }

    public static void main(String[] args) {
        Q1FindMax O = new Q1FindMax();

        Scanner sc = new Scanner(System.in);
        int num1, num2, num3;

        System.out.print("Enter two numbers = ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();

        O.max(num1, num2);

        System.out.print("Enter three numbers = ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        num3 = sc.nextInt();

        O.max(num1, num2, num3);
    }
}
