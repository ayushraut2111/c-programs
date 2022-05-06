// #include<bits/stdc++.h>
// using namespace std;
// #define in long long int
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         in n;
//         cin>>n;
//         in a[n];
//         priority_queue<in>maxh;
//         priority_queue<in,vector<in>,greater<in>>minh;
//         for(in i=0;i<n;i++)
//         {
//         cin>>a[i];
//         maxh.push(a[i]);
//         minh.push(a[i]);
//         }
//         in max=maxh.top();
//         in min=minh.top();
//         while(min<max)
//         {
//             max=maxh.top();
//             min=minh.top();
//             max--;
//             min++;
//             maxh.pop();
//             minh.pop();
//             maxh.push(max);
//             minh.push(min);
//         }
//         cout<<abs(min-max)<<endl;
//     }
// }
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
        int sum=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        sum+=a[i];
        }
        
       if(sum%n==0)
       cout<<0<<endl;
       else
       cout<<1<<endl;
    }
}