import java.util.Scanner;

class Employee {
    void getDetails() {
        System.out.println("This function is called from super class.");
    }

    void calculateSalary() {
        System.out.println("This function is called from super class.");
    }

    void display() {
        System.out.println("This function is called from super class.");
    }

}

class fulltimeEmployee extends Employee {
    int exp, id, baseSalary, newSalary;
    String name;
    Scanner sc = new Scanner(System.in);

    void getDetails() {
        System.out.println("Enter the name of employee = ");
        name = sc.nextLine();
        System.out.println("Enter the id of employee = ");
        id = sc.nextInt();
        System.out.println("Enter the experience of employee = ");
        exp = sc.nextInt();
        System.out.println("Enter the base salary of employee = ");
        baseSalary = sc.nextInt();

    }

    void calculateSalary() {
        newSalary = baseSalary * (exp / 10);
    }

    void display() {
        System.out.println("Enter the name of employee = " + name);
        System.out.println("Enter the id of employee = " + id);
        System.out.println("Enter the experience of employee = " + exp);
        System.out.println("Enter the base salary of employee = " + baseSalary);
        System.out.println("Enter the new salary of employee = " + newSalary);

    }
}

class parttimeEmployee extends Employee {
    int exp, id, baseSalary, newSalary;
    String name;
    Scanner sc = new Scanner(System.in);

    void getDetails() {
        System.out.println("Enter the name of employee = ");
        name = sc.nextLine();
        System.out.println("Enter the id of employee = ");
        id = sc.nextInt();
        System.out.println("Enter the experience of employee = ");
        exp = sc.nextInt();
        System.out.println("Enter the base salary of employee = ");
        baseSalary = sc.nextInt();

    }

    void calculateSalary() {
        newSalary = baseSalary * ((exp / 10)/2);

    }

    void display() {
        System.out.println("Enter the name of employee = " + name);
        System.out.println("Enter the id of employee = " + id);
        System.out.println("Enter the experience of employee = " + exp);
        System.out.println("Enter the base salary of employee = " + baseSalary);
        System.out.println("Enter the new salary of employee = " + newSalary);

    }
}

public class Q5Employee {

    public static void main(String[] args) {

        Employee F = new fulltimeEmployee();
        Employee P = new parttimeEmployee();

        int opt;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Menu \nSelect employee = \n1.Full time employee\n2.Part time employee\n3.Exit\nChoose = ");
            opt = sc.nextInt();

            if (opt == 3) {
                break;
            }
            switch (opt) {
                case 1:
                    F.getDetails();
                    F.calculateSalary();
                    F.display();
                    break;
                case 2:
                    P.getDetails();
                    P.calculateSalary();
                    P.display();
                    break;
                
                default:
                    break;
            }

        }
    }

    
}
