#include <iostream>
using namespace std;
int calculateSum(int x,int y,int z);
float calculateAverage(int total);

int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers: \n";
    cin >>num1>>num2>>num3;

    int totalSum=calculateSum(num1,num2,num3);
    
    cout<<"The Sum is: "<<totalSum<<endl;
    cout<<"The Average is: "<<calculateAverage(totalSum)<<endl;

    return 0;
}

int calculateSum(int x,int y,int z)
{
    return x+y+z;
}

float calculateAverage(int total)
{
    return total/3.0; 
}
