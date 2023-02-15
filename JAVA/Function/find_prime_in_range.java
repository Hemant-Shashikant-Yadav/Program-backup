import java.util.Scanner;

public class find_prime_in_range {

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

        int UpperRange, LowerRange, res;

        System.out.print("Enter a upper range = ");
        UpperRange = sc.nextInt();
        System.out.print("Enter a lower range = ");
        LowerRange = sc.nextInt();

        for (int i = UpperRange; i <= LowerRange; i++) {
            res=0;
            res = CheckPrime(i);
            if (res == 1) {
                System.out.println("Number " + i + " is prime.");
            }
        }

        sc.close();
    }
}
