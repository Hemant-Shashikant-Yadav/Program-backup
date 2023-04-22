
import java.util.ArrayList;

public class arraylist4 {

    public static void main(String[] args) {

        ArrayList<Integer> list1 = new ArrayList<>();

        list1.add(1);
        list1.add(12);
        list1.add(34);
        list1.add(4);
        list1.add(54);
        list1.add(6);

        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < list1.size(); i++) {
            if (max < list1.get(i)) {
                max = list1.get(i);
            }
            if (min > list1.get(i)) {
                min = list1.get(i);
            }
        }

        System.out.println(max);
        System.out.println(min);
    }
}
