public class static_ {
    public static void main(String[] args) {
        student S1 = new student();
        S1.schoolName = "Sangli Highschool";

        System.out.println(S1.schoolName);

        student S2 = new student();
        System.out.println(S2.schoolName);

        S2.schoolName = "Vaishnavi Academy";
        System.out.println(S1.schoolName);
        System.out.println(S2.schoolName);

        System.out.println(S1.average(5, 5, 5));

    }
}

class student {
    String name;
    int rollNo;
    static String schoolName;

    void setName(String name) {
        this.name = name;
    }

    void setRollNo(int rollNo) {
        this.rollNo = rollNo;
    }

    static int average(int a, int b, int c) {
        return (a + b + c) / 3;
    }
}
