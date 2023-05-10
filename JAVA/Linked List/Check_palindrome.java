public class Check_palindrome {
    class Node {
        int data;
        Node next;

        Node(int data) {

            this.data = data;
            this.next = null;
        }
    }

    public static Node head = null, tail = null;

    void addEnd(int data) {
        Node a = new Node(data);
        if (head == null) {
            head = a;
            tail = a;
        } else {
            tail.next = a;
            tail = a;
        }

    }

    void display() {
        Node a = head;
        if (head == null) {
            System.out.println("Empty list!");
            return;
        }
        System.out.print("Data =");
        while (a != null) {
            System.out.print(" " + a.data);
            a = a.next;
        }
        System.out.println();
    }

    Node findMid(Node ll){
        Node slow=head,fast=head;

        while (fast!=null&&fast.next!=null) {
            slow = slow.next;
            fast = fast.next.next;
        }


        return slow;
    }

    public static void main(String[] args) {
        Check_palindrome ll = new Check_palindrome();
        ll.addEnd(0);
        ll.addEnd(1);
        ll.addEnd(2);
        ll.addEnd(3);
        ll.addEnd(4);
        ll.addEnd(5);
        ll.addEnd(6);
        ll.display();

        
        // System.out.println(ll.findMid(head));


    }
}
