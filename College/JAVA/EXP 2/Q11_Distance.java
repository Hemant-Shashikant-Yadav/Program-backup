import java.util.Scanner;

public class Q11_Distance {
    public static class AddDistance {
        int feet, inches;

        void setData() {
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter data in feets = ");
            feet = sc.nextInt();
            System.out.print("Enter data in inches = ");
            inches = sc.nextInt();
        }

        void display() {
            System.out.println("Distance is " + feet + " feet and " + inches + " inches.");
        }

        AddDistance add(AddDistance D2) {
            AddDistance D3 = new AddDistance();
            D3.feet = this.feet + D2.feet;
            D3.inches = this.inches + D2.inches;

            if (D3.inches >= 12) {
                D3.feet++;
                D3.inches -= 12;
            }
            return D3;
        }
    }

    public static void main(String[] args) {
        AddDistance D1 = new AddDistance();
        D1.setData();
        AddDistance D2 = new AddDistance();
        D2.setData();

        AddDistance D3;
        D3 = D1.add(D2);

        D1.display();
        D2.display();
        D3.display();
    }
}
