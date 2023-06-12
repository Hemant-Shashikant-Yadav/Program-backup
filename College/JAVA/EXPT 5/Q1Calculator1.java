import java.util.Scanner;

class Calculator {

    int num1, num2;
}

class Addition extends Calculator {
    Scanner sc = new Scanner(System.in);

    public void sum() {
        System.out.println("The addition of two numbers is = " + (num1 + num2));
    }

    public void SETDATA() {
        System.out.print("Enter number 1 = ");
        num1 = sc.nextInt();
        System.out.print("Enter number 2 = ");
        num2 = sc.nextInt();
    }

}

public class Q1Calculator1 {

    public static void main(String[] args) {
        Addition a = new Addition();
        a.SETDATA();
        a.sum();
    }

    public String add(int num1, int num2) {
        return null;
    }
}