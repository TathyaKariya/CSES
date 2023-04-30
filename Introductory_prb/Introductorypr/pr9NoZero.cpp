#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef unsigned long long ull; 


int main()
{
    ull n;
    cin>>n;
    ull an=1;
    int ans=0;
    ull h=1000000007;
    for(ull i=5;i<=n;i*=5)
    {
        ans+=n/i;
    }
    cout<<ans;
}