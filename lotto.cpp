//lotto.cpp --probability of winning
//note: some implementations requires double instead of long double
#include <iostream>
long double probablity(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices;
    cout<<"enter the total number of choices on the game card \n"
            "and the number of picks allowed: \n";
    while((cin>>total>>choices)&&(choices<=total))
    {
        cout<<"you have one chance in ";
        cout<<probablity(total, choices);
        cout<<" of winning.\n";
        cout<<"next two numbers (q to quit): ";
    }
    cout<<"bye\n";
    return 0;
}

//the following function calculates the probablity of picking picks
//numbers correctly from number choices
long double probablity(unsigned number, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n, p; p>0; n--,p--)
    {
        result=result*n/p;
    }
    return result;
}
