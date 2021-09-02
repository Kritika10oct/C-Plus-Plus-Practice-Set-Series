#include <iostream>
using namespace std;
int main()
{
 //problem 2:-sum of positive numbers using while and do while loops?
  //Using while loops
    int number;
    int sum=0;
    cout<<"Enter the positive number";
    cin>>number;
    while(number>=0){
      sum +=number;
    
       cout<<"Enter the positive number";
          cin>>number;
    }
    cout<<"the sum of number is:"<<sum<<endl;
  
  //Using do while loops
  
    int number;
    int sum = 0;
    cout << "Enter the positive number";
    cin >> number;
    do
    {
        sum += number;
        cout << "Enter the positive number";
        cin >> number;
    }while(number>=0);
    cout<<"the sum of number is:" << sum << endl;

    return 0;
}
