#include <iostream>
using namespace std;

int main()
{
//Program 2:program to build calculator using switch statement?
  char op;
  float n1,n2;
  cout<<"Enter the Operator(+,-,*,/):";
  cin>>op;
  cout<<"Enter the number ";
  cin>>n1>>n2;

  switch (op)
  {
  case '+':
    cout<<n1<<" + "<<n2<<"  =  "<<n1+n2;
    break;
   case '-':
    cout<<n1<<" - "<<n2<<"  =  "<<n1-n2;
    break;
   case '*':
    cout<<n1<<" * "<<n2<<"  =  "<<n1*n2;
    break;
   case '/':
    cout<<n1<<" / "<<n2<<"  =  "<<n1/n2;
    break;
    default:
    cout<<"Error!The operator is not correct";
    break;
  }

    return 0;
  }
