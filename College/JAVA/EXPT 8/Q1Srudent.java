class student {
    int roll;
    String name;
    final int age=0;
}

class studentdemo extends student {
    int age = 21;

    void display() {
        System.out.println("Age = "+age);
    }
}

public class Q1Srudent {

    public static void main(String[] args) {
        
        studentdemo S = new studentdemo();
        S.display();  
    }
}
