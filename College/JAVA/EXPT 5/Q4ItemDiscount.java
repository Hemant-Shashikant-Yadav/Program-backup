import java.util.Scanner;

/**
 * Item
 */
class Item {
    int itemNo;
    String name;
    float price;
    Scanner sc = new Scanner(System.in);

    void getData() {
        System.out.print("Enter the name of item = ");
        name = sc.nextLine();
        System.out.print("Enter the quantity of item = ");
        itemNo = sc.nextInt();
        System.out.print("Enter the price of item = ");
        price = sc.nextInt();
    }

    void display() {
        System.out.println("Enter the name of item = " + name);
        System.out.println("Enter the quantity of item = " + itemNo);
        System.out.println("Enter the price of item = " + price);
    }

    float totalAmount() {
        return price * (float) itemNo;
    }
}

/**
 * Discount
 */
class Discount extends Item {
    float discountPercent;

    float dscountPrice(float total) {
        float discount;

        if (total < 500) {
            discount = 0.01f;
            total = total - (total * discount);

        } else if (total >= 500 && total < 1000) {
            discount = 0.05f;

            total = total - (total * discount);

        } else {
            discount = 0.10f;
            total = total - (total * discount);
        }
        return total;

    }
}

public class Q4ItemDiscount {
    public static void main(String[] args) {
        int n;
        float total = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of items you want to purchase = ");
        n = sc.nextInt();

        Discount P[] = new Discount[n];
        Discount Q = new Discount();

        for (int i = 0; i < n; i++) {
            P[i] = new Discount();
            P[i].getData();
            total += P[i].totalAmount();
            System.out.println();
        }
        System.out.println("Items purchased =");
        for (int i = 0; i < n; i++) {
            P[i].display();
            System.out.println();
        }
        System.out.println();
        float discountedPrice = Q.dscountPrice(total);
        System.out.println("Total amount = " + total);
        System.out.println("Discounted amount = " + discountedPrice);
    }
}
