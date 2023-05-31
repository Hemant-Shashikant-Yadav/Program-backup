import java.util.Scanner;

public class Q6FindMax {

    public void max(int num1, int num2) {
        int res = (num1 < num2) ? num2 : num1;
        System.out.println("The geatest number is = " + res);

    }

    public void max(int num1, int num2, int num3) {
        int res = (((num1 < num2) ? num1 = num2 : num1) < num3) ? num3 : num1;
        System.out.println("The geatest number is = " + res);

    }

    public static void main(String[] args) {
        Q6FindMax O = new Q6FindMax();

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
