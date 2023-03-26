
public class Abstraction {
    public static void main(String[] args) {

        man m = new man();
        m.eats();
        m.walk();

        horse h = new horse();
        h.eats();
        h.walk();
    }
}

abstract class animal {

    void eats() {
        System.out.println("Animal eates food");
    }

    abstract void walk();
}

class horse extends animal {
    void walk() {
        System.out.println("Walks on 4 legs");
    }
}

class man extends animal {
    void walk() {
        System.out.println("walks on 4 legs.");
    }
}