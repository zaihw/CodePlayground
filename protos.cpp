//protos.cpp --using prototype and function calls
#include <iostream>
void cheers(int n); //prototype no return value
double cube(double x);  //prototype return a double

int main()
{
    using namespace std;
    cheers(5);
    cout<<"Give me a number: \n";
    double side;
    cin>>side;
    double volume = cube(side);
    cout<<"A "<<side<<"-foot cube has a volume of ";
    cout<<volume<<"-Cubic feet.\n";
    cheers(cube(2));    //prototype protection at work
    return 0;

}

void cheers(int n)
{
    using namespace std;
    for(int i=0; i<n; i++)
    {
        cout<<"cheers!";
    }
    cout<<endl;
}

double cube(double x)
{
    return x*x*x;
}
