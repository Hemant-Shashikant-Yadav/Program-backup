import java.util.Scanner;

public class array_pairs {
    public static void main(String[] args) {
        int array[] = new int[5];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter elements of array = ");
        for (int i = 0; i < 5; i++) {
            array[i] = sc.nextInt();
        }

        for (int i = 0; i < array.length ; i++) {
            for (int j = i+1; j < array.length; j++) {
                System.out.print("(" + array[i] + "," + array[j] + ") ");
            }
            System.out.println();
        }

        sc.close();
    }
}
