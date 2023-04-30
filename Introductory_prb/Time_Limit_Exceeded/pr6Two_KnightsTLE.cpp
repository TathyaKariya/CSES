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
        ull deduct=0;
        for(int k=1;k<=i;k++)
        {
            for(int j=1;j<=i;j++)
            {
                /*A knight moves 2steps forward and a step on either side.
                therefore taking four directions total 8 places where another knight cannot be.
                Hence calculating "deduct" and applying conditions to check if the another knight 
                lies in i*i plane(our 2D matrix).*/
                
                if(k-2>0 && j+1<=i)
                {
                    deduct++;
                }
                if(k-2>0 && j-1>0)
                {
                    deduct++;
                }
                if(k+2<=i && j+1<=i)
                {
                    deduct++;
                }
                if(k+2<=i && j-1>0)
                {
                    deduct++;
                }
                if(k+1<=i && j-2>0)
                {
                    deduct++;
                }
                if(k-1>0 && j-2>0)
                {
                    deduct++;
                }
                if(k+1<=i && j+2<=i)
                {
                    deduct++;
                }
                if(k-1>0 && j+2<=i)
                {
                    deduct++;
                }
            }
        }
        an=an-(deduct/2);
        //Divided deduct by 2 because the knight1==knight2 so the number of cases are halfed.
        cout<<an<<endl;
    }
    
} 
/*
CODE IS WORKING BUT TIME LIMIT HAS EXCEEDED!!! ahhhhhhhh!*/