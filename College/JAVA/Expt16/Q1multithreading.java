
public class Q1multithreading extends Thread {

    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        Q1multithreading innerQ1multithreading = new Q1multithreading();
        innerQ1multithreading.start();
    }

}

