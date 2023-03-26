public class Tiling_problem {
    public static int tiling(int n) {
        if (n==0||n==1) {
            return 1;
        }

        int virticalPlacement = tiling(n-1);
        int horizontalPlacement = tiling(n-2);

        return virticalPlacement+horizontalPlacement;
    }

    public static void main(String[] args) {
        System.out.println(tiling(4));
    }
}
