#include<iostream>
using namespace std;
int main(){
    //Problem 2:-Program to check the given chracter is vowel or consonent?
    char c;
    cout<<"Enter the Chracter :";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"The given chracter is vowel";
    }
    else{
        cout<<"The given chracter is consonent";
    }
  return 0;
}
