interface P1 {
    static int p1 = 10;

    void displayP1();
}

interface P2 {
    static int p2 = 20;

    void displayP2();
}

interface P12 extends P1, P2 {
    static int p12 = 30;

    void displayP12();

}

class Q implements P12 {
    public void displayP1() {
        System.out.println("The value of P1 from interface P1 is = " + p1);
    }

    public void displayP2() {
        System.out.println("The value of P2 from interface P2 is = " + p2);
    }

    public void displayP12() {
        System.out.println("The value of P12 from interface P12 is = " + p12);
    }
}

public class Q10InterfaceInheritance {
    public static void main(String[] args) {
        Q q1 = new Q();
        q1.displayP1();
        q1.displayP2();
        q1.displayP12();
    }
}
