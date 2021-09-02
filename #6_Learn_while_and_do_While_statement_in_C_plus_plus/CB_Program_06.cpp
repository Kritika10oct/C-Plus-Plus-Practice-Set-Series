//while and do while loop:-
//syntax:-while(condition){
//body of code
//}
//syntax:-do{
//body of code
//}while(condition);
//Problem 1:-Displaying the array elemenet using while and do while loops?

#include <iostream>
using namespace std;
int main()
{
  //Using while loop
    int arr[]={23,45,78,9,10};
    int i=0;
    while(i<5){
     cout<<arr[i]<<endl;
    i++;
    }
  //Using do while loops
    int arr[]={23,45,78,9,10};
    int i=0;
    do{
     cout<<arr[i]<<endl;
    i++;

    }while(i<5);
  return 0;
}
