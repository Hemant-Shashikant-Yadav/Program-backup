import java.util.Scanner;

class Student {
    String sname;
    int MarksArray[] = new int[3], total = 0, Tmax = 0;

    Scanner sc = new Scanner(System.in);

    void assign() {
        System.out.print("Enter name of student = ");
        sname = sc.nextLine();

        System.out.print("Enter marks of 3 sub student = ");
        for (int i = 0; i < MarksArray.length; i++) {
            MarksArray[i] = sc.nextInt();
        }
    }

    void compute() {
        for (int i = 0; i < MarksArray.length; i++) {
            if (Tmax < MarksArray[i]) {
                Tmax = MarksArray[i];
            }
            total += MarksArray[i];
        }
    }

    void display() {
        System.out.println("Students details = ");
        System.out.println("Name of student = " + sname);

        System.out.print("Marks of 4 sub student = ");
        for (int i = 0; i < MarksArray.length; i++) {
            System.out.println( MarksArray[i]);
        }
        System.out.println();
        System.out.println("Total marks of student = " + total);
        System.out.println("Max marks of student = " + Tmax);
    }

}

public class Q12student {
    public static void main(String[] args) {

        Student s = new Student();
        s.assign();
        s.compute();
        s.display();
    }
}
