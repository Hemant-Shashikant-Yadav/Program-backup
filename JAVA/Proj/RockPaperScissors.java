import java.util.Random;
import java.util.Scanner;

public class RockPaperScissors {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        String[] choices = {"rock", "paper", "scissors"};

        int userWins = 0;
        int computerWins = 0;

        for (int i = 0; i < 3; i++) {//playing 3 times
            int computerChoice = random.nextInt(3);

            System.out.println("\n\nWelcome to Rock, Paper, Scissors!");
            System.out.println("Enter your choice: rock, paper, or scissors");
            String userChoice = scanner.nextLine().toLowerCase();

            if (!(userChoice.equals("rock") || userChoice.equals("paper") || userChoice.equals("scissors"))) {
                System.out.println("Invalid choice. Please choose rock, paper, or scissors.");
                i--;
                continue;
            }

            System.out.println("Computer chose: " + choices[computerChoice]);
            System.out.println("You chose: " + userChoice);

            if (userChoice.equals(choices[computerChoice])) {
                System.out.println("It's a tie!");
            } else if ((userChoice.equals("rock") && computerChoice == 2) ||
                    (userChoice.equals("paper") && computerChoice == 0) ||
                    (userChoice.equals("scissors") && computerChoice == 1)) {
                System.out.println("\nYou win!");
                userWins++;
            } else {
                System.out.println("\nComputer wins!");
                computerWins++;
            }
        }

        if (userWins > computerWins) {
            System.out.println("\n\nYou are the winner!");
        } else if (userWins < computerWins) {
            System.out.println("\n\nComputer is the winner!");
        } else {
            System.out.println("\n\nIt's a tie overall!");
        }
    }
}
