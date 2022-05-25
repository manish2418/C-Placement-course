//Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result.
#include <iostream>

using namespace std;

int main()
{
   int maths=78;
   int English=45;
   int Computer=62;
   
   int totalmarks=maths+English+Computer;
   int per=((totalmarks)*100)/300;
   cout<<totalmarks<<endl;
   cout<<per;
   
  
   
    return 0;
}