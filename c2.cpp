#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter two integers:";
    cin>>num;
    if(num==0)
    {
      cout<<"zero";
    }
    else
    {
        if(num>0)
    cout<<"positive";
    else
    cout<<"Negative";
    }
    return 0;
}
