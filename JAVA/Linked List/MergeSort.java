
/**
 * MergeSort
 */
public class MergeSort {

    public static class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;
    public static Node tail;

    void addEnd(int data) {
        Node llNode = new Node(data);
        if (head == null) {
            head.next = tail.next = llNode;
            return;
        }

        tail.next = llNode;
        tail = llNode;

    }

    public Node findMid(Node head) {
        Node slow = head, fast = head;
        while (fast != null || fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    public Node mergeSort(Node head) {
        if (head == null || head.next == null) {
            return head;
        }
        Node mid = findMid(head);

        Node newNode = mid;
        mid.next = null;

        mergeSort(head);
        mergeSort(newNode);

        merge(head, newNode);
    }

    public void merge(Node head,Node newNode){
        
    }

    public static void main(String[] args) {

    }
}