public class string_builder {
    public static void main(String[] args) {
        StringBuilder SB = new StringBuilder("");

        for (char i = 'A'; i <= 'Z'; i++) {
            SB.append(i + " ");
        }

        System.out.println(SB);
    }
}
