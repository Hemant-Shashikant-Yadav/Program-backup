
public class LinkedList1 {

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

    public void addBegininig(int data)
    {
        Node newNode = new Node(data);
        size++;

        if (head == null) {
            head = newNode;            
            tail = newNode;            
        }
        else{

            newNode.next = head;
            head = newNode;
        }
        
    }
    public void addEnd(int data)
    {
        Node newNode = new Node(data);
        size++;

        if (head == null) {
            head = newNode;            
            tail = newNode;            
        }
        else{

            tail.next = newNode;
            tail = newNode;
        }
        
    }

    public void addIndex(int index,int data)
    {
        Node A = head;
        
        if (index==0) {
            addBegininig(data);
            return;
        }

        int i=0;
        while (i<index-1 && A!= null) {
            A=A.next;    
            i++;        
        }

        if (A==null) {
            System.out.println("Invalid location");
            return;
        }
        if (A.next == null) {
            addEnd(data);
            return;
        }

        Node newNode = new Node(data);
        size++;
        newNode.next = A.next;
        A.next = newNode;
    }

    public void display() {
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

    public void deleteBegening()
    {
        if (head==null) {
            System.out.println("Empty linked list.");
            return;
        }
        size--;                              
        if (head.next==null) {
            head=tail=null;
            return;
        }

        head = head.next;
    }
    public void deleteEnd()
    {
        Node a = head;
        if (head==null) {
            System.out.println("Empty linked list.");
            return;
        }
        if (head.next==null) {
            head=tail=null;
            return;
        }

        int i=0;
        while (i<size-2) {
            a=a.next;
            i++;
        }
        
        tail=a;
        a.next=null;
        size--;
    }

    public static void main(String[] args) {
        LinkedList1 ll = new LinkedList1();
        ll.addBegininig(1);
        ll.addBegininig(2);
        ll.addEnd(3);
        ll.addEnd(4);
        ll.addEnd(5);
        // ll.display();
        
        ll.addIndex(4, 11);
        ll.addEnd(5);
        ll.addEnd(2);
        ll.display();
        
        ll.deleteBegening();
        ll.display();
        
        // ll.deleteEnd();
        ll.deleteEnd();
        ll.display();
    }
}
