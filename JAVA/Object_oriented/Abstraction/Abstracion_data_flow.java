public class Abstracion_data_flow {

    public static void main(String[] args) {
        raceHorse r = new raceHorse();
    }
}

abstract class animal {

    void eats() {
        System.out.println("Animal eates food");
    }

    abstract void walk();

    animal() {
        System.out.println("Animal constructor is called.");
    }
}

class horse extends animal {
    void walk() {
        System.out.println("Walks on 4 legs");
    }

    horse() {
        System.out.println("Horse constructor is called");
    }
}

class raceHorse extends horse {

    raceHorse() {
        System.out.println("raceHose constructor called.");
    }
}