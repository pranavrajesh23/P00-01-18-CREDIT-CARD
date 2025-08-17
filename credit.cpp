#include<iostream>
#include<fstream>
using namespace std;

string name,order;
int amt;

void transaction()
{
    cout<<"\n-----Transaction Process----";
    cout<<"\nTransaction completed\n";
    fstream custDB("customerDB.csv", ios::in | ios::out | ios::app);
    custDB<<name<<","<<amt<<","<<order<<endl;
    cout<<"\nCustomer will receive the statement at the end of the cycle\n";
}

bool validCard()
{
    string valid;
    cout<<"\nIs it a valid card? (yes/no)";
    cin>>valid;
    return valid=="yes";
}

bool fundAvailable()
{
    string fund;
    cout<<"\nFund avaiable? (yes/no)";
    cin>>fund;
    return fund=="yes";
}

bool validAcnt()
{
    string acnt;
    cout<<"\nIs it a valid account? (yes/no)";
    cin>>acnt;
    return acnt=="yes";
}

void verification()
{
    cout<<"\n----Verification Process----\n";
    while(true)
    {
        if(validCard())
        {
            if(fundAvailable())
            {
                if(validAcnt())
                {
                    cout<<"\nPayment verified by the bank";
                    break;
                }
                else{
                    cout<<"\nNot a valid account\n";
                    continue;
                }
            }
            {
                cout<<"\nFunds not available, try again\n";
            }
        }
        else
        {
            cout<<"\nNot a valid card, try again\n";
        }
    }
}

int main()
{
    cout<<"\n-----Credit Card Payment----\n";
    cout<<"\nEnter your name: \n";
    cin>>name;
    cout<<"\nEnter the amoutn: \n";
    cin>>amt;
    cout<<"\nEnter the ordered item: \n";
    cin>>order;
    cout<<"\nOrder placed\n";
    cout<<"\nmoving to verification process\n";
    verification();
    cout<<"\nMoving to transaction part\n";
    transaction();
    cout<<"\n-----Payment Process Completed-----\n";
}