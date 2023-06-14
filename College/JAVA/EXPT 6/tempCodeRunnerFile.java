import java.util.LinkedList;
import java.util.List;
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

    List<bk> b1 = new LinkedList<bk>();
    bk b[] = new bk[100];

    void init() {
        for (int i = 0; i < b.length; i++) {
            b[i] = new bk();
            b[i].ISBN = 0;
            b[i].author = "";
            b[i].title = "";
            b[i].availability = false;
        }
    }

    public void add() {
        bkcount++;
        System.out.print("Enter name of book =");
        b[bkcount].title = sc.nextLine();
        System.out.print("Enter author name of book =");
        b[bkcount].author = sc.nextLine();
        System.out.print("Enter ISBN of book =");
        b[bkcount].ISBN = sc.nextInt();
        b[bkcount].availability = true;
        // b1.add(b[bkcount]);
    }

    public void checkOut() {
        System.out.println("Enter ISBN number = ");
        int no = sc.nextInt();
        int i = 0;
        while (i <= bkcount) {
            if (no == b[i].ISBN) {

                if (b[no].availability == true) {
                    System.out.println("Book is available and issued.");
                    b[no].availability = false;
                } else {
                    System.out.println("Book not available .");

                }
            }
            i++;
        }

    }

    public void checkIn() {

        System.out.println("Enter ISBN number = ");
        int no = sc.nextInt();
        int i = 0;
        while (i <= bkcount) {
            if (no == b[i].ISBN) {

                System.out.println("Book is deposited.");
                b[no].availability = true;
            }
            i++;
        }
    }

    public boolean isAvailable() {
        System.out.println("Enter ISBN number = ");
        int no = sc.nextInt();
        int i = 0;
        while (i <= bkcount) {
            if (no == b[i].ISBN) {

                if (b[no].availability == true) {
                    return true;
                }
            }
            i++;
        }
        return false;
    }

}

class DVD implements LibraryItem {
    static int cdcount = 0;
    Scanner sc = new Scanner(System.in);
    List<cd> d1 = new LinkedList<cd>();

    class cd {
        String title, author, duration;
        int ISBN;
        boolean availability;

    }

    cd d[] = new cd[100];

    void init() {
        for (int i = 0; i < d.length; i++) {
            d[i] = new cd();
            d[i].ISBN = 0;
            d[i].author = "";
            d[i].title = "";
            d[i].availability = false;
        }
    }

    public void add() {
        cdcount++;
        System.out.print("Enter name of book =");
        d[cdcount].title = sc.nextLine();
        System.out.print("Enter author name of book =");
        d[cdcount].author = sc.nextLine();
        System.out.print("Enter ISBN of book =");
        d[cdcount].ISBN = sc.nextInt();
        d1.add(d[cdcount]);
    }

    public void checkOut() {
        System.out.println("Enter ISBN number = ");
        int no = sc.nextInt();
        int i = 0;
        while (i <= cdcount) {
            if (no == d[i].ISBN) {

                if (d[no].availability == true) {
                    System.out.println("CD is available and issued.");
                    d[no].availability = false;
                } else {
                    System.out.println("CD not available .");

                }
            }
            i++;
        }
    }

    public void checkIn() {

        System.out.println("Enter ISBN number = ");
        int no = sc.nextInt();
        int i = 0;
        while (i <= cdcount) {
            if (no == d[i].ISBN) {

                System.out.println("CD is deposited.");
                d[no].availability = true;
            }
            i++;
        }
    }

    public boolean isAvailable() {
        System.out.println("Enter ISBN number = ");
        int no = sc.nextInt();
        int i = 0;
        while (i <= cdcount) {
            if (no == d[i].ISBN) {

                if (d[no].availability == true) {
                    return true;
                }
            }
            i++;
        }
        return false;
    }
}

class Library implements LibraryItem {
    public void add() {

    }

    public void checkOut() {

    }

    public void checkIn() {

    }

    public boolean isAvailable() {
        return true;
    }
}

public class Q4LibraryApp {
    public static void main(String[] args) {
        Book B = new Book();
        DVD D = new DVD();
        Library L = new Library();
        B.init();
        B.add();
        B.checkOut();
        System.out.println(B.isAvailable());
        B.checkOut();
        B.checkIn();
        System.out.println(B.isAvailable());

        D.init();
        D.add();
        D.checkOut();
        System.out.println(D.isAvailable());
        D.checkOut();
        D.checkIn();
        System.out.println(D.isAvailable());
    }
}
