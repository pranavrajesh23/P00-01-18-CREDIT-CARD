#include<iostream>
using namespace std;

string name,order;
int amt;

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

}