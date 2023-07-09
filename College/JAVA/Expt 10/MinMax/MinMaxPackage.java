package PackageMinMax;

public class MinMaxPackage {
    public int findMax(int a, int b) {
        return (a < b) ? b : a;
    }

    public int findMax(int a, int b, int c) {
        return (((a < b) ? b : (b = a)) < c) ? c : b;
    }
    public int findMin(int a, int b) {
        return (a > b) ? b : a;
    }

    public int findMin(int a, int b, int c) {
        return (((a > b) ? b : (b = a)) > c) ? c : b;
    }
}
