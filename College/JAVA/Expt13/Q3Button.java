import javax.swing.*;
import java.awt.event.*;
import java.awt.event.*;

public class Q3Button extends JFrame {
    boolean clicked = false;
    Q3Button() {
        setTitle("Q3 Button");
        setBounds(500, 200, 500, 500);

        JButton B = new JButton("Click here");
        B.setBounds(200, 300, 120, 60);
        add(B);

        JButton B1 = new JButton(new ImageIcon("pause.png"));
        B1.setBounds(100, 100, 120, 60);
        add(B1);

        B1.addActionListener(new ActionListener() {

            public void actionPerformed(ActionEvent e) {
                if (!clicked) {
                    B1.setIcon(new ImageIcon("play-button.png"));
                    clicked = true;
                } else {
                    B1.setIcon(new ImageIcon("pause.png"));
                    clicked = false;
                }
            }
        });

        setLayout(null);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new Q3Button();
    }
}
