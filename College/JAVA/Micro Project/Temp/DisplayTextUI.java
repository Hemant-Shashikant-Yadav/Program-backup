import java.awt.Dimension;

import javax.swing.*;

public class DisplayTextUI extends JFrame {
    public DisplayTextUI() {
        setTitle("Display Text UI");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setPreferredSize(new Dimension(400, 300));

        JLabel textLabel = new JLabel("Hello, world!");
        textLabel.setHorizontalAlignment(SwingConstants.CENTER);
        textLabel.setVerticalAlignment(SwingConstants.CENTER);

        add(textLabel);
        pack();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            DisplayTextUI frame = new DisplayTextUI();
            frame.setVisible(true);
        });
    }
}
