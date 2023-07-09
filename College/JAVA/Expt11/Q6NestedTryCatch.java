public class Q6NestedTryCatch {
    public void check(int a, int b, int d[]) {
        try {
            int c = a / b;
            System.out.println(c);
            try {
                System.out.println(d[10]);
            } catch (ArithmeticException e) {
                System.out.println("We are encountered with arithmetic exeption.");
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("We are encountered with array indexing exeption.");
        }
    }

    public static void main(String[] args) {
        Q6NestedTryCatch A = new Q6NestedTryCatch();
        int d[]=new int[5];
        A.check(10, 2, d);
    }
}
