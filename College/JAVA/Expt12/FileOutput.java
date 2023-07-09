import java.io.FileOutputStream;

public class FileOutput {

    public static void main(String[] args) {
        try {
            FileOutputStream FileOut = new FileOutputStream("FileOutputFile.txt");
            String H = "Hello. This is Hemant Shashikant Yadav.";
            byte Y[] = H.getBytes();
            FileOut.write(Y);
            FileOut.close();
            System.out.println("The text \"" + H + "\"is written into the file.");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
