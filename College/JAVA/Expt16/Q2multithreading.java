
public class Q2multithreading extends Thread {

    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        Q2multithreading innerQ2multithreading = new Q2multithreading();
        innerQ2multithreading.start();
        innerQ2multithreading.setName("thread1");
        System.out.println("Name of Thread is = " + innerQ2multithreading.getName());
        innerQ2multithreading.setPriority(10);
        System.out.println("The priority of thread is = " + innerQ2multithreading.getPriority());
    }

}
