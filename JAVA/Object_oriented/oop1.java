

class pen {

    int tip;
    String color;

    void setColor(String color) {
        this.color = color;
    }

    void setTip(int tip) {
        this.tip = tip;
    }

    void display()
    {
        System.out.println(color);
        System.out.println(tip);
    }
}

public class oop1 {
    public static void main(String[] args) {
        pen P = new pen();
        P.color = "white";
        P.tip = 5;

        System.out.println(P.color);
        System.out.println(P.tip);

        P.setColor("Blue");
        P.setTip(10);

        P.display();
    }
}

/**
 * pen
 */
