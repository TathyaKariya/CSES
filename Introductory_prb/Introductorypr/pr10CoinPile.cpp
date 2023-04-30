#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull;


int main()
{
   ull t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
        ull a,b;
        cin>>a>>b;
        if((a+b)%3==0 && a!=0 && b!=0 && (min(a,b)*2>=max(a,b)))
        {
            /*while(max(a,b)-min(a,b)!=1)
            {
                x-=2;
                y-=1;
            }
            for(int j=0;j<max(x,y);j++)
            {
                if(x>y)
                {
                    x-=2;
                    y-=1;
                }
                else
                {
                    x-=1;
                    y-=2;
                }
            }*/
            cout<<"YES"<<endl;
        }
        else
        {
            if(a=b==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
   }
}