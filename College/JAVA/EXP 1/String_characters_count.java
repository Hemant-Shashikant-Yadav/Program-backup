import java.util.Scanner;

public class String_characters_count {

    public static void main(String[] args) {
        int i, letterCount = 0, spaceCount = 0, numberCount = 0, otherCount = 0;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter string = ");
        String str = sc.nextLine();

        for (i = 0; i < str.length(); i++) {
            if ((str.charAt(i) >= 'a' && str.charAt(i) <= 'z') || (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')) {
                letterCount++;
            } else if (str.charAt(i) >= '0' && str.charAt(i) <= '9') {
                numberCount++;
            } else if (str.charAt(i) == 32) {
                spaceCount++;
            } else {
                otherCount++;
            }
        }

        System.out.println("Letter = " + letterCount);
        System.out.println("Number = " + numberCount);
        System.out.println("Space = " + spaceCount);
        System.out.println("Other = " + otherCount);
    }
}
