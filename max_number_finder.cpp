#include <iostream>
#include <cmath>
using namespace std;
int maxnumber(int x,int y);
int main()
{
int x,y;
cout<<"Enter x,y \n";
cin>>x>>y;
 if(x==y)
cout<<"The numbers are equal\n";
else
cout<<"the max is: "<<maxnumber(x,y);

}
int maxnumber(int x,int y)
{
if(x>y)
return x;
else
return y;

}

