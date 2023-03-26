public class Remove_duplicate {

    public static void removeDuplicate(String str, boolean arr[], int n) {
        if (n == str.length()) {
            return;
        }

        char ch = str.charAt(n);

        int index = ch - 'a';
        if (arr[index] != true) {
            arr[index] = true;
            System.out.print(ch);
        }

        removeDuplicate(str, arr, n + 1);
    }

    public static void main(String[] args) {
        boolean arr[] = new boolean[26];

        String str = "appnnacollege";

        removeDuplicate(str, arr, 0);
    }
}
