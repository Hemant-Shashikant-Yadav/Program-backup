import java.util.Scanner;

public class product_of_two_num_input {
    public static void main(String[] args) {
        Scanner scanData = new Scanner(System.in);

        System.out.print("Enter number 1 = ");
        int a = scanData.nextInt();

        System.out.print("\nEnter number 2 = ");
        int b = scanData.nextInt();

        int product = a *b;

        System.out.println("Product = " + product);
    
    scanData.close();
    }
}
