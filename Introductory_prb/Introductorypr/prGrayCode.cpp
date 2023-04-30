#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ull;


int main()
{
    int n;
    cin>>n;
    int p=1;
    for(int i=0;i<n;i++)
    {
        p*=2;
    }
    vector<string> v1;
    map<string,int> ma;
    string init="";
    for(int i=0;i<n;i++)
    {
        init=init+"0";
    }
    v1.push_back(init);
    string last=init;
    ma[last]=1;

    while(v1.size()!=p)
    {
        string curr=last;
        for(int i=0;i<last.size();i++)
        {
            			if(curr[i] == '0'){
				curr[i] = '1';
			}
			else{
				curr[i] = '0';
			}
 
			if( ma.find(curr) == ma.end() ){
				last = curr;
				v1.push_back(last);
				ma[last] = 1;
				break;
			}
 
			if(curr[i] == '0'){
				curr[i] = '1';
			}
			else{
				curr[i] = '0';
			}


        }
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }

}