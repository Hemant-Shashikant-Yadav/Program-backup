import java.util.Scanner;

public class array1 {
    public static void main(String[] args) {
        int mark[] = new int[5];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter data in array = ");
        for (int i = 0; i < 5; i++) {
            mark[i] = sc.nextInt();
        }

        System.out.print("Array data = ");
        for (int i = 0; i < 5; i++) {
            System.out.printf("%4d", mark[i]);
        }
        sc.close();
    }
}
