import java.util.Scanner;

public class addition_function_without_arguments_without_return {
    public static void Sum() {
        int a, b, sum = 0;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of a = ");
        a = sc.nextInt();
        System.out.print("Enter value of b = ");
        b = sc.nextInt();

        sum = a + b;

        System.out.println("Sum is = " + sum);

        sc.close();
    }

    public static void main(String[] args) {
        Sum();  
    }
}
