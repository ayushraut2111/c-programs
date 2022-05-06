#include<bits/stdc++.h>
using namespace std;
void leftlarger(int a[],int n)
{
    vector<int>v(n);
    v[0]=a[0];
    for(int i=1;i<n;i++)
    {
        v[i]=max(a[i],v[i-1]);
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
void rightlarger(int a[],int n)
{
    vector<int>v(n);
    v[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        v[i]=max(a[i],v[i+1]);
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    leftlarger(a,n);
    rightlarger(a,n);
    
}