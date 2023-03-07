import java.util.Scanner;

public class Digonal_sum {
    public static void main(String[] args) {
        int matrix[][] = new int[3][3];
        int sum = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements in matrix = ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < matrix.length; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        // for (int i = 0; i < 3; i++) {
        // for (int j = 0; j < matrix.length; j++) {

        // if (i == j) {
        // sum += matrix[i][j];
        // }
        // if (i + j == matrix.length - 1 && i != j) {
        // sum += matrix[i][j];
        // }
        // }
        // }

        for (int i = 0; i < matrix.length; i++) {
            sum += matrix[i][i];

            if (i != matrix.length - 1 - i) {
                sum += matrix[i][matrix.length - i - 1];
            }
        }
        System.out.println("The sum of digonal elements in matrix = " + sum);

        sc.close();
    }
}
