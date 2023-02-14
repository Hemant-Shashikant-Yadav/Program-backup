import java.util.Scanner;

public class inverted_pyramid_number {

    public static void main(String[] args) {
        int n;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a no = ");
        n = sd.nextInt();

        for (int j = n; j > 0; j--) {
            for (int i = 1; i <= j; i++  ) {
                System.out.print(i+" ");
            }
            System.out.println();
        }

        sd.close();
    }
}