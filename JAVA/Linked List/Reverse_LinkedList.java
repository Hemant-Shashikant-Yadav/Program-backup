public class Reverse_LinkedList {

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

    public void reverse() {
        Node a = head, c = tail;
        Node b = head;

        while (head != tail) {
            while (a != tail) {
                b = a;
                a = a.next;
            }

            // b.next=null;
            a.next = b;
            tail = b;
            a = head;
        }

        head = c;
        a.next=null;

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

        Reverse_LinkedList ll = new Reverse_LinkedList();

        ll.addEnd(1);
        ll.addEnd(2);
        ll.addEnd(3);
        ll.addEnd(4);
        ll.addEnd(5);
        ll.addEnd(6);

        ll.display();
        ll.reverse();
        ll.display();

    }
}
