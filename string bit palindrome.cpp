#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>v3;
    for(int i=1;i<=1000;i++)
    {
        vector<int>v1,v2;
        int x=i;
    while(x>0)
    {
        v1.push_back(x&1);
        x=x>>1;
    }
    v2=v1;
    reverse(v1.begin(),v1.end());
    if(v1==v2)
    {
        v3.push_back(i);
    }
    }
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v4;
       while(n!=0){
        v4.push_back(*(upper_bound(v3.begin(),v3.end(),n)-1));
        n=n-v4[v4.size()-1];
       }
       cout<<v4.size()<<endl;
       for(auto x: v4)
       {
           cout<<x<<" ";
       }
       cout<<endl;
    }


}