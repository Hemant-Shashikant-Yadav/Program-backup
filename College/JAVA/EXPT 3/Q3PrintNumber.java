public class Q3PrintNumber {

    public void printn(int number) {
        System.out.println("The number is = "+number);
    }
    public void printn(float number) {
        System.out.println("The number is = "+number);
    }
    public void printn(Double number) {
        System.out.println("The number is = "+number);
    }
    public void printn(Long number) {
        System.out.println("The number is = "+number);
    }
    public void printn(Short number) {
        System.out.println("The number is = "+number);
    }
    public void printn(Byte number) {
        System.out.println("The number is = "+number);
    }
    public static void main(String[] args) {
        Q3PrintNumber O = new Q3PrintNumber();

        O.printn(100000);
        O.printn(5.75f);
        O.printn(19.99d);
        O.printn(15000000000L);
        O.printn(5000);
        O.printn(100);
        
    }
    
}
