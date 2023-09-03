public class Abstracion_data_flow {

    public static void main(String[] args) {
        raceHorse r = new raceHorse();
    }
}

abstract class animal1 {

    void eats() {
        System.out.println("Animal eates food");
    }

    abstract void walk();

    animal1() {
        System.out.println("Animal constructor is called.");
    }
}

class horse1 extends animal1 {
    void walk() {
        System.out.println("Walks on 4 legs");
    }

    horse1() {
        System.out.println("Horse constructor is called");
    }
}

class raceHorse extends horse1 {

    raceHorse() {
        System.out.println("raceHose constructor called.");
    }
}