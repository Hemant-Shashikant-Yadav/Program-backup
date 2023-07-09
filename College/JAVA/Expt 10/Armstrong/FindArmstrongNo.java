import java.util.Scanner;
import PackageArmstrongNo.ArmstronNoPackage;


public class FindArmstrongNo {
    public static void main(String[] args) {
        ArmstronNoPackage E = new ArmstronNoPackage();

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number = ");
        int a = sc.nextInt();

        E.findArmstrong(a);
    }
}
