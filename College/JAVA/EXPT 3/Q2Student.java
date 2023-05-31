public class Q2Student {
    Q2Student(int rollNo, String name) {
        int rNo = rollNo;
        String nm = name;

        System.out.println("Name of student is = " + nm);
        System.out.println("Roll no. of student is = " + rNo);

    }

    Q2Student(int rollNo, String name, int marks) {
        int rNo = rollNo;
        String nm = name;
        int mrk = marks;

        System.out.println("Name of student is = " + nm);
        System.out.println("Roll no. of student is = " + rNo);
        System.out.println("Mark of student is = " + mrk);

    }

    public static void main(String[] args) {
        Q2Student S1 = new Q2Student(2102, "HY.");
        System.out.println();
        Q2Student S2 = new Q2Student(2102, "HY.", 100);
    }
}
