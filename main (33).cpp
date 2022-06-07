// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include <iostream>

using namespace std;

int main()
{
   int salary;
   int serviceyear;
   
   cin>>salary;
   cin>>serviceyear;
   
   if(serviceyear>5){
       int netsalary=salary+0.05*salary;
       cout<<netsalary;
       
   }else{
       cout<<salary;
   }
    
   
    return 0;
}