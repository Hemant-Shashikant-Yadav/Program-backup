public class function_overloading_using_parameters {
    public static int Sum(int a, int b) {

        int sum = a + b;

        return sum;
    }

    public static int Sum(int a, int b, int c) {

        int sum = a + b + c;

        return sum;
    }

    public static void main(String[] args) {
        int sum;

        sum = Sum(10, 20);
        System.out.println(sum);

        sum = Sum(10, 20, 30);
        System.out.println(sum);

    }

}
