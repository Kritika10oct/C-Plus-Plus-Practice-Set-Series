//Syntax of Switch statement:
//switch(Expression)
//case :
//code block
//breaks;
//Default:
//code block
//break;

//Problem 1: weekday number to calculate weekday name?
#include <iostream>
using namespace std;

int main()
{
  int day=4;
  switch (day)
  {
    case 1:
   cout<<"Monday";
   break;
   case 2:
  cout<<"Tuesday";
  break;
  case 3:
  cout<<"Wednesday";
   break;
   case 4:
  cout<<"Thursday";
  break;
   case 5:
   cout<<"Friday";
   break;
     case 6:
  cout<<"Saturday";
   break;

   default:
  cout<<"Error!The weekend number is not correct";
   break;
  }
  return 0;
}
