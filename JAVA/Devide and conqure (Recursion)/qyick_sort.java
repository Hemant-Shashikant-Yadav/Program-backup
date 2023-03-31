/**
 * merg_sort
 */
public class qyick_sort {
    public static void qucikSort(int arr[], int low, int high) {
        if (low >= high) {
            return;
        }

        int index = partition(arr, low, high);
        qucikSort(arr, low, index - 1);
        qucikSort(arr, index + 1, high);
    }

    public static int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        i++;
        int temp = pivot;
        arr[high] = arr[i];
        arr[i] = temp;

        return i;
    }

    public static void display(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String args[]) {
        int arr[] = { 6, 3, 9, 8, 2, 5 };
        qucikSort(arr, 0, arr.length - 1);
        display(arr);
    }
}