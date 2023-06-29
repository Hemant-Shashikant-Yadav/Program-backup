class superclass {
    int x = 40;
}

class baseclass extends superclass {
    int x = 60;

    void display() {
        System.out.println("Value of X from base class = " + super.x);
        System.out.println("Value of X from derrived class = " + x);
    }
}

public class Q2Super {
    public static void main(String[] args) {
        baseclass  b = new baseclass();
        b.display();
    }
}
