
class Employee {
    String name;
    int yearOfJoining;
    String address;

    Employee(String name, int yearOfJoining, String address) {
        this.name = name;
        this.yearOfJoining = yearOfJoining;
        this.address = address;
    }
    void display(){
        System.out.printf("%-10S %-10d %S\n",name,yearOfJoining,address);
    }
}

public class Q10_Information {
    public static void main(String[] args) {
        Employee E1 = new Employee("Robert", 1994, "64C- WallsStreat");
        E1.display();
        Employee E2 = new Employee("Sam", 2000, "68D- WallsStreat");
        E2.display();
        Employee E3 = new Employee("John", 1999, "26B- WallsStreat");
        E3.display();
    }

}