
public class Sum_Average_Running_Int {

    public static void main(String[] args) {
        int lowerbound, upperbound, sum = 0, i;
        float average;

        lowerbound = 1;
        upperbound = 100;

        for (i = lowerbound; i <= upperbound; i++) {
            sum += i;
        }

        average = (float)sum/100.0f;

        System.out.println("The sum of "+lowerbound+" to "+upperbound+" is = "+sum);
        System.out.println("The average of "+lowerbound+" to "+upperbound+" is = "+average);

    }
}
