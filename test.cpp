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
   
    sort(a,a+n);
    reverse(a,a+n);
      int i=0;
      int c=0;
      c=n*a[n-1];
      for(int i=0;i<n;i++)
      {
          a[i]-=a[n-1];
      }
      while(a[i]>0)
      {
          a[i]-=1;
          i++;
      c++;
      }
      cout<<c<<endl;
  }

}



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//       ll n;
//       cin>>n;
//       ll a[n];
//       for(ll i=0;i<n;i++)
//       cin>>a[i];
//       sort(a,a+n);
//       ll c=0;
//       ll i=n-1;
//       while(a[i]>0)
//       {
//           if(i!=0)
//           {
//           a[i]-=1;
//           i--;
//           }
//           else
//           {
//               a[i]-=1;
//               i=n-1;
//           }
//       c++;
//       }
//       cout<<c<<endl;
//   }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin>>t;
//   while(t--)
//   {
//       int n;
//       cin>>n;
//       int a[n];
//       for(int i=0;i<n;i++)
//       cin>>a[i];
//     if(*min_element(a,a+n)!=0)
//     {
//       int c=0;
//       for(int i=0;i<n;i++)
//       {
//           c+=*min_element(a,a+n);
//           a[i]-=*min_element(a,a+n);
//       }
//       sort(a,a+n);
//       reverse(a,a+n);
//       int i=0;
//       while(a[i]>0)
//       {
//           i++;
//       c++;
//       }
//       cout<<c<<endl;
//     }
//     else
//     {
//         sort(a,a+n);
//       reverse(a,a+n);
//         int i=0;
//         int c=0;
//         while(a[i]>0)
//         {
//             a[i]--;
//             i++;
//             c++;
//         }
//         cout<<c<<endl;
//     }
//   }

// }