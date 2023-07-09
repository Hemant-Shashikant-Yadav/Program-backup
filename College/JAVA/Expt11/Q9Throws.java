import java.io.BufferedInputStream;
import java.io.FileInputStream;

public class Q9Throws {
    public static void main(String[] args) throws Exception {
       FileInputStream FileInput = new FileInputStream("FileOutputFile.txt");
            BufferedInputStream BufferInput = new BufferedInputStream(FileInput);
            int i;
            while ((i = BufferInput.read()) != -1) {
                System.out.print((char) i);
            }
            FileInput.close();

    }
}
