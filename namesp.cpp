//namesp.cpp    --namespace
#include <iostream>
#include "namesp.h"

namespace pers{
    using std::cout;
    using std::cin;
    void getPerson(Person & rp){
        cout<<"enter first name: ";
        cin>>rp.fname;
        cout<<"enter laste name: ";
        cin>>rp.lname;
    }

    void showPerson(const Person & rp){
        std::cout<<rp.lname<<", "<<rp.fname;
    }
}

namespace debts{
    void getDebt(Debt & rd){
        getPerson(rd.name);
        std::cout<<"enter debt: ";
        std::cin>>rd.amount;
    }
    void showDebt(const Debt & rd){
        showPerson(rd.name);
        std::cout<<": $"<<rd.amount<<std::endl;
    }
<<<<<<< HEAD
    double sumDebts(const Debt ar[], int n){
=======
    double sumDEbts(const Debt ar[], int n){
>>>>>>> 7ded22b7385fa4b7afa49b7f4239f3e3a370ef55
        double total=0;
        for(int i=0; i<n; i++)
            total += ar[i].amount;
        return total;
    }
}