import java.util.Scanner;

public class BasicCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double previousAnswer = 0;
        boolean continueCalculating = true;

        while (continueCalculating) {  //infinte loop
            System.out.println("Previous Answer: " + previousAnswer);

            System.out.print("Enter a number or use previous answer: ");
            String input = scanner.next();

            double num;
            if (input.equalsIgnoreCase("ans")) {
                num = previousAnswer;
            } else {
                num = Double.parseDouble(input);
            }

            System.out.println("Select an operation:");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Clear Previous Answer");
            System.out.println("6. Exit");

            int choice = scanner.nextInt();
            double result = 0;

            switch (choice) {
                case 1:
                    System.out.print("Enter the number to add: ");
                    double addNum = scanner.nextDouble();
                    result = num + addNum;
                    break;
                case 2:
                    System.out.print("Enter the number to subtract: ");
                    double subtractNum = scanner.nextDouble();
                    result = num - subtractNum;
                    break;
                case 3:
                    System.out.print("Enter the number to multiply: ");
                    double multiplyNum = scanner.nextDouble();
                    result = num * multiplyNum;
                    break;
                case 4:
                    System.out.print("Enter the number to divide by: ");
                    double divideNum = scanner.nextDouble();
                    if (divideNum != 0) {
                        result = num / divideNum;
                    } else {
                        System.out.println("Cannot divide by zero.");
                        continue;
                    }
                    break;
                case 5:
                    previousAnswer = 0;
                    continue;
                case 6:
                    continueCalculating = false;
                    break;
                default:
                    System.out.println("Invalid choice.");
                    continue;
            }

            previousAnswer = result;
            System.out.println("Result: " + result);
        }

        System.out.println("Calculator program has been stopped.");
    }
}
