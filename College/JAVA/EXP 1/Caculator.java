import java.util.Scanner;

public class Caculator {

    public static void main(String[] args) {
        int num1, num2, opt;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number 1 = ");
        num1 = sc.nextInt();
        System.out.print("Enter number 2 = ");
        num2 = sc.nextInt();

        while (true) {

            System.out.print(
                    "\n\n1.Change numbers.\n2.Addition.\n3.Subtraction.\n4.Multiplication.\n5.Division.\n6.Modulus.\n7.Exit.\nChoose = ");

            opt = sc.nextInt();

            System.out.println();
            if (opt == 7) {
                break;
            }

            System.out.println("Number 1 = " + num1);
            System.out.println("Number 2 = " + num2);
            switch (opt) {
                case 1:
                    System.out.print("Enter new value of number 1 = ");
                    num1 = sc.nextInt();
                    System.out.print("Enter new value of number 2 = ");
                    num2 = sc.nextInt();

                    break;
                case 2:
                    System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));

                    break;
                case 3:
                    System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
                    System.out.println(num1 + " - " + num2 + " (absolute) = " + Math.abs(num1 - num2));

                    break;
                case 4:
                    System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));

                    break;
                case 5:
                    System.out.println(num1 + " / " + num2 + " = " + ((float) num1 / (float) num2));

                    break;
                case 6:
                    System.out.println(num1 + " mod " + num2 + " = " + (num1 % num2));

                    break;

                default:
                    System.out.println("Invalid option.");
                    break;
            }
        }
    }
}
