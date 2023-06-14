class Animal {
    void makeSound() {
        System.out.println("The animal made sound.");
    }
}

class Cat extends Animal {
    void makeSound() {
        System.out.println("Cat made sound meow.");
    }
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("Dog made sound bhow.");
    }
}

public class Q1MakeSound {
    public static void main(String[] args) {
        Animal C = new Cat();
        C.makeSound();

        Animal D = new Dog();
        D.makeSound();
    }
}
