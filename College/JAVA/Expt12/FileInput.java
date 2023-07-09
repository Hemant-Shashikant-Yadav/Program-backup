import java.io.FileInputStream;

public class FileInput {
    public static void main(String[] args) {
        try {
            FileInputStream FileInput = new FileInputStream("FileOutputFile.txt");
            int i;
            while ((i = FileInput.read()) != -1) {
                System.out.print((char) i);
            }
            FileInput.close();
        } catch (Exception e) {
            System.out.println(e);
            // TODO: handle exception
        }
    }
}
