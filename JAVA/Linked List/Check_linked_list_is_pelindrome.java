public class Check_linked_list_is_pelindrome {

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

    public void checkPalindrome() {
        int size = 0, i = 0;
        Node a = head, b = head;

        while (a != null) {
            size++;
            a = a.next;
        }

        int start = 1, end = size;
        a = head;
        while (start < end) {
            i = 1;
            while (i < end) {
                b = b.next;
                i++;
            }
            if (a.data != b.data) {
                System.out.println("Not a palindrome linked list.");
                return;
            }

            a = a.next;
            b = head;
            start++;
            end--;
        }
        System.out.println("Palindrome linked list.");
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

        Check_linked_list_is_pelindrome ll = new Check_linked_list_is_pelindrome();

        ll.addEnd(1);
        ll.addEnd(2);
        ll.addEnd(3);
        ll.addEnd(3);
        ll.addEnd(2);
        ll.addEnd(1);

        ll.display();
        ll.checkPalindrome();
        // ll.display();

    }
}
