import java.io.BufferedInputStream;
import java.io.FileInputStream;

public class BufferInput {
    public static void main(String[] args) throws Exception {

        try {
            FileInputStream FileInput = new FileInputStream("FileOutputFile.txt");
            BufferedInputStream BufferInput = new BufferedInputStream(FileInput);
            int i;
            while ((i = BufferInput.read()) != -1) {
                System.out.print((char) i);
            }
            FileInput.close();
        } catch (Exception e) {
            System.out.println(e);
            // TODO: handle exception
        }
    }
}
