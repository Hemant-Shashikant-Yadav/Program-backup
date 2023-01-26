import java.util.Scanner;

public class inverted_star {

    public static void main(String[] args) {
        int n;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a no = ");
        n = sd.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = n; j >i; j--) {
                System.out.print("* ");
            }
            System.out.println();
        }

        sd.close();
    }
}