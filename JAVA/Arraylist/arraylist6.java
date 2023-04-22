
import java.util.ArrayList;
import java.util.Collections;

public class arraylist6 {

    public static void main(String[] args) {

        ArrayList<Integer> list1 = new ArrayList<>();

        list1.add(1);
        list1.add(12);
        list1.add(34);
        list1.add(4);
        list1.add(54);
        list1.add(6);


        System.out.println(list1);
        
        Collections.sort(list1);
        System.out.println(list1);
        
        Collections.sort(list1,Collections.reverseOrder());
        System.out.println(list1);
    }
}
