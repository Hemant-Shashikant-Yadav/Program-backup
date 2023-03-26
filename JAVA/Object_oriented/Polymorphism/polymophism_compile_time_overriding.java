public class polymophism_compile_time_overriding {
    public static void main(String[] args) {
        derrived D = new derrived();
        D.display();        
    }

}

class base {
    void display() {
        System.out.println("Base class display function");
    }
}

class derrived extends base {
    void display() {
        System.out.println("Derrived class display function");

    }
}