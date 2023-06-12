class count {
    static int count = 0;

    count() {
        count++;
    }

    static int showCount() {
        return count;
    }
}

public class Q5ObjectCount {

    public static void main(String[] args) {
        count c1 = new count();
        count c2 = new count();
        count c3 = new count();
        count c4 = new count();
        count c5 = new count();
        count c6 = new count();
        count c7 = new count();
        System.out.println(

                c7.showCount());
    }
}
