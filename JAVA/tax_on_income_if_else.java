import java.util.Scanner;

public class tax_on_income_if_else {
    public static void main(String[] args) {
        int income;
        Scanner sd = new Scanner(System.in);

        System.out.print("Enter your income = ");
        income = sd.nextInt();

        if (income < 250000) {
            System.out.println("You dont have to pay any tax");
        } else if (250000 <= income && income < 500000) {
            System.out.println("You have to pay 5% tax");

        } else if (500000 <= income && income < 750000) {
            System.out.println("You have to pay 10% tax");

        } else if (750000 <= income && income < 1000000) {
            System.out.println("You have to pay 15% tax");

        } else if (1000000 <= income && income < 1250000) {
            System.out.println("You have to pay 20% tax");

        } else if (1250000 <= income && income < 1500000) {
            System.out.println("You have to pay 25% tax");

        } else {
            System.out.println("You have to pay 30% tax");
        }
sd.close();
    }
}
