public class search_in_linked_list {
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
    public static int size;

    public void addEnd(int data) {
        Node newNode = new Node(data);
        size++;
        if (head == null) {
            head = tail = newNode;
            return;
        }

        tail.next = newNode;
        tail = newNode;
    }

    public void display() {
        Node a = head;
        if (head == null) {
            System.out.println("Linked list is empty.");
        }

        System.out.print("Linked list = ");
        while (a != null) {
            System.out.printf("%4d", a.data);
            a = a.next;
        }
        System.out.println();
    }

    // public void search(int searchVal) {
    // Node a = head;
    // int index=0;
    // while (a!=null) {
    // if (a.data==searchVal) {
    // System.out.println("The key is found at "+index+" index postion.");
    // return;
    // }
    // a=a.next;
    // index++;
    // }

    // System.out.println("No key found.");
    // }

    public void search(Node head, int searchVal, int index) {

        if (head == null) {
            System.out.println("No key found.");
            return;
        }
        if (head.data == searchVal) {
            System.out.println("The key is found at " + index + " index postion.");
            return;
        }
        search(head.next, searchVal, index+1);
    }

    public static void main(String[] args) {
        search_in_linked_list ll = new search_in_linked_list();
        ll.addEnd(1);
        ll.addEnd(2);
        ll.addEnd(3);
        ll.addEnd(4);
        ll.addEnd(5);
        ll.addEnd(6);
        ll.addEnd(7);
        ll.addEnd(8);
        ll.display();

        // ll.search(40);
        ll.search(head,6,0);
    }
}
