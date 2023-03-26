
/**
 * two_sum
 */
public class two_sum {

    public static int[] twoSum(int[] nums, int target) {

        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = 1; j < nums.length; j++) {
                // if (target == nums[i] + nums[j])  {

                //     int arr[] = {i,j};
                //     return arr;

                // }
                if (target == nums[i] + nums[j]) {
                    int arr[] = {i,j};
                        return arr;
                }
            }
        }
        return null;
    }

    public static void main(String[] args) {

        int arr1[] = new int[4];

        arr1[0] = 2;
        arr1[1] = 7;
        arr1[2] = 11;
        arr1[3] = 15;

        int key = 9;

        int arr[] = twoSum(arr1, key);
        for (int j = 0; j < arr.length; j++) {
            
            System.out.println(arr[j]);
        }

    }
}
