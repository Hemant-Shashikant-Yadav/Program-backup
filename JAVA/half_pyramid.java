import java.util.Scanner;


public class half_pyramid {
    public static void main(String[] args) {
        int n;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a no = ");
        n = sd.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(j+1+" ");
            }
            System.out.println();
        }

        sd.close();
    }
}
