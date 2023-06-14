class count {
    static int count = 0;

    count() {
        count++;
    }

    static int showCount() {
        return count;
    }
}

public class ObjCount {

    public static void main(String[] args) {
        count O1 = new count();
        count O2 = new count();
        count O3 = new count();
        count O4 = new count();
        count O5 = new count();
        count O6 = new count();
        count O7 = new count();
        count O8 = new count();
        count O9 = new count();
        System.out.println("No of object created = "+O9.showCount());
    }
}
