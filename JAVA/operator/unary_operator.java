package operator;

public class unary_operator {
    public static void main(String[] args) {
        int a = 100;

        // ++a;
        System.out.println("Pre increment of " + a + " is " + ++a);

        // a++;
        System.out.println("Post increment of " + a++ + " is " + a);
        
        // --a;
        System.out.println("Pre decrement of " + a + " is " + --a);

        // a--;
        System.out.println("Post decrement of " + a-- + " is " + a);
    }
}
