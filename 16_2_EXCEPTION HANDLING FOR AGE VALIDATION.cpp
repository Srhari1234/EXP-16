//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age: ";
    cin>>age;
    try
    {
        if (age<18)
        {
            throw age;
        }
        else
        {
            cout<<"age: "<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a)
    {
        cout<<"\nERROR: Underage ("<<age<<")"<<endl;
    }
}