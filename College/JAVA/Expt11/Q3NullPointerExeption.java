public class Q3NullPointerExeption {
    public void getStringLength(String str) {
        try {
            System.out.println(str.length());
        } catch (NullPointerException e) {
            System.out.println("There is some exeption occured.\nYou are accessing value from null variable.");
        }
    }

    public static void main(String[] args) {
        String str = null;
        Q3NullPointerExeption obj = new Q3NullPointerExeption();
        obj.getStringLength(str);
    }
}
