#include <bits/stdc++.h>
using namespace std;

int main() {
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
    cout<<*(lower_bound(v3.begin(),v3.end(),23)-1);
}
