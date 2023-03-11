
import java.util.Scanner;

public class area_of_circle_input_radius {
    public static void main(String[] args) {
        Scanner scanData = new Scanner(System.in);

        System.out.print("Enter radius of circle = ");
        float radius = scanData.nextFloat();

        float area = 3.14f * radius * radius;

        System.out.println("The area of circle = " + area);

        scanData.close();
        
    }
}
