// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int q=n*100;
   if(n>10){
       int price=q-q*0.1;
       cout<<price;
   }else{
       cout<<q;
   }
   
    return 0;
}