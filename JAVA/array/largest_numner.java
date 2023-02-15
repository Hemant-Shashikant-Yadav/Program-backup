import java.util.Scanner;

public class largest_numner {
    public static void largest(int array[]) {
        int largest = Integer.MIN_VALUE;

        for (int i = 0; i < array.length; i++) {
            if (largest < array[i]) {
                largest = array[i];
            }
        }

        System.out.println("Largest number in array is  = " + largest);
    }

    public static void main(String[] args) {
        int array[] = new int[7];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the elements in array = ");
        for (int i = 0; i < 7; i++) {
            array[i] = sc.nextInt();
        }

        largest(array);

        sc.close();
    }
}
