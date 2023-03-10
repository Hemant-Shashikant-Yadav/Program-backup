package Basic;

import java.util.Scanner;

public class addition_of_two_number_input {
    public static void main(String[] args) {
        Scanner scanData = new Scanner(System.in);

        System.out.print("Enter number 1 = ");
        int a = scanData.nextInt();

        System.out.print("\nEnter number 2 = ");
        int b = scanData.nextInt();

        int sum = a + b;

        System.out.println("Sum = " + sum);
    
        scanData.close();
    }
}
