#include<iostream>
#include<bits/stdc++.h>
#include<vector>
//#include<vector>
using namespace std;
typedef long long ull; 

int main()
{
    ull n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ull x,y,ans;
        cin>>x>>y;
        //Taking Input
        if(x==y)
        {
            ans=x*x-(x-1);
            //condition if x and y are equal
        }
        ull max_baby;
        max_baby=max(x,y);
        //finding max element of x and y;
        if(x<y && y%2==0)
        {
            ans=(max_baby-1)*(max_baby-1) + x;
        }
        else
        {
            if(x<y)
            {
                ans=max_baby*max_baby - (x-1);
            }
        }

        if(x>y && x%2==0)
        {
            ans=max_baby*max_baby -(y-1);
            
        }
        else
        {
            if(x>y)
            {
                ans=(max_baby-1)*(max_baby-1) + y;
            }
        }
        cout<<ans<<endl;
        
    }
}