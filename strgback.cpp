//strgback.cpp --a function that returns a pointer to char
#include <iostream>
char * buildstr(char c, int n); //the return value type is * char 
int main()
{
    using namespace std;
    int times;
    char ch;

    cout<<"enter a character: ";
    cin>>ch;
    cout<<"enter an integer: ";
    cin>>times;
    char *ps=buildstr(ch, times);
    cout<<ps<<endl;
    delete []ps;    //free memory
    ps=buildstr('+', 4);   //reuse pointer
    cout<<ps;
    cout<<"-done-"
    <<ps;
    delete [] ps;   //free memory
    return 0;
}

//builds string made of n c characters
char * buildstr(char c, int n)
{
    char *pstr = new char[n+1]; //create a char array of size n, and pstr points to the last empty element
    pstr[n]='\n';
    while(n-->0)
        pstr[n]=c;
    return pstr;
}