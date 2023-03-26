public class Absreaction_with_constructor {
    public static void main(String[] args) {

        man m = new man();
        m.eats();
        m.walk();
        System.out.println(m.color);
        m.changeColor("black");
        System.out.println(m.color);
        
        horse h = new horse();
        h.eats();
        h.walk();
        System.out.println(h.color);
        h.changeColor("blonde");
        System.out.println(h.color);
    }
}

abstract class animal {
    String color;

    animal() {
        color = "brown";
    }

    void eats() {
        System.out.println("Animal eates food");
    }

    abstract void walk();
}

class horse extends animal {
    void changeColor(String col) {
        color = col;
    }

    void walk() {
        System.out.println("Walks on 4 legs");
    }
}

class man extends animal {
    void changeColor(String col) {
        color = col;
    }

    void walk() {
        System.out.println("walks on 4 legs.");
    }
}