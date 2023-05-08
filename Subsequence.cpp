
#include <bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int>&vt,vector<vector<int>>&ans,vector<int>&temp,int n){
    if(ind==n){
        return;
    }
    temp.push_back(vt[ind]);
    ans.push_back(temp);
    printF(ind+1,vt,ans,temp,n);
    temp.pop_back();
    printF(ind+1,vt,ans,temp,n);
}
int main()
{
   vector<int>vt={10,9,2,5,3,7,101,18};
   vector<vector<int>>ans;
   vector<int>temp;
   int n=vt.size();
   printF(0,vt,ans,temp,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}