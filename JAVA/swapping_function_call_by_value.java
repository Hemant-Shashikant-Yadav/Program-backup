import java.util.Scanner;

public class swapping_function_call_by_value {
    public static void swap(int a, int b) {
        System.out.println("The value of A before swapping in swap function is = " + a);
        System.out.println("The value of B before swapping in swap function is = " + b);

        int temp = a;
        a = b;
        b = temp;

        System.out.println("The value of A after swapping in swap function is = " + a);
        System.out.println("The value of B after swapping in swap function is = " + b);

    }

    public static void main(String[] args) {
        int a, b;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of a = ");
        a = sc.nextInt();
        System.out.print("Enter value of b = ");
        b = sc.nextInt();

        System.out.println("The value of A before swapping is = " + a);
        System.out.println("The value of B before swapping is = " + b);

        swap(a, b);

        System.out.println("The value of A after swapping in main function is = " + a);
        System.out.println("The value of B after swapping in main function is = " + b);
        sc.close();
    }
}
