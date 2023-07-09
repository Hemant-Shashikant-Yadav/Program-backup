import java.util.Scanner;

import PackageEvenOdd.EvenOddPackage;

public class FindEvenOdd {
    public static void main(String[] args) {
        EvenOddPackage E = new EvenOddPackage();

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number = ");
        int a = sc.nextInt();

        E.findEvenOdd(a);
    }
}
