import javax.swing.*;

public class Q5Menu extends JFrame {
    public Q5Menu() {
        setTitle("Menu Example");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JMenuBar menuBar = new JMenuBar();

        JMenu fileMenu = new JMenu("File");
        JMenuItem newMenuItem = new JMenuItem("New");
        JMenuItem openMenuItem = new JMenuItem("Open");
        JMenuItem saveMenuItem = new JMenuItem("Save");

        fileMenu.add(newMenuItem);
        fileMenu.add(openMenuItem);
        fileMenu.add(saveMenuItem);

        JMenu viewMenu = new JMenu("View");
        JMenuItem fullScreenMenuItem = new JMenuItem("Full Screen");
        JMenuItem minimizeMenuItem = new JMenuItem("Minimize");

        viewMenu.add(fullScreenMenuItem);
        viewMenu.add(minimizeMenuItem);

        menuBar.add(fileMenu);
        menuBar.add(viewMenu);

        setJMenuBar(menuBar);

       
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                Q5Menu menuExample = new Q5Menu();
                menuExample.setVisible(true);
            }
        });
    }
}
