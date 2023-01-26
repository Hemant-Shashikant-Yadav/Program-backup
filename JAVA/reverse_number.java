import java.util.Scanner;

public class reverse_number {
    public static void main(String[] args) {
        int no, rev = 0;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter a number = ");
        no = sd.nextInt();

        while (no > 0) {
            rev = rev * 10 + (no % 10);
            no /= 10;
        }

        System.out.println("Reversed no is = "+rev);

        sd.close();
    }
}
