// public class type_promossion {
//     public static void main(String[] args) {
//         char a = 'a';
//         char b = 'b';

//         int e = a;
//         int f = b;

//         int c = b - a;

//         System.out.println(a);
//         System.out.println(e);
//         System.out.println(b);
//         System.out.println(f);
//         System.out.println(c);
//         System.out.println(b - a);
//     }
// }

public class type_promossion {
    public static void main(String[] args) {
        byte a = 25;
        short b = 5;
        char c = 'c';

        int s = a + b + c;
        byte bt = (byte) s;

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(a + b + c);
        System.out.println(s);
        System.out.println(bt);
    }
}
