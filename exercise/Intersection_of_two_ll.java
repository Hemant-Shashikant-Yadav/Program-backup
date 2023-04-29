public class Intersection_of_two_ll {

    public static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;
    public static Node tail;

    public static void addEnd(int data) {
        Node a = new Node(data);

        if (head == null) {
            head = a;
            tail = a;
            a.next = null;

        } else {

            Node b = tail;

            b.next = a;
            tail = a;
        }

    }

    public static void checkIntersection(Node a, Node b) {
        while (a != null) {
            b = head;

            while (b != null) {
                if (a == b) {
                    System.out.println("Intersection found");
                    return;
                }
            }
        }
        System.out.println("Intersection not found.");
    }

    public static void display() {
        Node a = head;
        if (head == null) {
            System.out.println("Linked list is empty.");
            return;
        }

        System.out.print("Linked list = ");
        while (a != null) {
            System.out.printf("%4d", a.data);
            a = a.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Node b = new Node(1);
        b.next = new Node(2);
        // b.next.next = new Node(3);
        // b.next.next.next = new Node(6);
        // b.next.next.next.next = new Node(7);

        // Node a = new Node(4);
        // a.next = new Node(5);
        // a.next.next = b.next.next.next;

        // display(b);
        // Intersection_of_two_ll ll =new Intersection_of_two_ll();

        // ll.display();

    }
}
