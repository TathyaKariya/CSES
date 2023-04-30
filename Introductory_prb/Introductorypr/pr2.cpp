#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int um=0;
    for(int i=1;i<n;i++)
    {
        int k;
        cin>>k;
        um=um+k;

    }
    int ans;
    ans=n*(n+1)/2;
    ans=ans-um;
    cout<<ans;
    return 0;
}