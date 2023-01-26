import java.util.Scanner;

// public class type_conversion {
// public static void main(String[] args) {

// // Succesful
// int a = 45;
// float b = a;

// System.out.println(a);
// System.out.println(b);

// /*
// *
// * // error
// * float c = 65.45f;
// * int d = c;
// *
// * System.out.println(c);
// * System.out.println(d);
// *
// * // error: incompatible types: possible lossy conversion from float to int
// */
// }
// }

public class type_conversion {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // succesful
        float a = scan.nextInt();
        System.out.println(a);

        // error
        // int v = scan.nextFloat();
        // System.out.println(v);
        scan.close();
    }
}