
public class Compile_time {

    public static void main(String[] args) {
        calculator C = new calculator();

        System.out.println(C.sum(1, 2));
        System.out.println(C.sum(1, 2, 3));
        System.out.println(C.sum((float) 1.8, (float) 2.8));
        System.out.println(C.sum((float) 1.1, (float) 2.3, (float) 3.6));
    }

}

class calculator {

    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }

    float sum(float a, float b) {
        return a + b;
    }

    float sum(float a, float b, float c) {
        return a + b + c;
    }
}
