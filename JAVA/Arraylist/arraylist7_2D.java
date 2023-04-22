import java.util.ArrayList;

public class arraylist7_2D {
    public static void main(String[] args) {

        ArrayList<ArrayList<Integer>> MainList = new ArrayList<>();

        // ArrayList<Integer> List1 = new ArrayList<>();
        // List1.add(1);
        // List1.add(2);
        // List1.add(3);

        // MainList.add(List1);

        // ArrayList<Integer> List2 = new ArrayList<>();
        // List2.add(4);
        // List2.add(5);
        // List2.add(6);

        // MainList.add(List2);

        ArrayList<Integer> List1 = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            List1.add((i+1)*1);
        }

        MainList.add(List1);

        ArrayList<Integer> List2 = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            List2.add((i+1)*2);
        }

        MainList.add(List2);

        ArrayList<Integer> List3 = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            List3.add((i+1)*3);
        }

        MainList.add(List3);

        System.out.println(MainList);

        for (int i = 0; i < MainList.size(); i++) {
            ArrayList<Integer> TempList = MainList.get(i);
            for (int j = 0; j < TempList.size(); j++) {
                System.out.print(TempList.get(j) + " ");
            }
            System.out.println();
        }
    }
}
