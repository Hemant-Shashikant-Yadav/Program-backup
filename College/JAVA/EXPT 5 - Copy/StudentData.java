import java.util.Scanner;

class student {
    int mark;
    String name;
}

class markname extends student {

    void getData() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Name = ");
        name = sc.nextLine();
        System.out.print("Mark = ");
        mark = sc.nextInt();
    }

    void disply() {

        System.out.println("Name = " + name);
        System.out.println("Mark = " + mark);
        System.out.println();

    }
}

public class StudentData {
    public static void main(String[] args) {

        System.out.println("Enter name and marks of 10 students = ");
        markname M[] = new markname[10];
        for (int i = 0; i < M.length; i++) {
            M[i] = new markname();
            M[i].getData();
        }
        System.out.println("Name and marks of 10 students = ");
        for (int i = 0; i < M.length; i++) {
            M[i].disply();
        }
    }

}
