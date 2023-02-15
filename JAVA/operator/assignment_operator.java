package operator;

public class assignment_operator {
    public static void main(String[] args) {
        int a = 100;
        int b;

        b=a;
        System.out.println("B = "+b);

        a+=10;
        System.out.println("A = "+a);
        a-=10;
        System.out.println("A = "+a);
        a*=10;
        System.out.println("A = "+a);
        a/=10;
        System.out.println("A = "+a);
    }
}
