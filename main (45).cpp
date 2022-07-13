//Function Problem
#include <iostream>

using namespace std;
bool check(int a){
    if(a%2==0){
        return true;
    }
    return false;
}

int main()
{
    int a;
    cin>>a;
    
   if(check(a)==1){
       cout<<"Even";
   }
   else{
       cout<<"Odd";
   }

    return 0;
}