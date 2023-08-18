import javax.swing.*;


public class Q6Checkbox extends JFrame {
    public Q6Checkbox() {
        setTitle("Checkbox Example");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JCheckBox checkBox1 = new JCheckBox("Checkbox 1");
        JCheckBox checkBox2 = new JCheckBox("Checkbox 2");
        JCheckBox checkBox3 = new JCheckBox("Checkbox 3");

        add(checkBox1);
        add(checkBox2);
        add(checkBox3);


    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                Q6Checkbox checkboxExample = new Q6Checkbox();
                checkboxExample.setVisible(true);
            }
        });
    }
}
