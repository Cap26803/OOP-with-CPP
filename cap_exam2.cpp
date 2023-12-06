#include <iostream>
using namespace std;

class Bank
{
public:
    int accNo;
    string accHolder;
    int depo;
    int withdr;

    void deposit()
    {
        cout << "Enter the amount to be deposited: " << endl;
        cin >> depo;
    }

    void withdraw()
    {
        cout << "Enter the amount to be withdrawn: " << endl;
        cin >> withdr;
    }
};

int main()
{
    Bank b1;
    cout << "Enter Account number: " << endl;
    cin >> b1.accNo;
    cout << "Enter Account Holder's name: " << endl;
    cin >> b1.accHolder;
    b1.deposit();

    try
    {
        b1.withdraw();
        if (b1.withdr > b1.depo)
        {
            throw string("Insufficient Balance");
        }
    }
    catch (const string &error)
    {
        cout << "Error: " << error << endl;
    }
    try
    {
        b1.accNo;
        if (b1.accNo > 100)
        {
            throw string("Invalid Account number");
        }
    }
    catch (const string &error)
    {
        cout << "Error: " << error << endl;
    }

    return 0;
}
