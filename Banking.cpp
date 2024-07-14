#include <iostream>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 12;
    int choice = 0;
    do
    {
        cout << "******************************" << "\n";
        cout << "This is a Banking System\n";
        cout << "****************************** " << "\n";
        cout << "1. Show Balance" << "\n";
        cout << "2. Deposit Money" << "\n";
        cout << "3. Withdraw Money" << "\n";
        cout << "4. Exit" << "\n";
        cout << "enter the choice\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            cout << "thank u\n";
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    } while (choice != 4);
    return 0;
}
void showbalance(double balance)
{
    cout << "Your balance is" << balance << "\n";
}
double deposit()
{
    double amount;
    cout << "enter u r amount:" << "\n";
    cin >> amount;
    return amount;
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "enter u r amount:" << "\n";
    cin >> amount;
    return amount;
}