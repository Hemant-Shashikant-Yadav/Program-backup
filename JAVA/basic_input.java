import java.util.Scanner;

public class basic_input {
    public static void main(String[] args) {
        Scanner scanData = new Scanner(System.in);

        // 1.
        System.out.print("Enter a number = ");
        int number = scanData.nextInt();
        System.out.println("The number entered is = " + number);

        // 2.
        System.out.print("Enter a character = ");
        String letter = scanData.next();
        System.out.println("The letter enterd is = " + letter);

        scanData.nextLine();// stores buffer character

        // 3.
        System.out.print("Enter a string = ");
        String name = scanData.nextLine();
        System.out.println("The string entered is = " + name);

        // 4.
        System.out.print("Enter a float value = ");
        float num = scanData.nextFloat();
        System.out.println("The float value entered is = " + num);

        // 5.
        // boolean
        System.out.print("Do you have driving lisance (True / False) = ");
        boolean ans = scanData.nextBoolean();
        if (ans == true) {
            System.out.println("You can drive a car.");
        } else {
            System.out.println("You can't drive a car.");
        }
    }

}
