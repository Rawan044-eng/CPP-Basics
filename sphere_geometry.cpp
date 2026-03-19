#include <iostream>
#include <cmath>
using namespace std;
float area_of_sphere(int radius);
float volume_of_sphere(int radius);
int main()
{
int radius;
cout<<"Enter the radius of sphere: \n";
cin>>radius;
cout<<"the area of sphere= "<<area_of_sphere(radius)<<"\n";
cout<<"the volume of sphere= "<<volume_of_sphere(radius)<<"\n";
}
float area_of_sphere(int radius)
{
const float pi=3.14;
return 4*pi*radius*radius;
}
float volume_of_sphere(int radius)
{
  const float pi=3.14;
return 4.0/3.0*pi*pow(radius, 3);

}
