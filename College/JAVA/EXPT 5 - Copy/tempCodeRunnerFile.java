import java.util.Scanner;

class marks {
    int mark1, mark2, mark3;

    void getMarks() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter marks = ");
        mark1 = sc.nextInt();
        mark2 = sc.nextInt();
        mark3 = sc.nextInt();
    }
}

class total extends marks {
    int sum;float percentage;
    void clacSum() {
         sum = mark1 + mark2 + mark3;

         percentage = (float) (sum * 0.3);
    }
}

class result extends total {
    void disply() {
        System.out.println("The marks in percentage is = " + percentage);
    }
}

public class PercentageCalc {
    public static void main(String[] args) {
        result r = new result();
        r.getMarks();
        r.clacSum();
        r.disply();

    }
}
