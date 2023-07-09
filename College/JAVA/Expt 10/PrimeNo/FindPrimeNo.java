import java.util.Scanner;

import PackagePrimeNo.PrimeNoPackage;

public class FindPrimeNo {
     public static void main(String[] args) {
        PrimeNoPackage E = new PrimeNoPackage();

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number = ");
        int a = sc.nextInt();

        E.findPrime(a);
    }
}
