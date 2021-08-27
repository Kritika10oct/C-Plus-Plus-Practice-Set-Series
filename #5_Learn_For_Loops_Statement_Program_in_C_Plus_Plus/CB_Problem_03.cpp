#include<iostream>
using namespace std;
int main(){
    //Problem 3:-Find the sum of n natural number?
    int num,sum;
    sum=0;
    cout<<"Enter the positive number";
    cin>>num;
    for(int i=1;i<=num;i++){
        sum +=i;
    }
    cout<<"Sum ="<<sum<<endl;

    return 0;
}
