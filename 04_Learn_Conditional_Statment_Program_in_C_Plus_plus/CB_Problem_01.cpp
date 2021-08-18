//problem 1:-Program to check the given number is even or odd?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the positive number :";
    cin>>n;
    if(n%2==0){
        cout<<"The number is even";
    }
    else{
        cout<< "The number is odd";
    }
  return 0;
}
