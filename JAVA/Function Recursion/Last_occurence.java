public class Last_occurence {
    public static int lOccur(int arr[], int key, int i) {
        if (i == arr.length) {
            return -1;
        }

        int isFound = lOccur(arr, key, i + 1);

        if (isFound == -1 && arr[i] == key) {
            return i;
        }

        return isFound;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 1, 3 };
        int key = 1;

        System.out.println(lOccur(arr, key, 0));
    }
}
