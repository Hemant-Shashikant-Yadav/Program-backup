import java.util.Scanner;

class media {
    int id;
    String author;

}

class book extends media {
    String publisher;
    String date;
    boolean available;
    Scanner sc = new Scanner(System.in);

    void addBook() {
        System.out.print("Enter id of book = ");
        System.out.print("Enter date publication of book = ");
        id = sc.nextInt();
        System.out.print("Enter name of publication of book = ");
        publisher = sc.nextLine();
        System.out.print("Enter name of author of book = ");
        author = sc.nextLine();
        available = true;

    }

    void issueBook() {
        System.out.print("Enter book id = ");
        int bid = sc.nextInt();
        if (available) {
            System.out.println("Book is availble and issued.");
            available = false;

        } else {
            System.out.println("Book is not availble.");

        }
    }

    void diposuiteBook() {
        System.out.println("Enter book id = ");
        int bid = sc.nextInt();
        System.out.println("Book diposited.");

        available = true;
    }
}

class tape extends media {
    int duration;
    Scanner sc = new Scanner(System.in);
    boolean available = true;

    void addTape() {
        System.out.print("Enter id of tape = ");
        id = sc.nextInt();
        System.out.print("Enter duration of tape = ");
        duration = sc.nextInt();
        System.out.print("Enter name of author of tape = ");
        author = sc.nextLine();

    }

    void issueTape() {
        System.out.print("Enter tape id = ");
        int bid = sc.nextInt();
        if (available) {
            System.out.println("Tape is availble and issued.");
            available = false;

        } else {
            System.out.println("Tape is not availble.");

        }
    }

    void diposuiteBook() {
        System.out.println("Enter tape id = ");
        int bid = sc.nextInt();
        System.out.println("Tape diposited.");

        available = true;
    }
}

public class Q8DigitalLibrary {

    public static void main(String[] args) {
        book B1 = new book();
        B1.addBook();
        B1.issueBook();
        B1.diposuiteBook();

        tape t1 = new tape();
        t1.addTape();
        t1.issueTape();
        t1.diposuiteBook();
    }
}
