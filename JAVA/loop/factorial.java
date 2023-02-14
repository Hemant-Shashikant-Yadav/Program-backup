import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        int no, fact = 1;

        Scanner sd = new Scanner(System.in);

        System.out.println("Enter a number = ");
        no = sd.nextInt();

        for (int i = 2; i <= no; i++) {
            fact *= i;
        }

        System.out.println("Factorial of " + no + " is " + fact);
    
        sd.close();
    }
}
