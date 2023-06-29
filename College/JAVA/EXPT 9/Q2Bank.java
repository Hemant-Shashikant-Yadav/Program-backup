
import java.util.Scanner;

abstract class BankAccount {
    String accountNumber, accountHolderName;
    double balance;

    abstract void deposit(double amount);

    abstract void withdraw(double amount);

    Scanner sc = new Scanner(System.in);

    void setData() {
        System.out.print("Enter account holder name = ");
        accountHolderName = sc.nextLine();
        System.out.print("Enter account number = ");
        accountNumber = sc.nextLine();
        System.out.print("Enter account balance = ");
        balance = sc.nextFloat();
    }

    void getAccountNumber() {
        System.out.println("Account number = " + accountNumber);
    }

    void getAccountHolderName() {
        System.out.println("Account holder name = " + accountHolderName);

    }

    void getBalance() {
        System.out.println("Account balance = " + balance);
    }
}

class SavingsAccount extends BankAccount {
    double interestRate = 10;
    Scanner sc = new Scanner(System.in);

    void deposit(double amount) {
        System.out.print(
                "You will get " + interestRate + "% of intrest on every diposite = ");
        balance += (amount + (amount * (interestRate / 100)));
        getBalance();
    }

    void withdraw(double amount) {
        balance -= amount;
        getBalance();
    }
}

class CurrentAccount extends BankAccount {
    double overdraftLimit = 10000;
    Scanner sc = new Scanner(System.in);

    void deposit(double amount) {

        balance += amount;
        getBalance();
    }

    void withdraw(double amount) {

        if (amount > overdraftLimit) {
            System.out.println(
                    "The withdrawl amount is more than kimit you cannot withdraw money. Sorry!!! Try again !!!");
            return;
        }
        balance -= amount;
        getBalance();
    }
}

public class Q2Bank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Menu = \nSelect Account\n1.Savings account.\n2.Current account.\n3.Exit.\nChoose = ");
            int opt = sc.nextInt();

            System.out.println();

            if (opt == 3) {
                break;
            }
            switch (opt) {
                case 1:
                    SavingsAccount B1 = new SavingsAccount();
                    while (true) {
                        System.out.print(
                                "Menu = \n1.Diposite.\n2.Withdraw.\n3.Display.\n4.Exit\nChoose = ");
                        int opt1 = sc.nextInt();

                        if (opt1 == 4) {
                            break;
                        }
                        switch (opt1) {
                            case 1:
                                System.out.print("Enter amount to be diposited = ");
                                double amt = sc.nextDouble();
                                B1.deposit(amt);
                                break;
                            case 2:
                                System.out.print("Enter amount to be withdraw = ");
                                amt = sc.nextDouble();
                                B1.withdraw(amt);
                                break;
                            case 3:
                                B1.getBalance();

                                break;

                            default:
                                System.out.println("Invalid input.");

                                break;

                        }
                        System.out.println();

                    }
                    break;
                case 2:
                    CurrentAccount B2 = new CurrentAccount();
                    while (true) {
                        System.out.print("Menu = \n1.Diposite.\n2.Withdraw.\n3.Display.\n4.Exit\nChoose = ");
                        int opt1 = sc.nextInt();

                        if (opt1 == 4) {
                            break;
                        }
                        switch (opt1) {

                            case 1:
                                System.out.print("Enter amount to be diposited = ");
                                double amt = sc.nextDouble();
                                B2.deposit(amt);
                                break;
                            case 2:
                                System.out.print("Enter amount to be withdraw = ");
                                amt = sc.nextDouble();
                                B2.withdraw(amt);
                                break;
                            case 3:
                                B2.getBalance();

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
