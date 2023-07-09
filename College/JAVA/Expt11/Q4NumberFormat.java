public class Q4NumberFormat {

    public static void parsString(String str) {
        try {
            int a = Integer.parseInt(str);
            System.out.println(a);
        } catch (NumberFormatException e) {
            System.out.println("We got some exeption while parsing the string to integer.");
        }
    }

    public static void main(String[] args) {
        parsString("23Thshalkf!!!");
    }
}
