public class super_ {
    public static void main(String[] args) {
        horse h = new horse();
        System.out.println(h.color);
    }
}

class animal {
    String color;

    animal() {
        System.out.println("Animal connstructor called");
    }
}

// class horse extends animal {
// horse() {
// super();
// System.out.println("Hose constructor is called");
// }
// }
class horse extends animal {
    horse() {
        super.color = "black";
        System.out.println("Hose constructor is called");
    }
}