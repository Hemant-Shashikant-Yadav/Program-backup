import java.util.Scanner;

class Calculator {

    int num1, num2;
}

class Addition extends Calculator {

    public void sum() {
        System.out.println("The addition of two numbers is = " + (num1 + num2));
    }

}

public class Calculator2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Addition b = new Addition();

        System.out.print("Enter number 1 = ");
        b.num1 = sc.nextInt();
        System.out.print("Enter number 2 = ");
        b.num2 = sc.nextInt();

        b.sum();
    }
}