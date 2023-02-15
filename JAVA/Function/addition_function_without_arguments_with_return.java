import java.util.Scanner;

public class addition_function_without_arguments_with_return {
    public static int Sum() {
        int a, b, sum = 0;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of a = ");
        a = sc.nextInt();
        System.out.print("Enter value of b = ");
        b = sc.nextInt();

        sum = a + b;

        sc.close();
        return sum;
    }

    public static void main(String[] args) {
        int sum = Sum();
        System.out.println("Sum is = " + sum);
    }
}
