#include<iostream>
using namespace std;
int main(){
  //problem 2:-check wether a number is prime or not?
    int n;
    bool isprime=true;
    cout<<"Enter the positive number :";
    cin>>n;
    // 0 and 1 is not a prime number..
    if(n==0 || n==1){
        isprime=false;
    }
    else{
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                isprime=false;
                break;
            }

        }
        if(isprime){
            cout<< n <<"is a prime number ";
        }
        else{
            cout<< n<<"is not a prime number ";
        }
    }

    return 0;
}
