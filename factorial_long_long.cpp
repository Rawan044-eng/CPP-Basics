#include <iostream>
using namespace std;
long long factorial(int x);
int main()
{
int x;
cout<<"Enter a positive number: \n";
cin>>x;
if (x < 0) {
cout << "Error! Factorial of a negative number doesn't exist.\n";
    }
else {
        cout << "Factorial of " << x << " = " << factorial(x);
    }

}
 long long factorial(int x)
{
long long sum=1;
for(int i=x;i>0;i--)
sum*=i;
return sum;

}

