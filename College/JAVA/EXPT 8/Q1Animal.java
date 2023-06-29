class Animal {
    void display() {
        System.out.println("This is a animal super class.");
    }
}

class Dog extends Animal {
    void printMessege() {
        System.out.println("This is from dog subclass.");
        super.display();
    }
}

public class Q1Animal {
    public static void main(String[] args) {
        Dog D = new Dog();
        D.printMessege();
    }
}
