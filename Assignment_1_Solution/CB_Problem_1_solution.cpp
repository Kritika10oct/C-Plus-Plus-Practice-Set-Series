//problem 4:-There are two techique to swap two numbers
#include<iostream>
using namespace std;
int main(){
    //Method 1:-Using Temporary variable
    int a=5,b=10,temp;
    cout<<"Before swapping "<<endl;
    cout<<"a = "<<a<<"b ="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swapping"<<endl;
    cout<<"a ="<<a<<"b ="<<b<<endl;
    //method 2:-without using temporary variable
    int a=5,b=10;
    cout<<"Before swapping "<<endl;
    cout<<"a = "<<a<<"b ="<<b<<endl;
    a=a+b;//15
    b=a-b;//5
    a=a-b;//10
    cout<<"\nAfter swapping"<<endl;
    cout<<"a ="<<a<<"b ="<<b<<endl;
  return 0;
}
