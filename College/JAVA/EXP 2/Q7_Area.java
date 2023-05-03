import java.util.Scanner;


public class Q7_Area {
    public static class Area{
    int length,breadth;

    Area(int length,int breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }

    int retrunArea(){
        return length*breadth;
    }
}
    public static void main(String[] args) {
        int length,breadth;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the length of rectangle = ");
        length = sc.nextInt();
        System.out.print("Enter the breadth of rectangle = ");
        breadth = sc.nextInt();

        Area A = new Area(length, breadth);

        System.out.println("The area of rectangle ("+length+","+breadth+") is = "+A.retrunArea());
    }
}
