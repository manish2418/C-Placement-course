//Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
#include <iostream>

using namespace std;

int main()
{
  char n;
  cout<<"Do you have any medical cause";
  cin>>n;
  if(n=='Y'){
      cout<<"Yes i have medical cause"<<endl;
  }else if(n=='N'){
      cout<<"No i do not have any medical cause";
  }else{
      cout<<"Please enter valid informatiom";
  }

    return 0;
}