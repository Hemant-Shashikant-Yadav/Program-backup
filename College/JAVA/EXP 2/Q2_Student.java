import java.util.Scanner;

class Student {
    int roll_no;
    String name;

    void setData(String name, int roll_no) {
        this.name = name;
        this.roll_no = roll_no;
    }

    void display() {
        System.out.println("Name = " + name);
        System.out.println("Roll no = " + roll_no);
    }
}

public class Q2_Student {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name = ");
        String name = sc.nextLine();
        System.out.print("Enter roll no = ");
        int roll_no = sc.nextInt();
        

        Student S = new Student();
        S.setData(name, roll_no);
        S.display();
    }
}