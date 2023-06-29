import java.util.Scanner;

class BankAccount {
    final int accountNumber;
    double balance = 0;

    BankAccount(int acc) {
        accountNumber = acc;
        displayBal();
    }

    void displayBal() {
        System.out.println("Account balance = " + balance);
    }
}

class SavingsAccount extends BankAccount {
    double interestRate;

    SavingsAccount(int acc) {
        super(acc);
    }

    void diposite() {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter diposite amount = ");
        float dipositeAmt = sc.nextInt();
        balance += dipositeAmt;

        displayBal();

    }

    void withdraw() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter withdrawal amount = ");
        float withdrawlAmt = sc.nextInt();
        balance -= withdrawlAmt;

        displayBal();

    }

    void calculateInterest() {
        int principal;
        float rate;
        int time;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter principal amount = ");
        principal = sc.nextInt();
        System.out.print("Enter rete in perent = ");
        rate = sc.nextFloat();
        System.out.print("Enter time = ");
        time = sc.nextInt();
        System.out.println("The intrest = " + (double) (principal * (rate / 100f) * time));

    }
}

class CheckingAccount extends BankAccount {
    final double transactionFee = 50;

    void diposite() {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter diposite amount = ");
        float dipositeAmt = sc.nextInt();
        balance += dipositeAmt;

        displayBal();

    }

    void withdraw() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter withdrawal amount (Transaction fee Rs.50 will be deduce.) = ");
        float withdrawlAmt = sc.nextInt();
        balance -= (withdrawlAmt + transactionFee);

        displayBal();

    }

    CheckingAccount(int acc) {
        super(acc);
    }
}

public class Q6Bank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Menu = \nSelect Account\n1.Savings account.\n2.Checking account.\n3.Exit.\nChoose = ");
            int opt = sc.nextInt();

            System.out.println();

            if (opt == 3) {
                break;
            }
            switch (opt) {
                case 1:
                    SavingsAccount B1 = new SavingsAccount(1856794325);
                    while (true) {
                        System.out.print(
                                "Menu = \n1.Diposite.\n2.Withdraw.\n3.Display.\n4.Claclulate intrest.\n5.Exit\nChoose = ");
                        int opt1 = sc.nextInt();

                        if (opt1 == 5) {
                            break;
                        }
                        switch (opt1) {
                            case 1:
                                B1.diposite();
                                break;
                            case 2:

                                B1.withdraw();
                                break;
                            case 3:
                                B1.displayBal();

                                break;
                            case 4:
                                B1.calculateInterest();

                                break;

                            default:
                                System.out.println("Invalid input.");

                                break;

                        }
                        System.out.println();

                    }
                    break;
                case 2:
                    CheckingAccount B2 = new CheckingAccount(346985621);
                    while (true) {
                        System.out.print("Menu = \n1.Diposite.\n2.Withdraw.\n3.Display.\n4.Exit\nChoose = ");
                        int opt1 = sc.nextInt();

                        if (opt1 == 4) {
                            break;
                        }
                        switch (opt1) {
                            case 1:
                                B2.diposite();
                                break;
                            case 2:

                                B2.withdraw();
                                break;
                            case 3:
                                B2.displayBal();

                                break;

                            default:
                                System.out.println("Invalid input.");

                                break;
                        }
                        System.out.println();
                    }
                    break;

                default:
                    System.out.println("Invalid input.");
                    break;
            }
            System.out.println();

        }
    }
}
