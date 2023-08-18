public class Q3multithreading {
    public static class InnerQ3multithreading extends Thread {
        public void run() {
            for (int i = 1; i <= 10; i++) {
                System.out.println("\t5" + " X " + i + " = " + 5 * i);
            }
        }
    }

    public static class InnerQ3multithreading_1 extends Thread {
        public void run() {
            for (int i = 1; i <= 10; i++) {
                System.out.println("\t6" + " X " + i + " = " + 6 * i);
            }
        }
    }

    public static class InnerQ3multithreading_2 extends Thread {
        public void run() {
            for (int i = 1; i <= 10; i++) {
                System.out.println("\t7" + " X " + i + " = " + 7 * i);
            }
        }
    }

    public static void main(String[] args) {
        InnerQ3multithreading i1 = new InnerQ3multithreading();
        InnerQ3multithreading_1 i2 = new InnerQ3multithreading_1();
        InnerQ3multithreading_2 i3 = new InnerQ3multithreading_2();

        i1.start();
        i2.start();
        i3.start();

     
    }
}
