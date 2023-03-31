/**
 * merg_sort
 */
public class merg_sort {
    public static void mergeSort(int arr[], int low, int high) {

        if (low >= high) {
            return;
        }

        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    public static void merge(int arr[], int low, int mid, int high) {
        int arr1[] = new int[high - low + 1];
        int k = 0;
        int i = low, j = mid + 1;
        while (i <= mid && j <= high) {

            if (arr[i] < arr[j]) {
                arr1[k] = arr[i];
                i++;
                k++;
            } else {
                arr1[k] = arr[j];
                j++;
                k++;
            }
        }

        while (j <= high) {
            arr1[k] = arr[j];
            j++;
            k++;
        }

        while (i <= mid) {
            arr1[k] = arr[i];
            i++;
            k++;
        }

        for (k= 0,i=low; k < arr1.length;i++, k++) {
            arr[i] = arr1[k];
        }

    }

    public static void display(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String args[]) {
        int arr[] = { 6, 3, 9, 8, 2, 5 };
        mergeSort(arr, 0, arr.length - 1);
        display(arr);
    }
}