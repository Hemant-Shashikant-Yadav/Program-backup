import java.util.Scanner;

public class Table {

    public static void main(String[] args) {
        int num, i;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number = ");
        num = sc.nextInt();

        for (i = 1; i <= 10; i++) {
            System.out.println(num + " X " + i + " = " + i * num);
        }
    }
}