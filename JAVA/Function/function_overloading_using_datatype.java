public class function_overloading_using_datatype {
    public static int Sum(int a, int b) {

        int sum = a + b;

        return sum;
    }

    public static float Sum(float a, float b, float c) {

        float sum = a + b + c;

        return sum;
    }

    public static void main(String[] args) {
        int sum;

        sum = Sum(10, 20);
        System.out.println(sum);

        float sum1 = Sum(10.2f, 17.65f, 3.953f);
        System.out.println(sum1);

    }

}
