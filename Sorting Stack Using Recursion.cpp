
#include <bits/stdc++.h>

using namespace std;
void insert(stack<int>&st,int temp){
    if(st.size()==0 || st.top()<=temp){
        st.push(temp);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
    return;
}

void sorti(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int temp=st.top();
    st.pop();
    sorti(st);
    insert(st,temp);
    return;
}

int main()
{
 stack<int>st;
 for(int i=0;i<5;i++){
     int n;
     cin>>n;
     st.push(n);
 }
 
 sorti(st);
 while(!st.empty()){
     cout<<st.top();
     st.pop();
 }
    return 0;
}