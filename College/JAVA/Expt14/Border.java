import javax.swing.*;
import java.awt.*;

public class Border {

    Border() {
        JFrame F = new JFrame();

        JButton b1 = new JButton("NORTH");
        JButton b2 = new JButton("SOUTH");
        JButton b3 = new JButton("EAST");
        JButton b4 = new JButton("WEST");

        F.setLayout(new BorderLayout(20, 20));

        F.add(b1, BorderLayout.NORTH);
        F.add(b2, BorderLayout.SOUTH);
        F.add(b3, BorderLayout.EAST);
        F.add(b4, BorderLayout.WEST);

        F.setSize(600, 600);
        F.setVisible(true);
    }

    public static void main(String[] args) {
        new Border();
    }
}