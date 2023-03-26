public class interface_java1 {
    public static void main(String[] args) {
        bear b = new bear();
        b.eat();
        b.eat1();

    }
}

interface herbivore {
    void eat();
}

interface carnivore {
    void eat1();

}

class bear implements herbivore, carnivore {

    public void eat() {
        System.out.println("Eates honey");
    }

    public void eat1() {
        System.out.println("Eates fish");

    }
}