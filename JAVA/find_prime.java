import java.util.Scanner;

/**
 * find_prime
 */
public class find_prime {

    public static int CheckPrime(int no) {
        for (int i = 2; i < Math.sqrt(no); i++) {
            if (no % i == 0) {
                return 0;
            }
        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int no, res;

        System.out.print("Enter a number = ");
        no = sc.nextInt();

        res = CheckPrime(no);

        if (res == 1) {
            System.out.println("Number is prime.");
        } else {
            System.out.println("Number is not prime.");
        }

        sc.close();
    }
}