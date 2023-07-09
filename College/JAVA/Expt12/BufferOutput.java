import java.io.BufferedOutputStream;
import java.io.FileOutputStream;

public class BufferOutput {
    public static void main(String[] args) throws Exception {
        FileOutputStream FileOutput = new FileOutputStream("BufferFileOutput.txt");

        BufferedOutputStream BufferOutput = new BufferedOutputStream(FileOutput);

        String H = "Hello. This is Hemant Shashikant Yadav.";
        byte Y[] = H.getBytes();
        BufferOutput.write(Y);
        BufferOutput.flush();
        BufferOutput.close();
        System.out.println("The text \"" + H + "\"is written into the file.");

    }
}
