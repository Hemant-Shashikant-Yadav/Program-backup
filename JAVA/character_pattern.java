
import java.util.Scanner;

public class character_pattern {

    public static void main(String[] args) {
        int n;
        char a = 'A';

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a no = ");
        n = sd.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(a+" ");
                a++;
            }
            System.out.println();
        }

        sd.close();
    }
}