import java.awt.*;  
import java.awt.event.*;
import javax.swing.*;


public class MouseListner1 extends JFrame implements MouseListener{  
    JLabel L;  
    MouseListner1(){  
        addMouseListener(this);  
          
        L= new JLabel();  
        L.setBounds(20,50,100,20);  
        add(L);  
        setSize(300,300);  
        setLayout(null);  
        setVisible(true);  
    }  
    public void mouseClicked(MouseEvent e) {  
        L.setText("Mouse Clicked");  
    }  
    public void mouseEntered(MouseEvent e) {  
        L.setText("Mouse Entered");  
    }  
    public void mouseExited(MouseEvent e) {  
        L.setText("Mouse Exited");  
    }  
    public void mousePressed(MouseEvent e) {  
        L.setText("Mouse Pressed");  
    }  
    public void mouseReleased(MouseEvent e) {  
        L.setText("Mouse Released");  
    }  
public static void main(String[] args) {  
    new MouseListner1();  
}  
}  