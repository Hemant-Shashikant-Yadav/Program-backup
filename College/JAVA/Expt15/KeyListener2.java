import java.awt.*;    
import java.awt.event.*;    
import javax.swing.*;


public class KeyListener2 extends JFrame implements KeyListener {    
 JLabel l;    
    JTextField area;    
    KeyListener2() {    
        l = new JLabel();    
        l.setBounds (20, 50, 100, 20);    
        area = new JTextField();    
        area.setBounds (0, 0, 200, 30);    
        area.addKeyListener(this);  
        add(l);  
        add(area);    
        setSize (200, 200);    
        setLayout (null);    
        setVisible (true);    
    }    
    public void keyPressed (KeyEvent e) {    
        l.setText ("Key Pressed");    
    }    
    public void keyReleased (KeyEvent e) {    
        l.setText ("Key Released");    
    }    
    public void keyTyped (KeyEvent e) {    
        l.setText ("Key Typed");    
    }    
    public static void main(String[] args) {    
        new KeyListener2();    
    }    
}   