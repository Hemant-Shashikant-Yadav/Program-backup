import java.util.Scanner;

public class sum_of_N_natural_no {
    public static void main(String[] args) {
        int i = 1, n, sum = 0;
        Scanner s = new Scanner(System.in);

        System.out.print("Enter a number = ");
        n = s.nextInt();

        for (i = 1; i <= n; i++) {
            sum += i;
        }

        System.out.println("The sum of first N natural no is " + sum);

        s.close();
        
    }
}
