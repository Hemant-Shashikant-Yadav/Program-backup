
abstract class Animal{
    abstract void sound();
    void eat()
    {
        System.out.println("Eats food.");
    }
}

class Dog extends Animal{
    void sound(){
        System.out.println("Barks Bhow!!! Bhow!!!");
    }
}


public class Q1Animal {

    public static void main(String[] args) {
        Dog D = new Dog();
        D.eat();
        D.sound();
    }
}
