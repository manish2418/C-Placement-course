

//Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.
#include <iostream>

using namespace std;

int main()
{
   int r;
   cin>>r;
   int area=(3.14)*(r*r);
   int perimeter=(2*3.14)*r;
   cout<<area<<endl;
   cout<<perimeter;

    return 0;
}