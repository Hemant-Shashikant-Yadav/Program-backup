import java.util.ArrayList;
import java.util.Scanner;

class List {
    int codeNo;
    double price;
    static Scanner sc = new Scanner(System.in);

    ArrayList<Integer> itemCode = new ArrayList<>();
    ArrayList<Double> itemPrice = new ArrayList<>();

    void addItems() {
        System.out.println("Enter the code of the item =");
        codeNo = sc.nextInt();
        System.out.println("Enter the price of the item =");
        price = sc.nextDouble();
        itemCode.add(codeNo);
        itemPrice.add(price);
    }

    void deleteItems() {
        System.out.println("Enter the code number that you want to remove");
        int codeNoTobeRemoved = sc.nextInt();
        if (itemCode.contains(codeNoTobeRemoved) == false) {
            System.out.println("Item not found.");
        } else {
            int index = itemCode.indexOf(codeNoTobeRemoved);
            itemCode.remove(index);
            itemPrice.remove(index);
            System.out.println("Removed.");
        }

    }

    void printItems() {
        if (itemCode.size() == 0) {
            System.out.println("The list is empty");
        } else {
            double total = 0;
            System.out.println("List = ");
            for (int i = 0; i < itemCode.size(); i++) {
                System.out.println("Item = " + itemCode.get(i) + " Price = " + itemPrice.get(i));
                total += itemPrice.get(i);
            }
            System.out.println("The total price is " + total);
        }
    }
}

public class Q6Shopping {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List l = new List();
        int a;

        while (true) {
            System.out.println("Menu\n1.Add Items\n2.Delete Items\n3.Print List\n4.Exit\nChoose");
            a = sc.nextInt();
            if (a == 4) {
                break;
            }
            switch (a) {
                case 1:
                    l.addItems();
                    break;
                case 2:
                    l.deleteItems();
                    break;
                case 3:
                    l.printItems();
                    break;
            }
        }
    }

}
