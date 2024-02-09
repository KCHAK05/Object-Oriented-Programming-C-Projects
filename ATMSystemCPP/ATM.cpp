#include <bits/stdc++.h>
using namespace std;
#define l long long int

class ATM
{
public:
    l cash_amt = 50000;
    string history = "\n";
    string pin = "582002";
    l balance = 2000000;
    string lang;
    void select_lang()
    {
        cout << "Enter the language:\n";
        cin >> lang;
    }
};

class WITHDRAW : public ATM
{
public:
    l withdraw_amt = 0;
    string check_pin;
    int check_upi(ATM &t)
    {
        cout << "Enter your UPI pin:\n";
        cin >> check_pin;
        if (check_pin == t.pin)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int withdraw(ATM &t)
    {
        cout << "Enter the amount that you want to withdraw from the bank:\n";
        cin >> withdraw_amt;
        if (withdraw_amt <= t.cash_amt and withdraw_amt <= t.balance)
        {
            cout << "\n__________________\nPlease withdraw the cash\n__________________\n";
            return 1;
        }
        else
        {
            cout << "\n__________________\nNo cash available.Insufficient balance\n__________________\n";
            return 0;
        }
    }
    void update_history(ATM &t)
    {
        t.history += "Type:Withdraw       Amount withdrawn:";
        t.history += to_string(withdraw_amt);
        t.history += "\n";
    }
    void update_balance(ATM &t)
    {
        t.balance -= withdraw_amt;
    }
    void update_cash(ATM &t)
    {
        t.cash_amt -= withdraw_amt;
    }
};

class UPI_PIN : public ATM
{
public:
    string check_pin;
    int check_upi(ATM &t)
    {
        cout << "Enter your UPI pin:\n";
        cin >> check_pin;
        if (check_pin == t.pin)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void update_pin(ATM &t)
    {
        cout << "Enter the new pin:\n";
        cin >> check_pin;
        t.pin = check_pin;
        cout << "\n_______________________\nYour UPI PIN has been updated\n_______________________\n";
    }
};

class DEPOSIT : public ATM
{
public:
    l account_number;
    l deposit_amt;
    string check_pin;
    int check_upi(ATM &t)
    {
        cout << "Enter your UPI pin:\n";
        cin >> check_pin;
        if (check_pin == t.pin)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int transfer(ATM &T)
    {
        cout << "Enter the account where you want to tranfer the anount:\n";
        cin >> account_number;
        cout << "Enter the amount that you want to deposit in the account number: " << account_number << "\n ";
        cin >> deposit_amt;
        if (deposit_amt <= T.balance)
        {
            cout << "\n________________________________\nThe amount has been deposited into the account number: " << account_number << "\n________________________________\n";
            return 1;
        }
        else
        {
            cout << "\n________________________________\nInsufficient balance\n________________________________\n";
            return 0;
        }
    }
    void update_history(ATM &t)
    {
        t.history += "Type:Deposit       Amount deposited:";
        t.history += to_string(deposit_amt);
        t.history +="\n";
    }
    void update_balance(ATM &t)
    {
        t.balance -= deposit_amt;
    }
};

class CHECK_BALANCE : public ATM
{
public:
    string check_pin;
    int check_upi(ATM &t)
    {
        cout << "Enter your UPI pin:\n";
        cin >> check_pin;
        if (check_pin == t.pin)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display_balance(ATM &t)
    {
        cout << "\n___________________\nAvaialable balance: " << t.balance << "\n___________________\n";
    }
};

class MINI_STATEMENT : public ATM
{
public:
    string check_pin;
    int check_upi(ATM &t)
    {
        cout << "Enter your UPI pin:\n";
        cin >> check_pin;
        if (check_pin == t.pin)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void show_st(ATM &t)
    {
        cout << "\n_____________________\nMINI-STATEMENT\n_____________________\n";
        cout << t.history << "\n";
    }
};

class FAST_CASH : public ATM
{
public:
    int choice;
    l fast_cash;
    string check_pin;
    int check_upi(ATM &t)
    {
        cout << "Enter your UPI pin:\n";
        cin >> check_pin;
        if (check_pin == t.pin)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int fast_deliver(ATM &t)
    {
        cout << "Enter your choice of withdrawal:\n1.Rs.50\n2.Rs.100\n3.Rs200\n4.Rs.500\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            fast_cash = 50;
            if (fast_cash <= t.balance and fast_cash <= t.cash_amt)
            {
                cout << "\n_______________\nPlease collect the cash\n_______________\n";
                return 1;
            }
            else
            {
                cout << "\n_______________\nInsufficient cash/amount\n_______________\n";
                return 0;
            }
            break;
        }
        case 2:
        {
            fast_cash = 100;
            if (fast_cash <= t.balance and fast_cash <= t.cash_amt)
            {
                cout << "\n_______________\nPlease collect the cash\n_______________\n";
                return 1;
            }
            else
            {
                cout << "\n_______________\nInsufficient cash/amount\n_______________\n";
                return 0;
            }
            break;
        }
        case 3:
        {
            fast_cash = 200;
            if (fast_cash <= t.balance and fast_cash <= t.cash_amt)
            {
                cout << "\n_______________\nPlease collect the cash\n_______________\n";
                return 1;
            }
            else
            {
                cout << "\n_______________\nInsufficient cash/amount\n_______________\n";
                return 0;
            }
            break;
        }
        case 4:
        {
            fast_cash = 500;
            if (fast_cash <= t.balance and fast_cash <= t.cash_amt)
            {
                cout << "\n_______________\nPlease collect the cash\n_______________\n";
                return 1;
            }
            else
            {
                cout << "\n_______________\nInsufficient cash/amount\n_______________\n";
                return 0;
            }
            break;
        }
        }
    }
    void update_history(ATM &t)
    {
        t.history += "Type:Withdraw       Amount withdrawn:";
        t.history += to_string(fast_cash);
        t.history += "\n";
    }
    void update_balance(ATM &t)
    {
        t.balance -= fast_cash;
    }
    void update_cash(ATM &t)
    {
        t.cash_amt -= fast_cash;
    }
};

int main()
{
    int ch = 1;
    cout << "\n\n******************************************\nWelcome to the STATE BANK OF INDIA A.T.M!!\n******************************************\n";
    int card_in;
    cout << "\nPlease insert your debit/credit card\n\n";
    int choice = 0;
    ATM t;
    t.select_lang();
    CHECK_BALANCE a;
    DEPOSIT b;
    WITHDRAW c;
    UPI_PIN d;
    MINI_STATEMENT e;
    FAST_CASH f;
    ;
    while (choice != 7)
    {
        cout << "Enter the option:\n1.Check Balance\n2.Deposit amount\n3.Withdraw money\n4.Generate Pin\n5.Mini Statement\n6.Fast Cash\n7.Exit bank\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            if (a.check_upi(t))
            {
                a.display_balance(t);
            }
            else
            {
                cout << "\n________________\nWrong UPI PIN enterred\n________________\n";
            }
            break;
        }
        case 2:
        {
            if (b.check_upi(t))
            {
                if (b.transfer(t))
                {
                    b.update_balance(t);
                    b.update_history(t);
                }
            }
            else
            {
                cout << "\n________________\nWrong UPI PIN enterred\n________________\n";
            }
            break;
        }
        case 3:
        {
            if (c.check_upi(t))
            {
                if (c.withdraw(t))
                {
                    c.update_balance(t);
                    c.update_cash(t);
                    c.update_history(t);
                }
            }
            else
            {
                cout << "\n________________\nWrong UPI PIN enterred\n________________\n";
            }
            break;
        }
        case 4:
        {
            if (d.check_upi(t))
            {
                d.update_pin(t);
            }
            else
            {
                cout << "\n________________\nWrong UPI PIN enterred\n________________\n";
            }
            break;
        }
        case 5:
        {
            if (e.check_upi(t))
            {
                e.show_st(t);
            }
            else
            {
                cout << "\n________________\nWrong UPI PIN enterred\n________________\n";
            }
            break;
        }
        case 6:
        {
            if (f.check_upi(t))
            {
                if (f.fast_deliver(t))
                {
                    f.update_balance(t);
                    f.update_history(t);
                    f.update_cash(t);
                }
            }
            else
            {
                cout << "\n________________\nWrong UPI PIN enterred\n________________\n";
            }
            break;
        }
        case 7:
        {
            cout << "\n________________________\nThank you for using the SBI ATM\n________________________\n\n";
            break;
        }
        }
    }
}