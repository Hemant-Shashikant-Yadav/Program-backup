
import java.util.ArrayList;

public class arraylist5 {
    public static void swap(ArrayList<Integer> List, int x, int y) {
        int temp = List.get(x);
        List.set(x, List.get(y));
        List.set(y, temp);

        System.out.println(List);
    }

    public static void main(String[] args) {

        ArrayList<Integer> list1 = new ArrayList<>();

        list1.add(1);
        list1.add(12);
        list1.add(34);
        list1.add(4);
        list1.add(54);
        list1.add(6);

        int index1 = 1;
        int index2 = 3;

        System.out.println(list1);
        swap(list1, index1, index2);
        System.out.println(list1);
    }
}
