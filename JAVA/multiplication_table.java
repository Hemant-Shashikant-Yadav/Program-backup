import java.util.Scanner;

public class multiplication_table {
    public static void main(String[] args) {
        int no;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter no = ");
        no = sd.nextInt();

        System.out.println("Table = ");
        for (int i = 1; i < 11; i++) {
            System.out.println(no * i);
        }

        sd.close();
    }
}
