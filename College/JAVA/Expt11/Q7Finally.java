import java.io.*;
import java.util.Scanner;

public class Q7Finally {
    public static void createFile() {
        try {
            File Obj = new File("myfile.txt");
            Scanner Reader = new Scanner(Obj);
            Reader.close();
        }
        catch (FileNotFoundException e) {
            System.out.println("An error has occurred.");
        }
         finally {
            System.out.println("Program ended");
        }
    }

    public static void main(String[] args) {
        createFile();
    }
}
