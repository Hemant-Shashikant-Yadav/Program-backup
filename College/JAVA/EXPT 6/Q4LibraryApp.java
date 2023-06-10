interface LibraryItem {
    void checkOut();

    void checkIn();

    boolean isAvailable();

}

class Book implements LibraryItem {
    String title, author, ISBN;

    public void name() {

    }

    public void checkOut(){

    }

    public void checkIn(){

    }

    public boolean isAvailable(){
        return true;
    }

}

class DVD implements LibraryItem {
    public void checkOut(){

    }

    public void checkIn(){

    }

    public boolean isAvailable(){
        return true;
    }
}

class Library implements LibraryItem {
    public void checkOut(){

    }

    public void checkIn(){

    }

    public boolean isAvailable(){
        return true;
    }
}

public class Q4LibraryApp {
    Book B = new Book();
    DVD D = new DVD();
    Library L = new Library();
}
