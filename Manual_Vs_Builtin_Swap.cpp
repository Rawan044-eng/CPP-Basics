#include <iostream>
using namespace std;
int main()
{
int array1[2],array2[2];
cout<<"Enter the numbers of the first array:\n";
for(int i=0;i<2;i++)
{
cin>>array1[i];
}
cout<<"Enter the numbers of the second array:\n";

for(int i=0;i<2;i++)
{
cin>>array2[i];
}
cout<<"array 1 before swap : "<<array1[0]<<endl;
cout<<"array 2 before swap : "<<array2[0]<<endl;
for(int i=0;i<2;i++)
{
   int temp=array1[i];
    array1[i]=array2[i];
    array2[i]=temp;
//or use  swap(array1[i], array2[i]);
}
cout<<"array 1 after swap : "<<array1[0]<<endl;
cout<<"array 2 after swap : "<<array2[0]<<endl;



return 0;

}
