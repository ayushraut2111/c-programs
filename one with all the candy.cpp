#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      int init=0,ans=0,count=0,prev=0;
      for(int i=0;i<n;i++)
      {
          if(a[i]==0||i==n-1)
          {
              if(i==n-1)
              count++;
              if(count>=ans)
              {

                  prev=init;
                  ans=count;
                  init=i+1;
                  count=0;
              }
          }
          else
          {
              count++;
          }
      }
      int i=prev;
      int c=0;
      while(a[i]>0)
      {
          if(i!=n-1)
          {
          a[i]-=1;
          i++;
          }
          else
          {
              a[i]-=1;
              i=0;
          }
      c++;
      }
      cout<<c<<endl;
  }

}