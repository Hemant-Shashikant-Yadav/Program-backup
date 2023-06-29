import java.util.Scanner;

class Account {
    void deposit() {
        System.out.println("This funciton is called from super class.");
    }

    void withdraw() {
        System.out.println("This funciton is called from super class.");
    }

    void checkBalance() {
        System.out.println("This funciton is called from super class.");
    }

}

class savings extends Account {
    int savings = 0;
    Scanner sc = new Scanner(System.in);

    void deposit() {
        System.out.println("Enter the amount you want to diposite = ");
        int amt = sc.nextInt();
        savings += amt;
    }

    void withdraw() {
        System.out.println("Enter the amount you want to withdraw = ");
        int amt = sc.nextInt();
        if (amt > savings) {
            System.out.println("Insufficient balance.");
            return;
        }
        savings -= amt;

    }

    void checkBalance() {
        System.out.println("Your account balance is = " + savings);

    }
}

class checking extends Account {
    int checking = 0;
    Scanner sc = new Scanner(System.in);

    void deposit() {
        System.out.println("Enter the amount you want to diposite = ");
        int amt = sc.nextInt();
        checking += amt;
    }

    void withdraw() {
        System.out.println("Enter the amount you want to withdraw = ");
        int amt = sc.nextInt();
        if (amt > checking) {
            System.out.println("Insufficient balance.");
            return;
        }
        checking -= amt;

    }

    void checkBalance() {
        System.out.println("Your account balance is = " + checking);

    }
}

class investment extends Account {
    int investment = 0;
    Scanner sc = new Scanner(System.in);

    void deposiinvestmentt() {
        System.out.println("Enter the amount you want to diposite = ");
        int amt = sc.nextInt();
        investment += amt;
    }

    void withdraw() {
        System.out.println("Enter the amount you want to withdraw = ");
        int amt = sc.nextInt();
        if (amt > investment) {
            System.out.println("Insufficient balance.");
            return;
        }
        investment -= amt;

    }

    void checkBalance() {
        System.out.println("Your account balance is = " + investment);

    }
}

public class Q5Bank {

    public static void main(String[] args) {
        Account S = new savings();
        Account C = new checking();
        Account I = new investment();

        int opt, opt1;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Menu \nSelect account = \n1.Savings\n2.Checking\n3.Investment\n4.Exit\nChoose = ");
            opt = sc.nextInt();

            if (opt == 4) {
                break;
            }
            switch (opt) {
                case 1:
                    while (true) {
                        System.out.print(
                                "Menu \nSelect option = \n1.Diposite\n2.Withdraw\n3.Check balance\n4.Exit\nChoose = ");
                        opt1 = sc.nextInt();

                        if (opt1 == 4) {
                            break;
                        }
                        switch (opt1) {
                            case 1:
                                S.deposit();
                                break;
                            case 2:
                                S.withdraw();
                                break;
                            case 3:
                                S.checkBalance();
                                break;
                        
                            default:
                                break;
                        }
                    }
                    break;
                case 2:
                    while (true) {
                        System.out.print(
                                "Menu \nSelect option = \n1.Diposite\n2.Withdraw\n3.Check balance\n4.Exit\nChoose = ");
                        opt1 = sc.nextInt();

                        if (opt1 == 4) {
                            break;
                        }
                        switch (opt1) {
                            case 1:
                                C.deposit();
                                break;
                            case 2:
                                C.withdraw();
                                break;
                            case 3:
                                C.checkBalance();
                                break;
                        
                            default:
                                break;
                        }
                    }
                    break;
                case 3:
                    while (true) {
                        System.out.print(
                                "Menu \nSelect option = \n1.Diposite\n2.Withdraw\n3.Check balance\n4.Exit\nChoose = ");
                        opt1 = sc.nextInt();

                        if (opt1 == 4) {
                            break;
                        }
                        switch (opt1) {
                            case 1:
                                I.deposit();
                                break;
                            case 2:
                                I.withdraw();
                                break;
                            case 3:
                                I.checkBalance();
                                break;
                        
                            default:
                                break;
                        }
                    }
                    break;

                default:
                    break;
            }

        }
    }

}
