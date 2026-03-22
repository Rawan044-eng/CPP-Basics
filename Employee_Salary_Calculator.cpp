#include <iostream>
using namespace std;
int main()
{
float list[10],sum_of_salaries=0;

for(int i=0;i<10;i++)
{
cout<<"Enter the 10 employees salaries "<<i+1<<": ";
cin>>list[i];
sum_of_salaries+=list[i];
}
float total_after_bonus = sum_of_salaries * 1.10;
cout << "\n--- Results ---" << endl;
cout << "Total Salaries (Before): " << sum_of_salaries << endl;
cout << "Total Salaries (After 10% Bonus): " << total_after_bonus << endl;
cout << "Average Salary (After Bonus): " << total_after_bonus / 10 << endl;
return 0;

}
