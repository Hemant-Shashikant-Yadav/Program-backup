
public class Deleting_cycle {

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

    public void addEnd(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            tail = newNode;
        } else {

            tail.next = newNode;
            tail = newNode;
        }

    }

    public static void isCycle() {

        Node slow = head;
        Node fast = head;
        // Node prev = null;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                slow = head;
                while (slow.next != fast.next) {
                    // prev =fast;
                    slow = slow.next;
                    fast = fast.next;
                }
                // prev.next=null;
                fast.next=null;
                
            }
        }

    }

    public static void display() {
        Node a = head;
        if (head==null) {
            System.out.println("Linked list is empty.");
        }

        System.out.print("Linked list = ");
        while (a!=null) {  
            System.out.printf("%4d",a.data);
            a=a.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = head.next.next;
        // 1--2--3--4--3
        // 1--2--

        isCycle();

        display();
        
    }
}