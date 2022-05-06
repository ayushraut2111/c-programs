#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    int j=a;
    for(int i=a+1;i<=b;i++)
    {
        if((j&i)==0)
        {
            c++;
        }
        else
        {
            j=j&i;
        }
        
    }
    cout<<c<<endl;
}



