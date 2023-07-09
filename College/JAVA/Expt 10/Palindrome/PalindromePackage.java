package PackagePalindrome;

public class PalindromePackage {
    public void findPalindrome(int a) {
        int a2=0, a1 = a;

        while (a > 0) {
            int dig = a % 10;
            a2 = (a2 * 10) + dig;
            a /= 10;
        }
        if (a2 == a1) {
            System.out.println("The number " + a1 + " is palindrome no.");
        } else {
            System.out.println("The number " + a1 + " is not palindrome no.");

        }
    }
}
