import java.util.Scanner;

public class Search_in_sorted_matrix {

    public static void main(String[] args) {
        int matrix[][] = { { 10, 20, 30, 40 },
                { 15, 25, 36, 45 },
                { 27, 29, 37, 48 },
                { 32, 33, 39, 50 } };

        int key;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the key value = ");
        key = sc.nextInt();

        // bruteforce(matrix, key);
        // binary_search(matrix, key);
        staircase(matrix, key);

        sc.close();
    }

    public static void bruteforce(int matrix[][], int key) {
        boolean flag = false;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix.length; j++) {
                if (key == matrix[i][j]) {
                    System.out.println("The key value " + key + " is found at ( " + i + " , " + j + " ) position.");
                    flag = true;
                    break;
                }
            }
        }
        if (flag == false) {
            System.out.println("The search value is not found in matrix.");
        }
    }

    public static void binary_search(int matrix[][], int key) {
        boolean flag = false;
        for (int i = 0; i < matrix.length; i++) {

            int low = 0;
            int high = matrix.length - 1;
            int mid;

            while (low <= high) {

                mid = (low + high) / 2;

                if (key == matrix[i][mid]) {
                    System.out.println("The key value " + key + " is found at ( " + i + " , " + mid + " ) position.");
                    flag = true;
                    break;
                } else if (key < matrix[i][mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        if (flag == false) {
            System.out.println("The search value is not found in matrix.");
        }
    }

    public static void staircase(int matrix[][], int key) {
        // int row = 0, col = matrix[0].length - 1;
        // boolean flag = false;

        // while (row != matrix.length
        // && col != 0) {

        // if (key == matrix[row][col]) {
        // System.out.println("The key value " + key + " is found at ( " + row + " , " +
        // col + " ) position.");
        // flag = true;
        // break;
        // } else if (key < matrix[row][col]) {
        // col--;
        // } else {
        // row++;
        // }
        // }
        // if (flag == false) {
        // System.out.println("The search value is not found in matrix.");
        // }



        int row = matrix.length - 1, col = 0;
        boolean flag = false;

        while (row != 0
                && col != matrix.length) {

            if (key == matrix[row][col]) {
                System.out.println("The key value " + key + " is found at ( " + row + " , " + col + " ) position.");
                flag = true;
                break;
            } else if (key > matrix[row][col]) {
                col++;
            } else {
                row--;
            }
        }
        if (flag == false) {
            System.out.println("The search value is not found in matrix.");
        }
    }
}
