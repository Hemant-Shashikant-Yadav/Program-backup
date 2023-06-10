import java.util.Scanner;

class Person {
    String name, address;
    int phone_no;
}

class Employee extends Person {
    int eno;
    String ename = name;
}

class Manager extends Employee {
    int designation;
    String department_name;
    int basic_salary;

    public void getData() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter employee no of manager = ");
        eno = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter name of manager = ");
        name = sc.nextLine();
        System.out.print("Enter address of manager = ");
        address = sc.nextLine();
        System.out.print("Enter phone no of manager = ");
        phone_no = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter department no of manager = ");
        department_name = sc.nextLine();
        System.out.print("Enter salalry no of manager = ");
        basic_salary = sc.nextInt();

        System.out.println();
        System.out.println();
    }

    public void display() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter employee no of manager = " + eno);
        System.out.println("Enter name of manager = " + name);
        System.out.println("Enter address of manager = " + address);
        System.out.println("Enter phone no of manager = " + phone_no);
        System.out.println("Enter department no of manager = " + department_name);
        System.out.println("Enter phone no of manager = " + basic_salary);

        System.out.println();

        System.out.println();

    }
}

public class Q3Manager {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int opt;
        int n;

        System.out.print("Enter number of managers = ");
        n = sc.nextInt();

        // Manager M[] = new Manager[n];
        Manager M[] = new Manager[3];
        // M[n]=null;

        while (true) {
            System.out.print("Menu:\n1.Enter details of managers.\n2.Display managers details.\n3.Exit\nChoose = ");
            opt = sc.nextInt();
            if (opt == 3) {
                break;
            }

            switch (opt) {
                case 1:

                    for (int i = 0; i < n; i++) {
                        M[i] = new Manager();
                        M[i].getData();
                    }
                    break;

                case 2:
                    for (int i = 0; i < n; i++) {
                        M[i].display();
                    }
                    break;

                default:
                    break;
            }
        }
    }
}
