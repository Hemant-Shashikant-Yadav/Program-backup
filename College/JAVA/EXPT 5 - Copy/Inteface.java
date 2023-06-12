interface P1 {
    static int p1 = 1;

    void displayP1();
}

interface P2 {
    static int p2 = 60;

    void displayP2();
}

interface P12 extends P1, P2 {
    static int p12 = 90;

    void displayP12();

}

class Q implements P12 {
    public void displayP1() {
        System.out.println("P1 intterface value = " + p1);
    }

    public void displayP2() {
        System.out.println("P2 intterface value = " + p2);
    }

    public void displayP12() {
        System.out.println("P12 intterface value = " + p12);
    }
}

public class Inteface {
    public static void main(String[] args) {
        Q a = new Q();
        a.displayP1();
        a.displayP2();
        a.displayP12();
    }
}
