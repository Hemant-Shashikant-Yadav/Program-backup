import java.util.Scanner;

public class encrypting_grades {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char grade;

        System.out.print("Enter the grades = ");
        grade = sc.next().charAt(0);

        grade = (char) (grade + 10);
        System.out.print("\nEncrypted grade is = " + grade);

        grade = (char) (grade - 10);

        System.out.print("\nDecrypted grade is = " + grade);

        sc.close();
    }
}
