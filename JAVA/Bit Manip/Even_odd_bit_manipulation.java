import java.util.Scanner;

public class Even_odd_bit_manipulation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num;
        num = sc.nextInt();

        if ((num & 1 )== 1) {
            System.out.println("Number is Odd");
        }
        else{
            System.out.println("Number is Even");

        }

        sc.close();
    }
}
