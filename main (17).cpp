
//Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.

#include <iostream>

using namespace std;

int main()
{
    int l=5;
    int b=7;
    int area=l*b;
    int perimeter=2*(l+b);
    cout<<area<<endl;
    cout<<perimeter;

    return 0;
}