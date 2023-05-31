public class Q7Student {
    Q7Student(String contactNo, String collegeName, int passoutYear) {
        String $contactNo = contactNo, $collegeName = collegeName;
        int $passoutYear = passoutYear;

        System.out.println("Contact no. of student is = " + $contactNo);
        System.out.println("Collage name of student is = " + $collegeName);
        System.out.println("Passout year of student is = " + $passoutYear);

    }

    Q7Student(int id, String name) {
        int $id = id;
        String $name = name;

        System.out.println("Name of student is = " + $name);
        System.out.println("Id no. of student is = " + $id);

    }

    public static void main(String[] args) {
        Q7Student S2 = new Q7Student("9865788452", "ADCET", 2025);
        System.out.println();
        Q7Student S1 = new Q7Student(2102, "The HY.");
    }
}
