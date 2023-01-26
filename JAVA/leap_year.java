import java.util.Scanner;

/**
 * leap_year
 */
public class leap_year {
    public static void main(String[] args) {
        int year;

        Scanner sd = new Scanner(System.in);

        System.out.print("Enter the year = ");
        year = sd.nextInt();

        if (year % 4 == 0) {
            System.out.println("It is a leap year.");
        } else if (year % 100 == 0) {
            System.out.println("It is not a leap year.");
        } else if (year % 400 == 0) {
            System.out.println("It is a leap year.");
        } else {
            System.out.println("It is not a leap year.");
        }

        sd.close();
    }
}