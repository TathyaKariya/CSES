#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull;

string solution(string no)
{
    unordered_map<char,ull> pali;
    for(int i=0;i<no.length();i++)
    {
        pali[no[i]]++;
    }
    string w="";
    for(auto x:pali)
    {
        if(x.second%2==1)
        {
            w=w+x.first;
            pali[x.first]--;
        }
    }
    string begin="";
    for(auto x:pali)
    {
        for(int k=0;k<x.second/2;k++)
        {
            begin+=x.first;
            pali[x.first]--;

        }
    }
    string end="";
    for(auto x:pali)
    {
        for(int k=0;k<x.second;k++)
        {
            end+=x.first;
            pali[x.first]--;

        }

    }
    reverse(end.begin(),end.end());
    string ans=begin+w+end;
    string revans;
    revans=ans;
    reverse(revans.begin(),revans.end());
    if(ans.begin()==ans.end())
    {
        cout<<ans<<endl;
    }
    else{cout<<"NO SOLUTION";}

}



int main()
{
    string n;
    cin>>n;
    solution(n);

}