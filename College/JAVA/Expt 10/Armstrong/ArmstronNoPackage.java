package PackageArmstrongNo;

public class ArmstronNoPackage {
    public void findArmstrong(int a) {
        int sum = 0, a1 = a;

        while (a > 0) {
            int dig = a % 10;
            sum += Math.pow(dig, 3);
            a /= 10;
        }
        if (sum == a1) {
            System.out.println("The number " + a1 + " is armstrong no.");
        } else {
            System.out.println("The number " + a1 + " is not armstrong no.");

        }
    }
}
