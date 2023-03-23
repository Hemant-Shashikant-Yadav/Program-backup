public class inheritance_1 {
    public static void main(String[] args) {
        Fish F = new Fish();

        F.eat();
        F.breath();
        F.swim();
    }
}

class Animal {
    String color;

    void eat() {
        System.out.println("Eates");
    }

    void breath() {
        System.out.println("Breaths");
    }
}

class Fish extends Animal {
    int fins;

    void swim() {
        System.out.println("Swims");
    }
}