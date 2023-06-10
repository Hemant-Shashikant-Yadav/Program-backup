import java.util.Scanner;

class Calculator {

    int num1, num2;
}

class Addition extends Calculator {

    public void sum() {
        System.out.println("The addition of two numbers is = " + (num1 + num2));
    }

}

public class Q1Calculator {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Addition a = new Addition();

        System.out.print("Enter number 1 = ");
        a.num1 = sc.nextInt();
        System.out.print("Enter number 2 = ");
        a.num2 = sc.nextInt();

        a.sum();
    }
}