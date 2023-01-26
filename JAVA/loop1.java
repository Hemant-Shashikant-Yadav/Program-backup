import java.util.Scanner;

public class loop1 {
    public static void main(String[] args) {

        int i = 1, n;
        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a number = ");
        n = sd.nextInt();

        // for (i = 1; i <= n; i++) {
        // System.out.println(i);
        // }

        // while (i <= n) {
        // System.out.println(i);
        // i++;
        // }

        do {
            System.out.println(i);
            i++;
        } while (i <= n);

        sd.close();

    }
}
