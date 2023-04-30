#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include <cstdlib>
using namespace std;
typedef unsigned long long ull;


int main()
{
    ull n;
    cin>>n;
    vector<ull> v1;
    ull a=0;
    ull b=0;
    for(int i=0;i<n;i++)
    {
        ull inp;
        cin>> inp;
        v1.push_back(inp);
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        if(a==b)
        {
            a=a+v1[i];
        }
        if(a<b)
        {
            a=a+v1[i];
        }
        if(a>b)
        {
            b=b+v1[i];
        }
    }
    long long ans=abs(a-b);
    cout<<ans<<endl;
}