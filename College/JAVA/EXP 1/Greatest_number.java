import java.util.Scanner;

public class Greatest_number {

    public static void main(String[] args) {
        int num1, num2, num3;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number 1= ");
        num1 = sc.nextInt();
        System.out.print("Enter a number 2= ");
        num2 = sc.nextInt();
        System.out.print("Enter a number 3= ");
        num3 = sc.nextInt();

        if ((num1 < num2) && (num2 < num3)) {
            System.out.println("True");
        } else {

            System.out.println("False");
        }
    }
}
