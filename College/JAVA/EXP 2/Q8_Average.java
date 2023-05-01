import java.util.Scanner;

class Average{
    int num1,num2,num3;

    Average(int num1,int num2,int num3)
    {
        this.num1 = num1;
        this.num2 = num2;
        this.num3 = num3;
    }

    void average()
    {
        System.out.println("The average of 3 numbers is = "+ (float)(num1+num2+num3)/3.0f);
    }
}

public class Q8_Average {
    public static void main(String[] args) {
        int num1, num2, num3;

        Scanner cs = new Scanner(System.in);

        System.out.print("Enter number 1 = ");
        num1 = cs.nextInt();
        System.out.print("Enter number 2 = ");
        num2 = cs.nextInt();
        System.out.print("Enter number 3 = ");
        num3 = cs.nextInt();

        Average A = new Average(num1, num2, num3); 
        A.average();     

    }
}
