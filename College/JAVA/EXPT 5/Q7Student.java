import java.util.Scanner;

class Student {
    String name;
    int rollNo;

    void getData() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name of student = ");
        name = sc.nextLine();
        System.out.print("Enter roll no of student = ");
        rollNo = sc.nextInt();
    }
}

class Test extends Student {
    Scanner sc = new Scanner(System.in);
    int marks[] = new int[3];

    void getMarks() {
        System.out.print("Enter marks of 3 tests = ");
        for (int i = 0; i < marks.length; i++) {
            marks[i] = sc.nextInt();
        }
    }
}

interface Sports {
    Scanner sc = new Scanner(System.in);
    int scores[] = new int[3];

    void getScores();
}

class Result extends Test implements Sports {
    Scanner sc = new Scanner(System.in);

    public void getScores() {
        System.out.print("Enter scores of 3 sports = ");
        for (int i = 0; i < scores.length; i++) {
            scores[i] = sc.nextInt();
        }
    }

    int totalMarks = 0, totalScore = 0;

    void calcTotal() {
        for (int i = 0; i < scores.length; i++) {
            totalMarks += marks[i];
            totalScore += scores[i];
        }
    }

    void display() {
        System.out.print("Name of student = " + name);
        System.out.print("Roll no of student = " + rollNo);
        System.out.println("Marks =");
        for (int i = 0; i < marks.length; i++) {
            System.out.println(marks[i]);
        }
        System.out.println("Total marks = " + totalMarks);
        System.out.println("Scores = ");
        for (int i = 0; i < marks.length; i++) {
            System.out.println(scores[i]);
        }
        System.out.println("Total score = " + totalScore);
    }
}

public class Q7Student {
    public static void main(String[] args) {
        Result R = new Result();
        R.getData();
        R.getMarks();
        R.getScores();
        R.calcTotal();
        R.display();
    }
}
