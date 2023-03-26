public class Power_of_x {
    // public static int power(int x,int n) {
    // if (n==1) {
    // return x;
    // }

    // int xnm1 = power(x,n-1);
    // int xn = x * xnm1;

    // return xn;
    // }

    // public static int power(int x, int n) {

    // if (n == 1) {
    // return x;
    // }

    // if (n % 2 == 0) {

    // return power(x, n / 2) * power(x, n / 2);
    // } else {
    // return x * power(x, n / 2) * power(x, n / 2);

    // }

    // }

    public static int power(int x, int n) {

        if (n == 1) {
            return x;
        }

        int halfPower = power(x, n / 2);
        int halfPowerSquare = halfPower * halfPower;

        if (n%2==1) {
            halfPowerSquare *=x;
        }
        
        return halfPowerSquare;
    }

    public static void main(String[] args) {

        System.out.println(power(2, 4));
    }
}
