import javax.swing.*;

public class Q4RadioButton extends JFrame {
    Q4RadioButton() {

        JLabel label1 = new JLabel("Male");
        JLabel label2 = new JLabel("Female");

        JRadioButton R1 = new JRadioButton();
        JRadioButton R2 = new JRadioButton();

        ButtonGroup Gr = new ButtonGroup();

        Gr.add(R1);
        Gr.add(R2);
        
        add(R1);
        add(R2);
        
        R1.setBounds(0,100, 20,20);      
        R2.setBounds(0,150,20,20);  

        label1.setBounds(50,100, 250,20);      
        label2.setBounds(50,150,95,30);  
        add(label1);
        add(label2);

        setLayout(null);
        setBounds(100, 100, 600, 500);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new Q4RadioButton();
    }
}
