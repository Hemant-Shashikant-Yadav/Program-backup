import java.util.Scanner;

public class linear_search_integer {
    public static int search(int array[], int key) {
        for (int i = 0; i < 10; i++) {
            if (key == array[i]) {
                return 1;
            }
        }
        return 0;
    }

    public static void main(String[] args) {
        int array[] = new int[10];
        int key;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter elements of array = ");
        for (int i = 0; i < 10; i++) {
            array[i] = sc.nextInt();
        }

        System.out.print("Enter a key value you want to search = ");
        key = sc.nextInt();

        int res = search(array, key);

        if (res == 1) {
            System.out.println("Search key is found!!!");
        } else {
            System.out.println("Search key not found!!!");
        }

        sc.close();
    }
}
