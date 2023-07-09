
public class Q2ArrayOutOfBound {
    public void printArray(int arr[]) {
        try {
            for (int i = 0; i < 10; i++) {
                System.out.println(arr[i]);
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("We have occured array index out of bound exeption.\nYou are accessing wrong index position element.");
        }

    }

    public void setArrData(int arr[]) {
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;
    }

    public static void main(String[] args) {
        Q2ArrayOutOfBound Obj = new Q2ArrayOutOfBound();
        int arr[] = new int[5];
        Obj.setArrData(arr);
        Obj.printArray(arr);
    }
}
