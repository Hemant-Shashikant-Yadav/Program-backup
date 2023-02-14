import java.util.Scanner;

public class binary_search {
    public static int binary(int array[], int key) {
        int st = 0, end = array.length, mid;

        while (st < end) {
            mid = (st + end) / 2;

            if (key == array[mid]) {
                return mid;
            } else if (key < array[mid]) {
                end = mid - 1;
            } else if (key > array[mid]) {
                st = mid + 1;
            }
        }
        return -1;

    }

    public static void main(String[] args) {
        int array[] = new int[7];
        int key;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the elements in array = ");
        for (int i = 0; i < 7; i++) {
            array[i] = sc.nextInt();
        }

        System.out.print("Enter the key element = ");
        key = sc.nextInt();

        int check = binary(array, key);

        if (check == -1) {
            System.out.println("Search value not found.");
        } else {
            System.out.println("Search value found at index = " + check);
        }

        sc.close();
    }
}
