import java.util.Scanner;

public class addition_function_with_arguments_without_return {
    public static void Sum(int a, int b) {

        int sum = a + b;

        System.out.println("Sum is = " + sum);

    }

    public static void main(String[] args) {
        int a, b;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of a = ");
        a = sc.nextInt();
        System.out.print("Enter value of b = ");
        b = sc.nextInt();

        
        Sum(a, b);
        sc.close();
    }
}
