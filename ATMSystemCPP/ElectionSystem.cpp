#include <bits/stdc++.h>
using namespace std;

class Main_election_system
{
public:
    int grad_year_allowed = 3;
    int choice;
    string name_of_student;
    int current_year;
    string scholar_id;
    string promise;
    void enter_choice()
    {
        cout << "\n____________________________________________________________________________\n";
        cout << "Enter your choice of the three:\n";
        cout << "1 . Vote\n2. Nominate yourself\n3. Show results of the election\n";
        cin >> choice;
        cout << "\n\n****THANK YOU FOR CHOSING FROM THE GIVEN OPTIONS****\n\n";
    }
    void enter_details()
    {
        cout << "\n_____________________________________________________________________________\n";
        cout << "Enter your name:\n"
             << endl;
        cin.ignore();
        getline(cin, name_of_student);
        cout << "Enter the year you are currently present in:\n";
        cin >> current_year;
        cout << "Enter your scholar ID;\n";
        cin.ignore();
        getline(cin, scholar_id);
        cout << "****Thank you for filling your personal details****\n";
    }
};

class Nomination : public Main_election_system
{
public:
    int choice;
    int enter_year;
    void enter_choice_of_roll(Main_election_system &t)
    {
        cout << "\n_____________________________________________________________________________\n";
        cout << "Enter the roll for which you want to stand in the elections:\n1.GENERAL SECRETARY(GYMKHANA)\n2.GENERAL SECRETARY(CULTURAL)\n3.GENERAL SECRETARY(TECHNICAL)\n4.VICE PRESIDENT\n5.GIRLS REPERSENTATIVE\n";
        cin >> choice;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GENERAL_SECRETARY_GYMKHANA;
    friend class GIRLS_REPRESENTATIVE;
};

class VOTE_FOR_CANDIDATE : public Main_election_system
{
public:
    int voting_choice;
    int person;
    void enter_roll_to_vote()
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter the roll you want to vote for:\n1.GENERAL SECRETARY(GYMKHANA)\n2.GENERAL SECRETARY(CULTURAL)\n3.GENERAL SECRETARY(TECHNICAL)\n4.VICE PRESIDENT\n5.GIRLS REPERSENTATIVE\n";
        cin >> voting_choice;
    }
    void cast_vote()
    {
        cout << "\nPlease cast your vote to the deserving candidate:\n";
        cin >> person;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GENERAL_SECRETARY_GYMKHANA;
    friend class GIRLS_REPRESENTATIVE;
};

class SHOW_RESULTS : public Main_election_system
{
public:
    int choice;
    void enter_choice()
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter the post for which you want to find the results:\n1.GENERAL SECRETARY(GYMKHANA)\n2.GENERAL SECRETARY(CULTURAL)\n3.GENERAL SECRETARY(TECHNICAL)\n4.VICE PRESIDENT\n5.GIRLS REPERSENTATIVE\n";
        cin >> choice;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GENERAL_SECRETARY_GYMKHANA;
    friend class GIRLS_REPRESENTATIVE;
};

class GENERAL_SECRETARY_CULTURAL : Main_election_system
{
public:
    int i = 0;
    string promise;
    long long int sum_votes = 0;
    void enter_promise(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter your promise to the people who are going to vote for the right candidate:\n";
        cin.ignore();
        getline(cin, promise);
        t.promise = promise;
    }

    void sum_of_votes()
    {
        sum_votes += 1;
    }
    void details_candidate(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "CANDIDATE'S DETAILS";
        cout << "NAME OF THE CANDIDATE:  " << t.name_of_student << endl;
        cout << "CANDIDATE'S CURRENT YEAR OF GRADUATION:  " << t.current_year << endl;
        cout << "CANDIDATE'S SCHOLAR ID:  " << t.scholar_id << endl;
        cout << "THE PROMISE MADE BY THE CANDIDATE:  " << t.promise << endl;
    }
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GENERAL_SECRETARY_GYMKHANA;
    friend class GIRLS_REPRESENTATIVE;
};

class VICE_PRESIDENT : Main_election_system
{
public:
    string promise;
    long long int sum_votes = 0;
    void enter_promise(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter your promise to the people who are going to vote for the right candidate:\n";
        cin.ignore();
        getline(cin, promise);
        t.promise = promise;
    }
    void sum_of_votes()
    {
        sum_votes += 1;
    }
    void details_candidate(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "CANDIDATE'S DETAILS";
        cout << "NAME OF THE CANDIDATE:  " << t.name_of_student << endl;
        cout << "CANDIDATE'S CURRENT YEAR OF GRADUATION:  " << t.current_year << endl;
        cout << "CANDIDATE'S SCHOLAR ID:  " << t.scholar_id << endl;
        cout << "THE PROMISE MADE BY THE CANDIDATE:  " << t.promise << endl;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GENERAL_SECRETARY_GYMKHANA;
    friend class GIRLS_REPRESENTATIVE;
};

class GENERAL_SECRETARY_GYMKHANA : Main_election_system
{
public:
    string promise;
    long long int sum_votes = 0;
    void enter_promise(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter your promise to the people who are going to vote for the right candidate:\n";
        cin.ignore();
        getline(cin, promise);
        t.promise = promise;
    }
    void sum_of_votes()
    {
        sum_votes += 1;
    }
    void details_candidate(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "CANDIDATE'S DETAILS";
        cout << "NAME OF THE CANDIDATE:  " << t.name_of_student << endl;
        cout << "CANDIDATE'S CURRENT YEAR OF GRADUATION:  " << t.current_year << endl;
        cout << "CANDIDATE'S SCHOLAR ID:  " << t.scholar_id << endl;
        cout << "THE PROMISE MADE BY THE CANDIDATE:  " << t.promise << endl;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GIRLS_REPRESENTATIVE;
};

class GENERAL_SECRETARY_TECHNICAL : Main_election_system
{
public:
    string promise;
    long long int sum_votes = 0;
    void enter_promise(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter your promise to the people who are going to vote for the right candidate:\n";
        cin.ignore();
        getline(cin, promise);
        t.promise = promise;
    }
    void sum_of_votes()
    {
        sum_votes += 1;
    }
    void details_candidate(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "CANDIDATE'S DETAILS";
        cout << "NAME OF THE CANDIDATE:  " << t.name_of_student << endl;
        cout << "CANDIDATE'S CURRENT YEAR OF GRADUATION:  " << t.current_year << endl;
        cout << "CANDIDATE'S SCHOLAR ID:  " << t.scholar_id << endl;
        cout << "THE PROMISE MADE BY THE CANDIDATE:  " << t.promise << endl;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_GYMKHANA;
    friend class GIRLS_REPRESENTATIVE;
};

class GIRLS_REPRESENTATIVE : Main_election_system
{
public:
    string promise;
    long long int sum_votes = 0;
    void enter_promise(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "Enter your promise to the people who are going to vote for the right candidate:\n";
        cin.ignore();
        getline(cin, promise);
        t.promise = promise;
    }
    void sum_of_votes()
    {
        sum_votes += 1;
    }
    void details_candidate(Main_election_system &t)
    {
        cout << "\n_______________________________________________________________________________\n";
        cout << "CANDIDATE'S DETAILS";
        cout << "NAME OF THE CANDIDATE:  " << t.name_of_student << endl;
        cout << "CANDIDATE'S CURRENT YEAR OF GRADUATION:  " << t.current_year << endl;
        cout << "CANDIDATE'S SCHOLAR ID:  " << t.scholar_id << endl;
        cout << "THE PROMISE MADE BY THE CANDIDATE:  " << t.promise << endl;
    }
    friend class GENERAL_SECRETARY_CULTURAL;
    friend class VICE_PRESIDENT;
    friend class GENERAL_SECRETARY_TECHNICAL;
    friend class GENERAL_SECRETARY_GYMKHANA;
};

int main()
{
    cout << "*************************************************************************************************************" << endl;
    cout << "     |   |  ----  _____   ____      ____   ---   ---     _____         ___        ____    ____  ___ _____         " << endl;
    cout << "     |   | |    |   |    |         |____  |   | |   |      |    |   | |          |    |  |     |      |           " << endl;
    cout << "     |   | |    |   |    |----     |      |   | |---       |    |___| |---       |----/  |---  |---|  |           " << endl;
    cout << "     |   | |    |   |    |         |      |   | |   |      |    |   | |          |    |  |         |  |           " << endl;
    cout << "     |___|  ----    |    |____     |       ---  |   |      |    |   | |___       |____/  |____ ____/  |           " << endl
         << endl;
    cout << "*************************************************************************************************************" << endl;
    cout << "\n\n***WELCOME TO THE GYMKHANA ELECTION 2023***" << endl;
    cout << "\n\n";
    Main_election_system m;
    VOTE_FOR_CANDIDATE v;
    Nomination nom;
    GENERAL_SECRETARY_CULTURAL cul[4];
    GENERAL_SECRETARY_GYMKHANA gym[4];
    GENERAL_SECRETARY_TECHNICAL tec[4];
    VICE_PRESIDENT vp[4];
    GIRLS_REPRESENTATIVE gr[4];
    while (1 > 0)
    {
        m.enter_details();
        m.enter_choice();
        if (m.choice == 2 and m.current_year != m.grad_year_allowed)
        {
            cout << "You are not elligible to stand for any post in the Gynkhana elections\n";
        }
        int ch = m.choice;
        switch (ch)
        {
        case 1:
        {
            v.enter_roll_to_vote();
            switch (v.voting_choice)
            {
            case 1:
                for (int i = 0; i < 4; i++)
                {
                    cout << "CNDIDATE # " << i + 1 << endl;
                    gym[i].details_candidate(m);
                }
                v.cast_vote();
                int num;
                cin >> num;
                gym[num - 1].sum_of_votes();
                break;
            case 2:
                for (int i = 0; i < 4; i++)
                {
                    cout << "CNDIDATE # " << i + 1 << endl;
                    cul[i].details_candidate(m);
                }
                v.cast_vote();
                cin >> num;
                cul[num - 1].sum_of_votes();
                break;
            case 3:
                for (int i = 0; i < 4; i++)
                {
                    cout << "CNDIDATE # " << i + 1 << endl;
                    tec[i].details_candidate(m);
                }
                v.cast_vote();
                cin >> num;
                tec[num - 1].sum_of_votes();
                break;
            case 4:
                for (int i = 0; i < 4; i++)
                {
                    cout << "CNDIDATE # " << i + 1 << endl;
                    vp[i].details_candidate(m);
                }
                v.cast_vote();
                cin >> num;
                vp[num - 1].sum_of_votes();
                break;
            case 5:
                for (int i = 0; i < 4; i++)
                {
                    cout << "CANDIDATE # " << i + 1 << endl;
                    gr[i].details_candidate(m);
                }
                v.cast_vote();
                cin >> num;
                gr[num - 1].sum_of_votes();
                break;
            }
            break;
        }
        }
    }
}