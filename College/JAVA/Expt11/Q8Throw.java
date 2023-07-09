public class Q8Throw {
    public void checkAge(int age) {
        try {
            if (age < 18) {
                throw new ArithmeticException("You areuder age");
            }
        } 
        catch(ArithmeticException e)
        {
            System.out.println("Arithmetic exeption.");
        }
        finally {
            System.out.println("Program ended");
        }
    }

    public static void main(String[] args) {
        Q8Throw Q = new Q8Throw();
        Q.checkAge(10);
    }
}
