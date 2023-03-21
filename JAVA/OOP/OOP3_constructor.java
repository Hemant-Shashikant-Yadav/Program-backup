package OOP;

public class OOP3_constructor {
    public static void main(String[] args) {
        student S1 = new student();
        student S2 = new student("Hy");
        student S3 = new student(77);
        student S4 = new student("Hy", 77);

        student S5 = new student(S4);
    }
}

/**
 * student
 */
class student {
    String Name;
    int rollno;
    int marks[];
    String Pass;

    student() {

    }

    student(int rollno) {
        this.rollno = rollno;
    }

    student(String Name) {
        this.Name = Name;
    }

    student(String Name, int rollno) {
        this.rollno = rollno;
        this.Name = Name;
    }
    student(student S) {
        this.rollno = S.rollno;
        this.Name = S.Name;
    }
}
