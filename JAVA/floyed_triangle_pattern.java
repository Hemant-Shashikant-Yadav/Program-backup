import java.util.Scanner;

public class floyed_triangle_pattern {
    public static void main(String[] args) {

        int n,x=1;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a no = ");
        n = sd.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                // System.out.print(x+" ");
                System.out.printf("%2d ",x);
                x++;
            }
            System.out.println();
        }

        sd.close();
    }
}