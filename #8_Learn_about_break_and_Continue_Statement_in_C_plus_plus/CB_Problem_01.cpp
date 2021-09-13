//break and continue statement:-
#include<iostream>
using namespace std;
int main(){
  //using break statement:-
    for(int i=1;i<=100;i++){
       if(i==4){
          break;
        }
       cout<<i<<endl;
    }
  //using continue statement:-
   for(int i=1;i<=100;i++){
       if(i==4){
          continue;
        }
       cout<<i<<endl;
    }
  return 0;
}
