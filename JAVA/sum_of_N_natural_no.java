import java.util.Scanner;

public class sum_of_N_natural_no {
    public static void main(String[] args) {
        int i = 1, n, sum = 0;
        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a number = ");
        n = sd.nextInt();

        for (i = 1; i <= n; i++) {
            sum += i;
        }

        System.out.println("The sum of first N natural no is " + sum);

        sd.close();
        
    }
}
