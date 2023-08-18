import java.awt.*;    
import javax.swing.*;    
public class Grid{    
   
Grid(){    
   JFrame F =new JFrame();    
    JButton button1=new JButton("1");    
    JButton button2=new JButton("2");    
    JButton button3=new JButton("3");    
    JButton button4=new JButton("4");    
    JButton button5=new JButton("5");    
   
    F.add(button1); 
    F.add(button2); 
    F.add(button3);  
    F.add(button4); 
    F.add(button5); 
  
    F.setLayout(new GridLayout(3,3));    
    F.setSize(600,600);    
    F.setVisible(true);    
}    
public static void main(String[] args) {    
    new Grid();    
}    
}    