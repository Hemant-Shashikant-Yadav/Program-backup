public class Delete_nth_node_from_end {

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

    public void addEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
            return;
        }

        tail.next = newNode;
        tail = newNode;
    }

    public void deleteNthFromEnd(int index) {
        int size = 0;
        Node a = head,b=head;

        while (a != null) {
            size++;
            a = a.next;
        }

        if (size == index) {
            head= head.next;
            return;
        }

        int i = 1;
        a = head;
        while (i < (size - index)) {
            // b=a;
            a = a.next;
            i++;
        }
        // b.next=a.next;
        a.next = a.next.next;
        return;

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

    public static void main(String[] args) {

        Delete_nth_node_from_end ll = new Delete_nth_node_from_end();

        ll.addEnd(1);
        ll.addEnd(2);
        ll.addEnd(3);
        ll.addEnd(4);
        ll.addEnd(5);
        ll.addEnd(6);

        ll.display();
        ll.deleteNthFromEnd(2);
        ll.display();

    }
}
