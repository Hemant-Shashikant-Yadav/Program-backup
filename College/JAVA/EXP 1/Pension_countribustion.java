import java.util.*;

public class Pension_countribustion {

    public static void main(String[] args) {
        double salary, employeePension = 0, employerPension = 0;
        int age;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter age = ");
        age = sc.nextInt();
        System.out.print("Enter salary = ");
        salary = sc.nextFloat();

        if (age <= 55) {
            employeePension = (salary * 0.2);
            employeePension = (salary * 0.17);
        } else if (age > 55 && age <= 60) {
            employeePension = (salary * 0.13);
            employeePension = (salary * 0.13);
        } else if (age > 60 && age <= 65) {
            employeePension = (salary * 0.075);
            employeePension = (salary * 0.09);
        } else if (age > 65) {
            employeePension = (salary * 0.05);
            employeePension = (salary * 0.075);
        }

        System.out.println("The employee's contribution is:  = " + employeePension);
        System.out.println("The employer's contribution is:  = " + employerPension);
    }
}