//arrfun4.cpp --function with an array range
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);//pointer can not be used to modify element values in the array
int main()
{
    using namespace std;
    int cookies[ArSize]={1,2,4,8,16,32,64,128};
    int sum=sum_arr(cookies, cookies+ArSize);
    cout<<"total cookies eaten: "<<sum<<endl;
    sum=sum_arr(cookies, cookies+3);
    cout<<"first three eaters ate: "<<sum<<" cookies.\n";
    sum=sum_arr(cookies+4, cookies+8);
    cout<<"last four eaters ate "<<sum<<" cookies.\n";
    return 0;
}

int sum_arr(const int * begin, const int * endl)
{
    const int * pt;
    int total =0;

    for (pt = begin; pt != endl; pt++)
        total = total + *pt;
    return total;
}