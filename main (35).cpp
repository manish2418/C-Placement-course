// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
#include <iostream>

using namespace std;

int main()
{
   int ch;
   int ca;
   
    cin>>ch;
    cin>>ca;
    
    double att= ca*100/ch;
    cout<<att<<endl;;
    
    if(att>=75){
        cout<<"allow";
    }else{
        cout<<"not allow";
    }
   
   
   
  
   
    return 0;
}