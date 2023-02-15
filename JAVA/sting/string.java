import java.util.Scanner;

public class string {
    public static void main(String[] args) {
        // 1
        // String name = new String();
        // name = "HY";

        // String name1 = "HY";

        // System.out.println(name);
        // System.out.println(name1);

        // 2
        // int a = 10;
        // float b = 10.5f;

        // System.out.printf("The value of a is %d and value of b is %f.", a, b);
        // System.out.format("The value of a is %d and value of b is %f.", a, b);

        // 3.

        Scanner sc = new Scanner(System.in);
        String name;
        name = sc.nextLine();

        System.out.println(name);
        sc.close();
    }
}
