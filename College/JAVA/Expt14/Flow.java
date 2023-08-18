import java.awt.*;    
import javax.swing.*;    
    
public class Flow
{   
   
Flow()  
{    
   JFrame F = new JFrame();    
        
    JButton btn1 = new JButton("1");    
    JButton btn2 = new JButton("2");    
    JButton btn3 = new JButton("3");    
    JButton btn4 = new JButton("4");    
    JButton btn5 = new JButton("5");  
 
    
         
          
    F.add(btn1); 
    F.add(btn2); 
    F.add(btn3); 
    F.add(btn4);      
    F.add(btn5);

    F.setLayout(new FlowLayout());    
        
    F.setSize(600, 600);    
    F.setVisible(true);    
}    
  
public static void main(String argvs[])   
{    
    new Flow();    
}    
}    