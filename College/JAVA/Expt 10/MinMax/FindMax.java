import PackageMinMax.MinMaxPackage;

public class FindMax {
    public static void main(String[] args) {
        MinMaxPackage m = new MinMaxPackage();
        System.out.println("Maximum number between two numbers is = " + m.findMax(10, 20));
        System.out.println("Maximum number between three numbers is = " + m.findMax(10, 522, 30));
        System.out.println("Minimum number between two numbers is = " + m.findMin(2, 15));
        System.out.println("Minimum number between three numbers is = " + m.findMin(333, 2, 0));
    }
}
