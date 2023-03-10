import java.util.Scanner;

public class sting_input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String Str = new String();

        System.out.print("Enter string = ");
        Str = sc.next();
        System.out.println("string = " + Str);

        sc.nextLine(); // To scan buffer character(Enter)

        System.out.print("Enter string = ");
        Str = sc.nextLine();
        System.out.println("string = " + Str);

    }
}
