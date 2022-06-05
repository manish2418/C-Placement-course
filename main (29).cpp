
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   int count=0;
   while(n>0){
       count++;
       int x=n%10;
       n=n/10;
       if(count==2){
           sum+=x;
       }
       if(count==5){
           sum+=x;
       }
       
   }
   
    cout<<sum;
    return 0;
}