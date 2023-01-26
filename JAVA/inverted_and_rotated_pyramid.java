import java.util.Scanner;

public class inverted_and_rotated_pyramid {
    public static void main(String[] args) {
        int n;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a no = ");
        n = sd.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j<=n-i) {
                    System.out.print("  ");
                }
                else
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }

        sd.close(); 
    }
}
