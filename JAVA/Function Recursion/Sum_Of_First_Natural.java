public class Sum_Of_First_Natural {
    public static int sum(int n) {
        if (n == 1) {
            return 1;
        }

        int snm1 = sum(n - 1);
        int sm = n + snm1;
        return sm;
    }

    public static void main(String[] args) {
        System.out.println(sum(5));
    }
}
