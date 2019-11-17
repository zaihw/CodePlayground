//arrfun3.cpp   --array functions and const
#include <iostream>
const int Max=5;
int fill_array(double ar[], int limit);
void show_array(const double[], int n);
void revalue(double r, double ar[]);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);

    if (size>0)
    {
        cout<<"enter revaluation factor: ";
        double factor;
        cin>>factor;
        while(!factor)
        {
            cin.clear();
            double factor_new
            while(cin.get()!= "\n")
            continue;
            cout<<"bad input; please enter a number: "
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout<<"Done!\n"
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"enter valur #"<<(i+1)<<": ";
        //cin>>temp;
        if(!(cin>>temp))
        {
            cin.clear()
            cin>>temp;
            while(temp!="\n")
                continue;
            cout<<"bad input; input process terminated.\n";
            break;
        }
        else if (temp<0)
        break;
        ar[i]=temp;
    }
    return i;
    
}

void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i=0; i<n;i++)
    {
        cout<<"property #"<<(i+1)<<": $";
        cout<<ar[i]<<endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i=0; i<n; i++)
        ar[i]*=r;
}