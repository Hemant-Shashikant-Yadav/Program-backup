package OOP;

public class OOP2_constructor {
    public static void main(String[] args) {
        student S = new student("HY");

    }
}

/**
 * student
 */
class student {
    String name;
    int rollNo;

    student(String name) {
        this.name = name;
        System.out.println("Constructor is called.");
    }

}
