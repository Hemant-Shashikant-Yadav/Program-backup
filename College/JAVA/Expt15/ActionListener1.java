import java.awt.*;
import java.awt.event.*;

import javax.swing.JLabel;

class ActionListener1 extends Frame implements ActionListener {
    JLabel L;

    ActionListener1() {

        L = new JLabel();
        L.setBounds(60, 50, 170, 20);
        Button Btn = new Button("click me");
        Btn.setBounds(100, 120, 80, 30);

        Btn.addActionListener(this);

        add(Btn);
        add(L);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        L.setText("Welcome");
    }

    public static void main(String args[]) {
        new ActionListener1();
    }
}