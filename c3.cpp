#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char op;
    cout<<"Enter two operands and operator (+ - * /):";
    cin>>a>>b>>op;
    switch(op)
    {
      case '+': cout<<"The sum:" <<a+b;
      break;
      case '-': cout<<"The sub:" <<a-b;
      break;
      case '*': cout<<"The mul:" <<a*b;;
      break;
      case '/': cout<<"The div:" <<a/b;
      break;
      default: cout<<"\n Wrong operator";
    }
    return 0;
}