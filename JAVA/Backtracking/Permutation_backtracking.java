public class Permutation_backtracking {
    public static void findPermutation(String str, String ans) {
        if (str.length() == 0) {
            System.out.println(ans);
            return;
        }

        for (int j = 0; j < str.length(); j++) {
            char currChar = str.charAt(j);

            String newStr = str.substring(0, j) + str.substring(j + 1);
            findPermutation(newStr, ans + currChar);
        }
    }

    public static void main(String[] args) {
        String str = "abc";
        findPermutation(str, "");
    }
}
