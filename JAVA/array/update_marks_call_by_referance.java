import java.util.Scanner;

public class update_marks_call_by_referance {
    public static void update(int mark[]) {
        for (int i = 0; i < mark.length; i++) {
            mark[i] += 10;
        }
    }

    public static void main(String[] args) {
        int mark[] = new int[5];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter marks = ");
        for (int i = 0; i < mark.length; i++) {
            mark[i] = sc.nextInt();
        }

        update(mark);

        System.out.print("The updated marks = ");
        for (int i = 0; i < mark.length; i++) {
            System.out.printf("%4d", mark[i]);
        }

        sc.close();

    }
}
