import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ItemListener1 implements ItemListener {
    JCheckBox checkBox1, checkBox2;
    JLabel label;

    ItemListener1() {
        JFrame f = new JFrame("CheckBox ");
        label = new JLabel();
        label.setSize(400, 100);
        checkBox1 = new JCheckBox("Bike");
        checkBox1.setBounds(100, 100, 150, 50);
        checkBox2 = new JCheckBox("Truck");
        checkBox2.setBounds(100, 150, 150, 50);
        f.add(checkBox1);
        f.add(checkBox2);
        f.add(label);
        checkBox1.addItemListener(this);
        checkBox2.addItemListener(this);
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
    }

    public void itemStateChanged(ItemEvent e) {
        if (e.getSource() == checkBox1)
            label.setText("Bike Checkbox: "
                    + (e.getStateChange() == 1 ? "checked" : "unchecked"));
        if (e.getSource() == checkBox2)
            label.setText("Truck Checkbox: "
                    + (e.getStateChange() == 1 ? "checked" : "unchecked"));
    }

    public static void main(String args[]) {
        new ItemListener1();
    }
}