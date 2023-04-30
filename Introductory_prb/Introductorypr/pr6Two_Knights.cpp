//Two Knights and A KING!! Keep going Guys!
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull; 

int main()
{
    ull n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ull an;
        ull isqr=i*i;
        //Squaring i to get the set of elements in Matrix.
        an= isqr*(isqr-1)/2;
        if(n>2)
        {
            an=an-4*(i-2)*(i-1);
        }
        cout<<an<<endl;
    }
}