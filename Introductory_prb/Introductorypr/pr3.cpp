#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    string yo;
    cin>>yo;
    //int ans=0;
    int k=1;
    int j=1;
    for(int i=0;i<yo.length();i++)
    {
        //int k=1;
        if(yo[i]==yo[i+1])
        {
            //int j=1;
            j++;
        if(j>k)
        {
            k=j;
        }
        }else{j=1;}
        


    }
    cout<<k;
}