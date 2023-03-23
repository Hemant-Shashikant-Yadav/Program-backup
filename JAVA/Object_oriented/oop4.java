public class oop4 {

    public static void main(String args[]) {
        Student S1 = new Student();
        S1.name = "HY";
        S1.rollNo = 11;
        S1.pass = "HHHHH";
        S1.marks[0] = 1;
        S1.marks[1] = 2;
        S1.marks[2] = 3;
        S1.display();

        Student S2 = new Student(S1);
        S2.pass = "oooooo";
        S2.display();
        // for (int i = 0; i < 3; i++) {
        // System.out.println(S2.marks[i]);
        // }
        S1.marks[0] = 100;
        S1.display();
        S2.display();
    }
}

class Student {
    int rollNo;
    String name, pass;
    int marks[];

    Student() {
        marks = new int[3];
    }

    Student(Student S1) {
        marks = new int[3];

        this.name = S1.name;
        this.rollNo = S1.rollNo;
        this.marks = S1.marks;
    }

    void display() {

        System.out.println(name);
        System.out.println(rollNo);
        System.out.println(pass);
        for (int i = 0; i < 3; i++) {
            System.out.println(marks[i]);
        }
    }
}


// This is shallow copy