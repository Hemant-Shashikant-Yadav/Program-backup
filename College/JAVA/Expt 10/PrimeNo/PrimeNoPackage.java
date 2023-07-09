package PackagePrimeNo;

public class PrimeNoPackage {
    public void findPrime(int a) {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                System.out.println("The number " + a + " is not a prime no.");
                return;
            }
        }
        System.out.println("The number " + a + " is  a prime no.");

    }
}
