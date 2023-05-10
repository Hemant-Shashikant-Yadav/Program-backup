import java.util.LinkedList;

public class Linked_list_frameworl {
    public static void main(String[] args) {
        LinkedList<Integer> ll = new LinkedList<>();
        ll.addLast(1);
        ll.addLast(2);
        ll.addLast(3);

        ll.addFirst(0);
        ll.addFirst(-1);
        ll.addFirst(-2);

        System.out.println(ll);
        
        ll.removeFirst();
        ll.removeFirst();
        ll.removeLast();
        ll.removeLast();
        
        System.out.println(ll);
    }
}
