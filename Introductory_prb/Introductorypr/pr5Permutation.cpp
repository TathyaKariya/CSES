#include<iostream>
#include<bits/stdc++.h>
#include<vector>
//#include<vector>
using namespace std;
typedef unsigned long long ull; 
 
int main()
{
    ull n;
    cin>>n;
    vector<ull> m1;
    vector<ull> m2;
    for(int i=n;i>0;i--)
    {
        m1.push_back(i);
        i--;
    }
    for(int i=n-1;i>0;i--)
    {
        m2.push_back(i);
        i--;
    }
    
    if(n%2==0)
    {
        //swap(m1[0],m1[1]);
        //swap(m2[0],m2[1]);
        reverse(m1.begin(),m1.end());
        reverse(m2.begin(),m2.end());
        m1.insert(m1.end(),m2.begin(),m2.end());
    }
    else
    {
        m1.insert(m1.end(),m2.begin(),m2.end());
    }
    
    for(int i=0; i<m1.size();i++)
    {
        if(n==1)
        {
            cout<<m1[0];
            return 0;
        }
        if(m1[i+1]-m1[i]==1 || m1[i]-m1[i+1]==1)
        {    
            cout<<"NO SOLUTION";
            return 0;
        }    
    }

   
    for(int i=0;i<m1.size();i++)
    {
        cout<<m1[i]<<" ";
    }
}