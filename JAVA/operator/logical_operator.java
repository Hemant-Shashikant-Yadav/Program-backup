package operator;

public class logical_operator {
    public static void main(String[] args) {
        int a = 100;
        int b = 200;

        if ((a > 20) && (b < 300)) {
            System.out.println("Both condition must true");
        }

        if ((a > 20) || (b > 300)) {
            System.out.println("Any one condition or both condition must true");
        }
    }
}
