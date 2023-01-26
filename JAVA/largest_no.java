import java.util.Scanner;

/**
 * largest_no
 */
public class largest_no {

    public static void main(String[] args) {
        int a, b, c;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter three numbers = ");
        a = sd.nextInt();
        b = sd.nextInt();
        c = sd.nextInt();

        if (a > b && a > c) {
            System.out.println(a + " is greatest.");
        } else if (b > a && b > c) {
            System.out.println(b + " is greatest.");
        } else {
            System.out.println(c + " is greatest.");
        }
        sd.close();
    }
}