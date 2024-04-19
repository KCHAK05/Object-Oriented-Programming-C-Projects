import java.util.Scanner;

class ATM {
    public long cash_amt = 50000;
    public String history = "\n";
    public String pin = "582002";
    public long balance = 2000000;
    public String lang;

    public void select_lang() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the language:");
        lang = scanner.nextLine();
    }
}

class WITHDRAW extends ATM {
    public long withdraw_amt = 0;
    public String check_pin;

    public int check_upi(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your UPI pin:");
        check_pin = scanner.nextLine();
        if (check_pin.equals(t.pin)) {
            return 1;
        } else {
            return 0;
        }
    }

    public int withdraw(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the amount that you want to withdraw from the bank:");
        withdraw_amt = scanner.nextLong();
        if (withdraw_amt <= t.cash_amt && withdraw_amt <= t.balance) {
            System.out.println("\n__________________\nPlease withdraw the cash\n__________________\n");
            return 1;
        } else {
            System.out.println("\n__________________\nNo cash available.Insufficient balance\n__________________\n");
            return 0;
        }
    }

    public void update_history(ATM t) {
        t.history += "Type:Withdraw       Amount withdrawn:";
        t.history += Long.toString(withdraw_amt);
        t.history += "\n";
    }

    public void update_balance(ATM t) {
        t.balance -= withdraw_amt;
    }

    public void update_cash(ATM t) {
        t.cash_amt -= withdraw_amt;
    }
}

class UPI_PIN extends ATM {
    public String check_pin;

    public int check_upi(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your UPI pin:");
        check_pin = scanner.nextLine();
        if (check_pin.equals(t.pin)) {
            return 1;
        } else {
            return 0;
        }
    }

    public void update_pin(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the new pin:");
        check_pin = scanner.nextLine();
        t.pin = check_pin;
        System.out.println("\n_______________________\nYour UPI PIN has been updated\n_______________________\n");
    }
}

class DEPOSIT extends ATM {
    public long account_number;
    public long deposit_amt;
    public String check_pin;

    public int check_upi(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your UPI pin:");
        check_pin = scanner.nextLine();
        if (check_pin.equals(t.pin)) {
            return 1;
        } else {
            return 0;
        }
    }

    public int transfer(ATM T) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the account where you want to tranfer the anount:");
        account_number = scanner.nextLong();
        System.out.println("Enter the amount that you want to deposit in the account number: " + account_number + "\n ");
        deposit_amt = scanner.nextLong();
        if (deposit_amt <= T.balance) {
            System.out.println("\n________________________________\nThe amount has been deposited into the account number: " + account_number + "\n________________________________\n");
            return 1;
        } else {
            System.out.println("\n________________________________\nInsufficient balance\n________________________________\n");
            return 0;
        }
    }

    public void update_history(ATM t) {
        t.history += "Type:Deposit       Amount deposited:";
        t.history += Long.toString(deposit_amt);
        t.history += "\n";
    }

    public void update_balance(ATM t) {
        t.balance -= deposit_amt;
    }
}

class CHECK_BALANCE extends ATM {
    public String check_pin;

    public int check_upi(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your UPI pin:");
        check_pin = scanner.nextLine();
        if (check_pin.equals(t.pin)) {
            return 1;
        } else {
            return 0;
        }
    }

    public void display_balance(ATM t) {
        System.out.println("\n___________________\nAvaialable balance: " + t.balance + "\n___________________\n");
    }
}

class MINI_STATEMENT extends ATM {
    public String check_pin;

    public int check_upi(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your UPI pin:");
        check_pin = scanner.nextLine();
        if (check_pin.equals(t.pin)) {
            return 1;
        } else {
            return 0;
        }
    }

    public void show_st(ATM t) {
        System.out.println("\n_____________________\nMINI-STATEMENT\n_____________________\n");
        System.out.println(t.history + "\n");
    }
}

class FAST_CASH extends ATM {
    public int choice;
    public long fast_cash;
    public String check_pin;

    public int check_upi(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your UPI pin:");
        check_pin = scanner.nextLine();
        if (check_pin.equals(t.pin)) {
            return 1;
        } else {
            return 0;
        }
    }

    public int fast_deliver(ATM t) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your choice of withdrawal:\n1.Rs.50\n2.Rs.100\n3.Rs200\n4.Rs.500\n");
        choice = scanner.nextInt();
        switch (choice) {
            case 1: {
                fast_cash = 50;
                if (fast_cash <= t.balance && fast_cash <= t.cash_amt) {
                    System.out.println("\n_______________\nPlease collect the cash\n_______________\n");
                    return 1;
                } else {
                    System.out.println("\n_______________\nInsufficient cash/amount\n_______________\n");
                    return 0;
                }
            }
            case 2: {
                fast_cash = 100;
                if (fast_cash <= t.balance && fast_cash <= t.cash_amt) {
                    System.out.println("\n_______________\nPlease collect the cash\n_______________\n");
                    return 1;
                } else {
                    System.out.println("\n_______________\nInsufficient cash/amount\n_______________\n");
                    return 0;
                }
            }
            case 3: {
                fast_cash = 200;
                if (fast_cash <= t.balance && fast_cash <= t.cash_amt) {
                    System.out.println("\n_______________\nPlease collect the cash\n_______________\n");
                    return 1;
                } else {
                    System.out.println("\n_______________\nInsufficient cash/amount\n_______________\n");
                    return 0;
                }
            }
            case 4: {
                fast_cash = 500;
                if (fast_cash <= t.balance && fast_cash <= t.cash_amt) {
                    System.out.println("\n_______________\nPlease collect the cash\n_______________\n");
                    return 1;
                } else {
                    System.out.println("\n_______________\nInsufficient cash/amount\n_______________\n");
                    return 0;
                }
            }
        }
        return 0;
    }

    public void update_history(ATM t) {
        t.history += "Type:Withdraw       Amount withdrawn:";
        t.history += Long.toString(fast_cash);
        t.history += "\n";
    }

    public void update_balance(ATM t) {
        t.balance -= fast_cash;
    }

    public void update_cash(ATM t) {
        t.cash_amt -= fast_cash;
    }
}

public class ATM_java {
    public static void main(String[] args) {
        int ch = 1;
        System.out.println("\n\n******************************************\nWelcome to the STATE BANK OF INDIA A.T.M!!\n******************************************\n");
        int card_in;
        System.out.println("\nPlease insert your debit/credit card\n\n");
        int choice = 0;
        ATM t = new ATM();
        t.select_lang();
        CHECK_BALANCE a = new CHECK_BALANCE();
        DEPOSIT b = new DEPOSIT();
        WITHDRAW c = new WITHDRAW();
        UPI_PIN d = new UPI_PIN();
        MINI_STATEMENT e = new MINI_STATEMENT();
        FAST_CASH f = new FAST_CASH();
        while (choice != 7) {
            Scanner scanner = new Scanner(System.in);
            System.out.println("Enter the option:\n1.Check Balance\n2.Deposit amount\n3.Withdraw money\n4.Generate Pin\n5.Mini Statement\n6.Fast Cash\n7.Exit bank\n");
            choice = scanner.nextInt();
            switch (choice) {
                case 1: {
                    if (a.check_upi(t) == 1) {
                        a.display_balance(t);
                    } else {
                        System.out.println("\n________________\nWrong UPI PIN enterred\n________________\n");
                    }
                    break;
                }
                case 2: {
                    if (b.check_upi(t) == 1) {
                        if (b.transfer(t) == 1) {
                            b.update_balance(t);
                            b.update_history(t);
                        }
                    } else {
                        System.out.println("\n________________\nWrong UPI PIN enterred\n________________\n");
                    }
                    break;
                }
                case 3: {
                    if (c.check_upi(t) == 1) {
                        if (c.withdraw(t) == 1) {
                            c.update_balance(t);
                            c.update_cash(t);
                            c.update_history(t);
                        }
                    } else {
                        System.out.println("\n________________\nWrong UPI PIN enterred\n________________\n");
                    }
                    break;
                }
                case 4: {
                    if (d.check_upi(t) == 1) {
                        d.update_pin(t);
                    } else {
                        System.out.println("\n________________\nWrong UPI PIN enterred\n________________\n");
                    }
                    break;
                }
                case 5: {
                    if (e.check_upi(t) == 1) {
                        e.show_st(t);
                    } else {
                        System.out.println("\n________________\nWrong UPI PIN enterred\n________________\n");
                    }
                    break;
                }
                case 6: {
                    if (f.check_upi(t) == 1) {
                        if (f.fast_deliver(t) == 1) {
                            f.update_balance(t);
                            f.update_history(t);
                            f.update_cash(t);
                        }
                    } else {
                        System.out.println("\n________________\nWrong UPI PIN enterred\n________________\n");
                    }
                    break;
                }
                case 7: {
                    System.out.println("\n________________________\nThank you for using the SBI ATM\n________________________\n\n");
                    break;
                }
            }
        }
    }
}


