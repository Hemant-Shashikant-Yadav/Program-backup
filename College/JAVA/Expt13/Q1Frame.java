import javax.swing.*;

public class Q1Frame extends JFrame {
    Q1Frame(){
        setTitle("Q1");
        setBounds(200,200,500, 500);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args) {
        new Q1Frame();
    }
}
