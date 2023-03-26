public class First_occurence {

    public static int fOccur(int arr[], int key, int i) {
        if (i == arr.length) {
            return -1;
        }

        if (arr[i] == key) {
            return i;
        }

        return fOccur(arr, key, i + 1);
    }

    public static void main(String[] args) {
        int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        int key = 5;

        System.out.println(fOccur(arr, key, 0));
    }
}
