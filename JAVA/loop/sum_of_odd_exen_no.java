import java.util.Scanner;

public class sum_of_odd_exen_no {
    public static void main(String[] args) {
        int no, i = 0, evensum = 0, oddsum = 0;

        Scanner sd = new Scanner(System.in);
        while (i < 10) {

            System.out.print("Enter a number = ");
            no = sd.nextInt();

            if (no % 2 == 0) {
                evensum += no;
            } else {
                oddsum += no;
            }

            i++;
        }

        System.out.println("Sum of all even no. entered is = "+evensum);
        System.out.println("Sum of all odd no. entered is = "+oddsum);
        sd.close();
    }
}
