//calling.cpp --define, prototyping, and calling a function
#include <iostream>
void simple();  //function prototype

int main()
{
    using namespace std;
    cout<<"main() will call the simple() function:\n";
    simple();   //function call
    cout<<"main() is finished with the simple fuction.\n";
    //cin.get();
    return 0;
}

//function definition
void simple()
{
    using namespace std;
    cout<<"I'm nothing but a simple function.\n";
}
