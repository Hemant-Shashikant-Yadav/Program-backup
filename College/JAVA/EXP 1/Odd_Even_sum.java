
public class Odd_Even_sum {

    public static void main(String[] args) {
        int oddSum = 0, evenSum = 0;

        for (int i = 0; i <= 100; i++) {
            if (i % 2 == 1) {
                oddSum += i;
            } else {
                evenSum += i;
            }
        }

        System.out.println("Odd sum = "+oddSum);
        System.out.println("Even sum = "+evenSum);
        System.out.println("Absolute diffrence = "+Math.abs(oddSum-evenSum));
    }
}
