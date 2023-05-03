import java.util.Scanner;

public class Q3_Student_Details {

    public static class Student {
        int roll_no;
        int phone_no;
        String name;
        String address;

        void setData(String name, int roll_no, String address, int phone_no) {
            this.name = name;
            this.roll_no = roll_no;
            this.phone_no = phone_no;
            this.address = address;
        }

        void setData() {
            Scanner sc = new Scanner(System.in);

            System.out.println();
            System.out.print("Enter roll no = ");
            roll_no = sc.nextInt();
            sc.nextLine();
            System.out.print("Enter address = ");
            address = sc.nextLine();
            System.out.print("Enter phone no = ");
            phone_no = sc.nextInt();
        }

        void display() {
            System.out.println();
            System.out.println("Name = " + name);
            System.out.println("Roll no = " + roll_no);
            System.out.println("Address = " + address);
            System.out.println("Phone no = " + phone_no);
        }
    }

    public static void main(String[] args) {

        Student S1 = new Student();
        S1.name = "Sam";
        S1.setData();

        Student S2 = new Student();
        S2.name = "John ";
        S2.setData();

        S1.display();
        S2.display();
    }
}