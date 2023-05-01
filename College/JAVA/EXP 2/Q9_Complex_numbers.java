import java.util.Scanner;

class Complex {
    int x, y;

    void setData() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the complex number in x+iy form.");
        System.out.print("Enter the value of x = ");
        x = sc.nextInt();
        System.out.print("Enter the value of y = ");
        y = sc.nextInt();

    }

    Complex add(Complex C2) {
        Complex C3 = new Complex();

        C3.x = this.x + C2.x;
        C3.y = this.y + C2.y;
        return C3;
    }

    Complex sub(Complex C2) {
        Complex C3 = new Complex();

        C3.x = this.x - C2.x;
        C3.y = this.y - C2.y;
        return C3;
    }

    Complex multiply(Complex C2) {
        Complex C3 = new Complex();

        C3.x =(( this.x * C2.x)-(this.y*C2.y));
        C3.y = ((this.x * C2.y)+(this.y*C2.x));
        return C3;
    }

    void display() {

        System.out.println("The complex number is = (" + x + " + i" + y + ")");
    }

}

public class Q9_Complex_numbers {
    public static void main(String[] args) {
        Complex C1 = new Complex();
        Complex C2 = new Complex();
        Complex C3 = new Complex();
        C1.setData();
        C2.setData();

        C3 = C1.add(C2);
        C3.display();
        C3 = C1.sub(C2);
        C3.display();
        C3 = C1.multiply(C2);
        C3.display();
    }
}
