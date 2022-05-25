//Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result.
#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Enter 4 digit number";
   cin>>n;
   int y=n+8;
   int z=y/3;
   int m=z%5;
   int a=m*5;
   cout<<a;
   
    return 0;
}