
public class Sorted_and_rotated_array {

    public static int search(int arr[], int taget, int low, int high) {
        int mid = (low + high) / 2;

        if (arr[mid] == taget) {
            return mid;
        }

        if (arr[low] <= arr[mid]) {
            if (arr[low] <= taget && arr[mid] >= taget) {
                return search(arr, taget, low, mid - 1);
            }else{
                return search(arr, taget, mid + 1, high);
            }
        } else {
            if (arr[mid] <= taget && arr[high] >= taget) {
                return search(arr, taget, low, mid-1);
            }else{
                return search(arr, taget, mid + 1, high);
            }
        }

    }

    public static void main(String[] args) {
        int arr[] = { 4, 5, 6, 7, 0, 1, 2 };
        int target = 0;

        System.out.println(search(arr, target, 0, arr.length - 1));

    }
}
