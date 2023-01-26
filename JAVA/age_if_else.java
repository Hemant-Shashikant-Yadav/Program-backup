import java.util.Scanner;

public class age_if_else {
    public static void main(String[] args) {
        int age;
        Scanner sd = new Scanner(System.in);

        System.out.print("Enter your age = ");
        age = sd.nextInt();

        if (0 < age && age < 18) {
            System.out.println("You are child.");
        } else if (17 < age && age < 60) {

            System.out.println("You are an adult.");
        } else {
            System.out.println("You are a senion citizen.");

            sd.close();
        }
    }
}
