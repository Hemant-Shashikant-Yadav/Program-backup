import java.util.Scanner;

public class Reverse_array {
    public static void reverse(int array[]) {
        int i = 0, j = array.length-1;

        while (i < j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

            i++;
            j--;
        }

        System.out.print("Reversed array is = ");
        for (int j2 = 0; j2 < array.length; j2++) {
            System.out.printf("%4d", array[j2]);
        }
    }

    public static void main(String[] args) {
        int array[] = new int[10];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter elements of array = ");
        for (int i = 0; i < 10; i++) {
            array[i] = sc.nextInt();
        }

        reverse(array);

        sc.close();
    }
}
