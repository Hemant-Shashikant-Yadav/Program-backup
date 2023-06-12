import java.util.Scanner;

/**
 * InnerQ1Calculator
 */
interface ArithmeticOperations {
    int add(int num1, int num2);

    int subtract(int num1, int num2);

    int multiply(int num1, int num2);

    float divide(int num1, int num2);
}

class Calculator implements ArithmeticOperations {
    int num1, num2;

    public int add(int num1, int num2) {
        return (num1 + num2);
    }

    public int subtract(int num1, int num2) {
        return (num1 - num2);
    }

    public int multiply(int num1, int num2) {
        return (num1 * num2);
    }

    public float divide(int num1, int num2) {
        return (((float) num1 / (float) num2));
    }
}

public class Q1Calculator  {
    public static void main(String[] args) {
        int num1, num2;
        Scanner sc = new Scanner(System.in);
        Calculator C = new Calculator();

        // Q1Calculator C = new Q1Calculator();

        System.out.print("Enter number 1 = ");
        num1 = sc.nextInt();
        System.out.print("Enter number 1 = ");
        num2 = sc.nextInt();

        System.out.println("The addition of two numbers is = " + C.add(num1, num2));
        System.out.println("The subtraction of two numbers is = " + C.subtract(num1, num2));
        System.out.println("The multiplication of two numbers is = " + C.multiply(num1, num2));
        System.out.println("The subtraction of two numbers is = " + C.divide(num1, num2));
    }
}
