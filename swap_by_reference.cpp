#include <iostream>
using namespace std;
void swapValues(int &number1,int &number2);
int main()
{
   int number1,number2;
   cout<<"Enter number 1 and number 2: \n";
   cin>>number1>>number2;
   cout<<"The result pefore: \n"<<"number 1 = "<<number1<<"   number 2 = "<<number2<<"\n";
 swapValues(number1,number2);
 cout<<"The result after: \n"<<"number 1 = "<<number1<<"   number 2 = "<<number2<<"\n";
}
void swapValues(int &number1,int &number2)
{
    int temp=number1;
    number1=number2;
    number2=temp;
}
