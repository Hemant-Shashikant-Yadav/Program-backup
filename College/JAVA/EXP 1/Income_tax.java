import java.util.Scanner;

public class Income_tax {
    public static void main(String[] args) {
        float income, tax=0, rate = 0.1f;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter income = ");
        income = sc.nextFloat();

        if (income > 20000 && income <= 40000) {
            tax = (income - 20000) * rate;
        } else if (income > 40000 && income <= 60000) {
            tax = (20000 * rate) + ((income - 40000) * (rate + 0.1f));
        } else if (income > 60000) {
            tax = (20000 * rate) + ((40000) * (rate + 0.1f)) + ((income - 60000) * (rate + 0.2f));
        }

        System.out.println("Tax = " + tax);
    }
}
