//break and continue statement:-
#include<iostream>
using namespace std;
int main(){
  //problem 2:-write a program to print odd number between 1 to 100?
  //using continue.....
    for(int i=1;i<=100;i++){
        if(i%2==0){
            Continue;
        }
        cout<<i<<endl;
    }
  //using break...
   for(int i=1;i<=100;i++){
        if(i%2==0){
            break;
        }
        cout<<i<<endl;
    }
  //output:-1

    
    return 0;
}
