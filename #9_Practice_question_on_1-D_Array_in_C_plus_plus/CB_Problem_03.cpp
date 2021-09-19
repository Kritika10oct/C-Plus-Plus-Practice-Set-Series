 //Array declaration:-
//dataType arrayName[arraysize];
#include<iostream>
using namespace std;
int main(){
//problem 3:-how to take input fro user and print all element?
    int n;
     cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<"";
     }
}
