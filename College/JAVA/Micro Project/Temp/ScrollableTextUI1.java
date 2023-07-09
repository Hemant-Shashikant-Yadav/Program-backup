import javax.swing.*;
import java.awt.*;

public class ScrollableTextUI1 extends JFrame {
    public ScrollableTextUI1() {
        setTitle("Scrollable Text UI");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setPreferredSize(new Dimension(400, 300));

        JTextArea textArea = new JTextArea();
        textArea.setLineWrap(true); // Enable line wrapping
        textArea.setWrapStyleWord(true); // Wrap at word boundaries
        String longText = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer sed dapibus lorem. Etiam tristique eros eu odio sollicitudin sollicitudin. Mauris eu mauris nulla. Vestibulum et ligula id ipsum dapibus congue. Nam vulputate nisi ipsum, at dignissim tellus cursus ut. Maecenas finibus odio ut interdum posuere. Sed venenatis felis vel elit varius, id egestas augue commodo. Suspendisse lacinia tellus in ipsum malesuada malesuada.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer sed dapibus lorem. Etiam tristique eros eu odio sollicitudin sollicitudin. Mauris eu mauris nulla. Vestibulum et ligula id ipsum dapibus congue. Nam vulputate nisi ipsum, at dignissim tellus cursus ut. Maecenas finibus odio ut interdum posuere. Sed venenatis felis vel elit varius, id egestas augue commodo. Suspendisse lacinia tellus in ipsum malesuada malesuada.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer sed dapibus lorem. Etiam tristique eros eu odio sollicitudin sollicitudin. Mauris eu mauris nulla. Vestibulum et ligula id ipsum dapibus congue. Nam vulputate nisi ipsum, at dignissim tellus cursus ut. Maecenas finibus odio ut interdum posuere. Sed venenatis felis vel elit varius, id egestas augue commodo. Suspendisse lacinia tellus in ipsum malesuada malesuada.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer sed dapibus lorem. Etiam tristique eros eu odio sollicitudin sollicitudin. Mauris eu mauris nulla. Vestibulum et ligula id ipsum dapibus congue. Nam vulputate nisi ipsum, at dignissim tellus cursus ut. Maecenas finibus odio ut interdum posuere. Sed venenatis felis vel elit varius, id egestas augue commodo. Suspendisse lacinia tellus in ipsum malesuada malesuada.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer sed dapibus lorem. Etiam tristique eros eu odio sollicitudin sollicitudin. Mauris eu mauris nulla. Vestibulum et ligula id ipsum dapibus congue. Nam vulputate nisi ipsum, at dignissim tellus cursus ut. Maecenas finibus odio ut interdum posuere. Sed venenatis felis vel elit varius, id egestas augue commodo. Suspendisse lacinia tellus in ipsum malesuada malesuada.";

        textArea.setText(longText);
        JScrollPane scrollPane = new JScrollPane(textArea);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);

        add(scrollPane);
        pack();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            ScrollableTextUI1 frame = new ScrollableTextUI1();
            frame.setVisible(true);
        });
    }
}
