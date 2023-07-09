import java.util.Scanner;

import PackagePalindrome.PalindromePackage;

public class FindPalindrome {
    public static void main(String[] args) {
        PalindromePackage E = new PalindromePackage();

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number = ");
        int a = sc.nextInt();

        E.findPalindrome(a);
    }
}
