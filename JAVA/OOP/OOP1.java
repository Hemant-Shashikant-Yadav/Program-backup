package OOP;
/**
 * OOPs_1
 */
public class OOP1 {

    public static void main(String[] args) {
        Pen P1 = new Pen();

        P1.setColor("Blue");
        System.out.println(P1.color);
        P1.color="Pink";
        System.out.println(P1.color);


    }
}

/**
 * Pen
 */
class Pen {
    int tip;
    String color;

    void setColor(String newCol) {
        color = newCol;
    }

    void setTip(int newtip) {
        tip = newtip;
    }

}