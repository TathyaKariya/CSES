#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull; 

int main()
{
    ull n;
    cin>>n;
    vector<ull> v1;
    vector<ull> v2;
    if((n*(n+1)/2)%2==0)
    {
        ull y;
       if(n%2)
       {
        for(int i=1;i<=n/2;i=i+2)
        {
            v1.push_back(i);
            v1.push_back(n-i);

        }
        for(int j=2;j<=n/2;j=j+2)
        {
            v2.push_back(j);
            v2.push_back(n-j);
        }
        if(v1.size()<v2.size())
        {
            v1.push_back(n);
        }
        else{
            v2.push_back(n);
        }
       }
       else{
        for(int i=1;i<=n/2;i=i+2)
        {
            v1.push_back(i);
            v1.push_back(n-(i-1));

        }
        for(int j=2;j<=n/2;j=j+2)
        {
            v2.push_back(j);
            v2.push_back(n-(j-1));
        }
       }
    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    }
    else
    {
        cout<<"NO";
    }
}