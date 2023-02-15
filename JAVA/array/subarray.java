import java.util.Scanner;

public class subarray {
    public static void main(String[] args) {
        int array[] = new int[5];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter elements of array = ");
        for (int i = 0; i < 5; i++) {
            array[i] = sc.nextInt();
        }

        for (int i = 0; i < array.length; i++) {
            for (int j = i ; j < array.length; j++) {
                for (int j2 = i; j2 <= j; j2++) {
                    System.out.print(array[j2]);
                }
                System.out.print("   ");
            }
            System.out.println();
        }

        sc.close();
    }
}
