import java.util.ArrayList;
import java.util.Scanner;

interface LibraryItem {
    void add();

    void checkOut();

    void checkIn();

    boolean isAvailable();

}

class Book implements LibraryItem {
    String nm, at, id;

    static int bkcount = 0;
    Scanner sc = new Scanner(System.in);

    class bk {
        String title, author;
        boolean availability;
        int ISBN;

    }

 

    public void checkOut() {

    }

    public void checkIn() {

    }

    public boolean isAvailable() {
        return true;
    }

}

class DVD implements LibraryItem {
    static int cdcount = 0;
    Scanner sc = new Scanner(System.in);

    class cd {
        String title, author, duration;
        int ISBN;
        boolean availability;

    }

    cd d[] = new cd[100];

    public void add() {
        cdcount++;
        System.out.print("Enter name of book =");
        d[cdcount].title = sc.nextLine();
        System.out.print("Enter author name of book =");
        d[cdcount].author = sc.nextLine();
        System.out.print("Enter ISBN of book =");
        d[cdcount].ISBN = sc.nextInt();

    }

    public void checkOut() {

    }

    public void checkIn() {

    }

    public boolean isAvailable() {
        return true;
    }
}

class Library implements LibraryItem {
        

    public void checkOut() {

    }

    public void checkIn() {

    }

    public boolean isAvailable() {
        return true;
    }
}

public class Q4LibraryApp {
    Book B = new Book();
    DVD D = new DVD();
    Library L = new Library();
}
