
public class Abstraction {
    public static void main(String[] args) {

        man2 m = new man2();
        m.eats1();
        m.walk2();

        horse2 h = new horse2();
        h.eats1();
        h.walk2();
    }
}

abstract class animal2 {

    void eats1() {
        System.out.println("Animal eates food");
    }

    abstract void walk2();
}

class horse2 extends animal2 {
    void walk2() {
        System.out.println("Walks on 4 legs");
    }
}

class man2 extends animal2 {
    void walk2() {
        System.out.println("walks on 4 legs.");
    }
}