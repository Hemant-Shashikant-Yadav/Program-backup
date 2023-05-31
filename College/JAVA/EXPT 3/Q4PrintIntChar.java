public class Q4PrintIntChar {
    public void print(int num,char ch) {
        System.out.println("Number = "+num);
        System.out.println("Character = "+ch);

    }
    public void print(char ch,int num) {
        System.out.println("Character = "+ch);
        System.out.println("Number = "+num);

    }

    public static void main(String[] args) {
        Q4PrintIntChar O = new Q4PrintIntChar();
        O.print(10, 'H');
        O.print('Y', 50);
    }
}
