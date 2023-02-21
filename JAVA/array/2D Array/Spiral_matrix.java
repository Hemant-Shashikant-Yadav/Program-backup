
/**
 * Spiral_matrix
 */
import java.util.Scanner;

public class Spiral_matrix {

    public static void print_spiral(int arr[][]) {
        int StRow = 0, StCol = 0, EndRow = arr.length - 1, EndCol = arr[0].length - 1;

        while (StRow <= EndRow && StCol <= EndCol) {
            for (int i = StCol; i <= EndCol; i++) {
                System.out.print(arr[StRow][i] + " ");
            }

            for (int i = StRow + 1; i <= EndRow; i++) {
                System.out.print(arr[i][EndCol] + " ");
            }

            for (int i = EndCol - 1; i >= StCol; i--) {
                if (StRow==EndRow) {
                    break;
                }
                System.out.print(arr[EndRow][i] + " ");
            }

            for (int i = EndRow- 1; i >= StRow + 1; i--) {
                if (StCol==EndCol) {
                    break;
                }
                System.out.print(arr[i][StCol] + " ");
            }
            StRow++;
            StCol++;
            EndCol--;
            EndRow--;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int matrix[][] = new int[3][3];

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements in matrix = ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < matrix.length; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        System.out.println("The elements in matrix = ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < matrix.length; j++) {

                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        print_spiral(matrix);

        sc.close();
    }
}