#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <algorithm> // for std::find
#include <iterator>  //for std::begin , std::end

using namespace std;
int main()
{   
    string playerName;
    int balance ;
    cout << "\n\t\t\t\t\t\t=================================== WELCOME TO CASINO GAME ===================================" << endl;
    cout << "\n\t\t\t\t\t\t\t========================= Developed by Piyush Kumar =========================" << endl;
    //cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
    cout << "\n\nWhat's your Name : ";
    getline(cin, playerName);
    cout << "Hey "<<playerName<<",Enter the starting balance to play game : $";
    cin >> balance;
    while (true)
    {
        cout<<"You currently have $" << balance << endl;
        cout<<"Which game would you like to play :- " << endl;
        cout<<"                                         " << endl;
        cout<<"1. [7.7.7] Casino --> Vegas Slot Game " << endl;
        cout<<"2. Guess The Number Between [1 - 5] " << endl;
        cout<<"3. Roulette :- Bet On Your Numbers " << endl;
        cout<<"                                     " << endl;
        cout<<"Press [1] , [2] , [3]" << endl;
        int a, b, check;
        cin>>a;

        if (a == 1)
        {
            srand(time(0)); // Initialize random number generator
            cout << "BET Your Money" << endl;
            cin >> b;

            if (b <= balance && b > 0)
            {
                cout << "LETS SEE YOUR LUCK !!" << endl;
                cout << "                     " << endl;
                usleep(2000000); // 1sec = 1000000 microsec

                int num1 = (rand() % 10);
                int num2 = (rand() % 10);
                int num3 = (rand() % 10);
                cout << num1 << "   " << num2 << "   " << num3 << "   " << endl;

                if (num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0)
                {
                    cout << "    " << endl;
                    cout << "CONGRATULATIONS !!!!" << endl;
                    cout << "     " << endl;
                    balance = balance + b * 2;
                    cout << "You Have Won :--> $" << b * 2 << endl;
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }

                else if (num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0)
                {
                    cout << "    " << endl;
                    cout << "CONGRATULATIONS !!!!" << endl;
                    cout << "     " << endl;
                    balance = balance + b * 2;
                    cout << "You Have Won :--> $" << b * 2 << endl;
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }

                else if (num1 == num2 && num2 == num3 && num3 == num1)
                {
                    cout << "    " << endl;
                    cout << "CONGRATULATIONS !!!!" << endl;
                    cout << "     " << endl;
                    balance = balance + b * 5;
                    cout << "You Have Won :--> $" << b * 5 << endl;
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }
                else if (num1 == 7 && num2 == 7 && num3 == 7)
                {
                    cout << "    " << endl;
                    cout << "CONGRATULATIONS !!!!" << endl;
                    cout << "     " << endl;
                    balance = balance + b * 10;
                    cout << "You Have Won :--> $" << b * 10 << endl;
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }

                else
                {
                    cout << "    " << endl;
                    cout << "OOPS ! You Have Won Nothing !!" << endl;
                    cout << "     " << endl;
                    balance = (balance - b);
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }

                cout << endl;
                cout << endl;
                cout << "[Press 1] :--> If You Like To Try Another Game" << endl;
                cout << "[Press 2] :--> To QUIT" << endl;
                cout << endl;
                cin >> check;
                if (check == 2)
                {
                    cout << "GOODBYE !!!" << endl;
                    break;
                }
                else
                {
                    if (balance > 0)
                    {
                        cout << "LETS PLAY !!!!" << endl
                             << endl;
                    }
                    else
                    {
                        cout << " SORRY YOU HAVE NO BALANCE " << endl;
                        break;
                    }
                }
            }

            else if (b < 0)
            {
                cout << "You Cannot Place A Bet in Negative" << endl;
            }
            else
            {
                cout << "You Cannot PLace A Bet More Than Your Current Balance " << endl;
            }
        }

        if (a == 2)
        {
            srand(time(0));
            cout << "BET Your Money" << endl
                 << endl;
            cin >> b;

            if (b <= balance && b > 0)
            {
                cout << "Choose a Number Between [1-5] :- ";
                int c;
                cin >> c;

                cout << "LETS SEE YOUR LUCK !!" << endl;
                cout << "                     " << endl;
                usleep(2000000); // 1sec = 1000000 microsec
                int num = (rand() % 5);
                cout << "The Number Choosen By Computer :- " << num << endl;

                if (num == c)
                {
                    cout << endl;
                    cout << "CONGRATULATIONS !!!!" << endl;
                    cout << "     " << endl;
                    balance = balance + b * 2;
                    cout << "You Have Won :--> $" << b * 2 << endl;
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }

                else
                {
                    cout << "    " << endl;
                    cout << "OOPS ! You Have Won Nothing !!" << endl;
                    cout << "     " << endl;
                    balance = (balance - b);
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;
                }

                cout << endl;
                cout << endl;
                cout << "[Press 1] :--> If You Like To Try Another Game" << endl;
                cout << "[Press 2] :--> To QUIT" << endl;
                cout << endl;
                cin >> check;
                if (check == 2)
                {
                    cout << "GOODBYE !!!" << endl;
                    break;
                }
                else
                {
                    if (balance > 0)
                    {
                        cout << "LETS PLAY !!!!" << endl
                             << endl;
                    }
                    else
                    {
                        cout << " SORRY YOU HAVE NO BALANCE " << endl;
                        break;
                    }
                }
            }

            else if (b < 0)
            {
                cout << "You Cannot Place A Bet in Negative" << endl;
            }
            else
            {
                cout << "You Cannot PLace A Bet More Than Your Current Balance " << endl;
            }
        }

        if(a==3)
        {   
            cout<<endl;
            cout<<"Bet Your Money"<<endl<<endl;

            cin>>b;
            if (b<=balance)
            {
                cout<< "On how many numbers do you want to place your bet [1 - 36] :- ";
                int f;
                cin>>f;
                int moneynum = b/f;
                cout<<"Bet on EACH Number :- $"<<moneynum<<endl;

                int number[f];

                for (int i = 0;i<f;i++){
                    cout<<"On Which Number Do You Want To Place Your Bet :- ";
                    cin>>number[i];

                }

                cout<<endl<<"Lets See Your Luck !!! "<<endl<<endl;
                usleep(2000000);
                srand(time(0));
                int random = 1 + (rand()%36);

                cout<<"The Number Choosen By Computer :- "<<random<<endl;

                int z = 0;
                for (int  i = 0; i < f; i++)
                {
                    if (number[i]==random)
                    {
                        z = z+1;
                    }
                }
                
                if (z>0){
                    cout << endl;
                    cout << "CONGRATULATIONS !!!!" << endl;
                    cout << "     " << endl;
                    balance = balance +  (moneynum*36);
                    cout << "You Have Won :--> $" << moneynum*36 << endl;
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;

                }
                else{
                    cout << "    " << endl;
                    cout << "OOPS ! You Have Won Nothing !!" << endl;
                    cout << "     " << endl;
                    balance = (balance - b);
                    cout << "YOUR CURRENT BALANCE --> $" << balance << endl;

                }
                cout << endl;
                cout << endl;
                cout << "[Press 1] :--> If You Like To Try Another Game" << endl;
                cout << "[Press 2] :--> To QUIT" << endl;
                cout << endl;
                cin >> check;
                if (check == 2)
                {
                    cout << "GOODBYE !!!" << endl;
                    break;
                }
                else
                {
                    if (balance > 0)
                    {
                        cout << "LETS PLAY !!!!" << endl
                             << endl;
                    }
                    else
                    {
                        cout << " SORRY YOU HAVE NO BALANCE " << endl;
                        break;
                    }
                }
            }
            else if (b < 0)
            {
                cout << "You Cannot Place A Bet in Negative" << endl;
            }
            else
            {
                cout << "You Cannot PLace A Bet More Than Your Current Balance " << endl;
            }   
        }
    }
    return 0;
}
