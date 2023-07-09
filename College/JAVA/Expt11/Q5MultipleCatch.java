public class Q5MultipleCatch {
    public void checkException(int a, int b, int index) {
        int arr[] = new int[4];
        try {
            System.out.println(arr[index]);
            int c = a / b;
        } catch (ArithmeticException e) {
            System.out.println("We are encountered with arithmetic exeption.");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("We are encountered with array indexing exeption.");
        }
    }

    public static void main(String[] args) {
        Q5MultipleCatch Obj = new Q5MultipleCatch();
        Obj.checkException(30, 0, 10);
    }
}
