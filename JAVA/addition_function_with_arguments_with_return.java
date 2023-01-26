import java.util.Scanner;

public class addition_function_with_arguments_with_return {
    public static int Sum(int a, int b) {

        int sum = a + b;

        return sum;
    }

    public static void main(String[] args) {
        int a, b;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of a = ");
        a = sc.nextInt();
        System.out.print("Enter value of b = ");
        b = sc.nextInt();

        int sum = Sum(a, b);
        System.out.println("Sum is = " + sum);
        sc.close();
    }
}
