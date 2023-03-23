
public class oop3 {
    public static void main(String[] args) {

        Student S1 = new Student();
        S1.name = "H!";
        S1.rollNo = 1;
        S1.display();

        System.out.println();

        Student S2 = new Student("H2");
        S2.rollNo = 2;
        S2.display();

        System.out.println();

        Student S3 = new Student(3);
        S3.name = "H3";
        S3.display();

        System.out.println();

        Student S4 = new Student("H4", 4);
        S4.display();
    }
}

class Student {

    String name;
    int rollNo;

    Student() {

    }

    Student(String name) {
        this.name = name;
    }

    Student(int rollNo) {
        this.rollNo = rollNo;
    }

    Student(String name, int rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    void display() {
        System.out.println(name);
        System.out.println(rollNo);
    }
}