//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include <iostream>

using namespace std;

int main()
{
  char n;
 cin>>n;
 if(n>'a' && n<'z'){
     cout<<"lowercase";
 }else if(n>'A' && n<'Z'){
     cout<<"uppercase";
 }else{
     cout<<"Please enter vaid alphabet";
 }

    return 0;
}