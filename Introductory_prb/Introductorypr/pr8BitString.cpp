#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull; 


int main()
{
    ull n;
    cin>>n;
    ull h=1000000007;
    ull s=1;
    while(n>0)
    {
        s=s*2;
        s=s%h;
        n--;
    }
    cout<<s%h;
    
    
}