#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull;


int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> v1;
    do{
        v1.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<v1.size()<<endl;
    for(string x : v1)
    {
        cout<<x<<endl;
    }



}