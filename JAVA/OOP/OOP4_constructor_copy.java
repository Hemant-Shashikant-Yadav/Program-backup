package OOP;

public class OOP4_constructor_copy {
    

    public static void main(String args[]) {

        student S4 = new student();

        S4.Name = "HH";
        S4.rollno = 44;
        S4.Pass = "hthth";
        S4.marks[0] = 100;
        S4.marks[1] = 10;
        S4.marks[2] = 300;
        
        student S5 = new student(S4);
        S5.Pass = "hthtyh";
        
        for (int i = 0; i < 3; i++) {
            System.out.println(S5.marks[i]);
        }
    }
}

/**
 * student
 */
class student {
    String Name;
    int rollno;
    int marks[] = new int[3];
    String Pass;


    student() {
    }

    // Shallow
    // student(student S4) {
    //     marks = new int[3];
    //     this.rollno = S4.rollno;
    //     this.Name = S4.Name;
    //     this.marks = S4.marks;
    // }

    // Deep
    student(student S4) {
        this.rollno = S4.rollno;
        this.Name = S4.Name;
        for (int i = 0; i < marks.length; i++) {
            this.marks[i] = S4.marks[i];
        }
    }
}
