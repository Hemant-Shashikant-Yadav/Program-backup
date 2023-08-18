import javax.swing.JFrame;

public class Q2Frame {
    public static void main(String[] args) {
        JFrame F = new JFrame("New Frame");

        F.setBounds(100, 100, 500, 500);
        F.setLayout(null);

        F.setVisible(true);
     
        F.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
